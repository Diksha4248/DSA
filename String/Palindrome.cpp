
#include <bits/stdc++.h>
using namespace std;

// Naive approach
// Time Complexity: O(N)
// Auxiliary Space: O(N)
string isPalindrome(string S)
{
	string P = S;
	reverse(P.begin(), P.end());
	if (S == P){
		return "Yes";
	}
	else{
		return "No";
	}
}


// Efficient Approach
// Time Complexity: O(N)
//Auxiliary Space: O(1)
string isPalindrme(string S)
{
    for (int i = 0; i < S.length() / 2; i++)
    {
        if (S[i] != S[S.length() - i - 1]){
            return "No";
        }
    }
    return "Yes";
}


int main()
{
	string S = "ABCDCBA";
    cout<<"Approach 1 : "<<endl;
	cout << isPalindrome(S);

    cout<<"\nApproach 2 : "<<endl;
    cout<< isPalindrme(S);

	return 0;
}
