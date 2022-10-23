/*

*
**
***
****
***
**
*

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n+n-1;i++){
        int columnsInaRow = i>n ? 2*n-i : i;
        for(int j=0; j<columnsInaRow; j++){
            cout<< "* ";
        }
        cout<<endl;
    }
    return 0;
}