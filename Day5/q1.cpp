#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mx = INT_MIN;
    int max_arr[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx){
            mx = arr[i];
            max_arr[i] = mx;
        }
        max_arr[i] = mx;
    }

    for (int i = 0; i < n; i++)
    {
        cout << max_arr[i] << " ";
    }
    cout << endl;
    return 0;
}