#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    int *idx = new int[n];
    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        idx[i] = -1;
    }
    
    for (int i = 0; i < n; i++){
        if (idx[arr[i]] != -1){
            minidx = idx[arr[i]];
        }
        idx[arr[i]] = i;
    }
    if (minidx == INT_MAX){
        minidx = -1;
    }

    cout << minidx << endl;
    return 0;
}