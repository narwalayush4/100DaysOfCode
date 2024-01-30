// Maximum sum in subarray - circular possible
#include <iostream>
using namespace std;

int kadanes(int * arr, int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int case1 = kadanes(arr, n); // wrapping not required

    int *negArr = new int[n];
    int arrSum = 0;
    for (int i = 0; i < n; i++)
    {
        negArr[i] = -arr[i];
        arrSum += arr[i];
    }

    int case2 = arrSum + kadanes(negArr, n); // wrapping required // remove sum of non contributing elemensts from total sum

    int maxSum = max(case1, case2);

    cout << maxSum << endl;

    return 0;
}