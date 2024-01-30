#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cin >> n >> sum;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    int currSum = 0;
    for (int s, e = 0; s < n; s++)
    {   
        e = s;
        while (currSum < sum && e < n){
            currSum += arr[e];
            if (currSum == sum)
            {
                cout << s << " " << e << endl;
                break;
            }
            e++;
        }
        currSum = 0;
    }

    return 0;
}