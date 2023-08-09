
#include <bits/stdc++.h>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();
     
        sort(strs.begin(),strs.end());
        string start =  strs[0];
        string end = strs[n-1];

        string result = "";
        for(int i=0;i<start.size();i++)
        {
            if(start[i]!=end[i]) return result;
            else result += start[i];
        }

        return result;
        
    }

int main(){

    // vector<string> s = {"dog","racecar","car"};
    vector <string> s = {"flower","flow","flight"};
    cout<<longestCommonPrefix(s);

    return 0;

}    