// standard method 

#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string s)
{
    // iterating over the range [0,n/2]
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i]!= s[s.length() - i - 1])
        {
            return "NO";
        }
    }
            return "yes";
}

int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s)<<endl;
    return 0;
}

