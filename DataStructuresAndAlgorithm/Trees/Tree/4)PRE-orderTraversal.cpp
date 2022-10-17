#include<bits/stdc++.h>
using namespace std;

void preorder(node)
{
    if (node == NULL)
        return;

    print (node -> data)
    preorder(node -> left);
    preorder(node -> right);
}

// time complexity => O(N)
// space complexity => O(N)


