#include <bits/stdc++.h>
using namespace std;

string removeConsecutiveCharacter(string S)
{
    int n = S.size();
    string res = "";
        
    for(int i=0;i<n;i++){
        if(S[i]!=S[i+1]) res += S[i];
    }
        
     return res;
}


int main(){
    string s = "aaabaa";
    cout<<removeConsecutiveCharacter(s);

    return 0;
}