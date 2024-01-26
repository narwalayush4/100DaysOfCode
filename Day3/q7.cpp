// Find the number of ways in which n friends can remain single or can be paired up.
#include <iostream>
using namespace std;

int numberOfWays(int n){
    
    if (n==0 || n == 1 || n == 2){
        return n;
    }
    return numberOfWays(n - 1) + (n - 1) * numberOfWays(n - 2);
}

int main(){
    cout << numberOfWays(4) << endl;
}