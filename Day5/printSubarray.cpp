// print subarray of an array 
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
    int **subArr = new int;

    for (int i = 0; i < n)

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    cout << endl;
    return 0;
}