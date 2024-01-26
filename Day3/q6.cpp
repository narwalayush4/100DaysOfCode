// Given a "2 x n" board and tiles of size "? x 1", count the number of ways to tile the given board using these tiles
#include <iostream>
using namespace std;

int countWays(int n){

    if(n == 0 || n == 1){
        return 1;
    }

    return countWays(n - 1) + countWays(n - 2);
}

int main(){
    cout << countWays(4) << endl;
}