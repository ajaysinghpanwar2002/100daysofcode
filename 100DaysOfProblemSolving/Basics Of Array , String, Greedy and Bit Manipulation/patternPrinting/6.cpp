/*

        1
    2   1   2
3   2   1   2   3

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        // for spaces
        for (int space = 0; space < n - i; space++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j<<" ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout<<endl;
    }
    return 0;
}