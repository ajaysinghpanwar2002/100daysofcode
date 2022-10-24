/*

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<=2*n-1;i++){
        int totalColumns = i>n ? 2*n-i:i;
        int noOfSpaces = n - totalColumns;
        for(int s = 0; s < noOfSpaces;s++){
            cout<<" ";
        }
        for(int j=0;j<totalColumns;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}