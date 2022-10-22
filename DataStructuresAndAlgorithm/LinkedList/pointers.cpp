#include<iostream>
using namespace std;

int main(){
    int a;
    int *add = &a;
    int **ptr = &add;
    cout<<*ptr;
    return 0;
}