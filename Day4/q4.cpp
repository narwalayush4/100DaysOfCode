// N Queen Problem
#include <iostream>
using namespace std;

bool isSafe(int **placed, int row, int col, int n)
{

    if (row == 0)
        return true;
    for (int i = 0; i < row; i++) // checking in the vertical column
    {
        if (placed[i][col] == 1)
            return false;
    }

    int i = 0;
    while (row - i >= 0 && col - i >= 0) // check for top left diagonal
    {
        if (placed[row - i][col - i] == 1)
        {
            return false;
        }
        i++;
    }
    i = 0;
    while (row - i >= 0 && col + i < n) // check for top right diagonal
    {
        if (placed[row - i][col + i] == 1)
        {
            return false;
        }
        i++;
    }
    return true;
}

bool queenProb(int **placed, int row, int n)
{

    if (row >= n)
    {
        return true;
    }

    for (int i = 0; i < n; i++)
    {
        if (isSafe(placed, row, i, n))
        {
            placed[row][i] = 1;
            if (queenProb(placed, row+1, n))
            {
                return true;
            }
            placed[row][i] = 0;
        }   
    }
    return false;
}

int main(){

    int n;
    cin >> n;

    int **placed = new int *[n];
    for (int i = 0; i < n; i++){
        placed[i] = new int[n];
    }

    // cout << queenProb(placed, 0, n) << endl;
    if(queenProb(placed, 0, n)){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << placed[i][j] << " ";
            }
            cout << endl;
        }
    }
}
