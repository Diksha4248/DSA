//An Anagram is a word or phrase formed by rearranging the letters of a 
//different word or phrase, typically using all the original letters exactly once.

#include <bits/stdc++.h>
using namespace std;


// Time Complexityy : O(Nlog(N))
// Space Complexity : O(1)
bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;
}

int main(){
    string s = "anagram";
    string t = "nagaram";
    cout<<isAnagram(s,t);
    return 0;
}