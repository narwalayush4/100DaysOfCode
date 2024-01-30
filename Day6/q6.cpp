// pair sum problem 
// good approach for sorted arrays

#include <iostream>
using namespace std;

bool pairsum(int *arr, int n, int key)
{
    int low = 0;
    int high = n-1;

    while (low < high)
    {
        if (arr[low] + arr[high] == key)
        {
            cout << low << ' ' << high << endl;
            return true;
        }else if (arr[low] + arr[high] < key)
        {
            low++;
        }
        else
            high--;
    }
    return false;
}

int main()
{
    int n, key;
    cin >> n >> key;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << pairsum(arr, n, key) << endl;

    return 0;
}