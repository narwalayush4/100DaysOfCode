// Count the number of paths possible from start point to end point in gameboard
#include <iostream>
using namespace std;

int countPath(int s, int e){

    if (s == e) {
        return 1;
    }
    int count;
    for (int i = 1; i < 6; i++)
    {
        count += countPath(s + i, e);
    }
    return count;
}

int main(){

}