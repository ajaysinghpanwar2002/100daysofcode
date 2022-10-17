// post order traversal (left right root)

void postOrder(node)
{
    if(node==null){
        retun;
    }
    postOrder(node->left);
    postOrder(node->right);
    print(node->data);
}