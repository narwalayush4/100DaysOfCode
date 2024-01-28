#include <iostream>
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

    int mx = INT_MIN;         // current max element
    int ans = 0;              // number of days
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && arr[0] > arr[1])
        {
            mx = arr[0];
            ans++;
            i++;
        }
        else if (i == n-1 && arr[n-2] < arr[n-1] && mx < arr[n-1]){
            ans++;
        }
        else if (mx < arr[i]){
            mx = arr[i];
            if (arr[i+1] < arr[i]){
                ans++;
                i++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}