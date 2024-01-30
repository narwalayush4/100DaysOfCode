#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    int *check = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        check[i] = 0;
    }

    for (int i = 0; i < n; i++){
        if(arr[i] >= 0)
            check[arr[i]] = 1;
        
    }
    int ans = -1;
    for (int i = 1; i < n; i++)
    {
        if (check[i] == 0){
            ans = i;
            break;
        }   
    }

    cout << ans << endl;
    return 0;
}