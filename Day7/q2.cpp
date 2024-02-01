#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLen, maxLen = 0;
    while(1){

        if(arr[i] == ' ' || arr[i] == '\0'){
            maxLen = max(currLen, maxLen);
            currLen = 0;
        }else{
            currLen++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    return 0;
}