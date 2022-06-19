int findCeil(BinaryTreeNode<int> *node, int x)
{
    int ceil = -1;
    while (node)
    {
        if (node->data == x)
        {
            ceil = node->data;
            return ceil;
        }
        if (x > node->data)
        {
            node = node->right;
        }
        else
        {
            ceil = node->data;
            node = node->left;
        }
    }
    return ceil;
}