// Given a number, find the sum of its digits.
// time : O(Log N)

#include<Bits/stdc++.h>
using namespace std;

// iterative method 
class sumofdigits{
    public:
    int getSum(int n) {
        int sum = 0;
        while(n!=0){
            sum = sum + (n%10);
            n = n/10;
        }
        return sum;
}
};

// recursive method
class sumOfDigits {
    public:
    int getSum(int n) {
        if(n==0){
            return 0;
        }
        return (n%10) + sumOfDigits(n/10);
    }
};

// input as string

int getSum(string str)
{
    int sum = 0;
    for(int i=0; i<str.length(); i++){
        sum= sum + str[i] - 48;
    }
    return sum;

}


int main(){
    int n;
    cin>>n;
    // for iterative method
    cout<<sumofdigits().getSum(n)<<endl;
    // for recursive method
    cout<<sumOfDigits().getSum(n)<<endl;
    // for string 
    string s;
    cin>>s;
    cout<<getSum(s);
    return 0;
}


