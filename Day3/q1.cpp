#include <iostream>
using namespace std;

string removeX(string s){

    if (s.length() == 0){
        return "";
    }

    char current = s[0];
    string ros = s.substr(1);

    if (current == 'x'){
        return removeX(ros) + current;
    }
    return current + removeX(ros);

}

int main(){
    cout << removeX("axxbdxcefxhix") << endl;
}

// Move all x to the end of the string
// "axxbdxcefxhix"