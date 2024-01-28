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

    int pd = arr[1] - arr[0]; // previous differnence
    int cd;                   // curent differe
    int curr = 0;             // current lenght of the arithmetic subarray
    int ans = 0;              // maxlength
    for (int i = 0; i < n - 1; i++)
    {
        cd = arr[i + 1] - arr[i];
        if (pd == cd)
        {
            curr++;
            ans = max(ans, curr);
        }
        else
        {
            curr = 2;
            pd = cd;
        }
    }

    cout << ans << endl;

    return 0;
}