#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m - 1;

    while(row_start <= row_end && col_start <= col_end){
        for (int i = col_start; i <= col_end; i++){
            cout << a[row_start][i] << ' ';
        }
        row_start++;
        for (int i = row_start; i <= row_end; i++){
            cout << a[i][col_end] << ' ';
        }
        col_end--;
        for (int i = col_end; i >= col_start; i--){
            cout << a[row_end][i] << ' ';
        }
        row_end--;
        if(row_start > row_end)
            break;
        for (int i = row_end; i >= row_start; i--)
        {
            cout << a[i][col_start] << ' ';
        }
        col_start++;
    }
    cout << row_start << endl;
    cout << row_end << endl;
    cout << col_start << endl;
    cout << col_end << endl;

    return 0;
}