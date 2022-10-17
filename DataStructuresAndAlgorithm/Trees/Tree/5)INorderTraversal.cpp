// inorder traversal ( left root right)

#include<bits/stdc++.h>
using namespace std;

void inorder(node)
{
    if(node==NULL)
        return;
    inorder(node->left);
    print(node->data);
    inorder(node->right);
}
