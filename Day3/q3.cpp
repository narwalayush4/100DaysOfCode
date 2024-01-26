//Print all permutations of the string "ABC"
#include <iostream>
using namespace std;

void permutations(string s, string ans){

    if(s.length()==0){
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string s1 = s.substr(0, i);
        string s2 = s.substr(i + 1);
        permutations(s1 + s2, ans + ch);
    }
    
}

int main(){

    permutations("ABC", "");
}