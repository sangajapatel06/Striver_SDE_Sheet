class Solution
{
public:
    bool isBalanced(TreeNode *root)
    {
        return dfsHeight(root) != -1;
    }
    int dfsHeight(TreeNode *root)
    {
        if (root == NULL)
            return NULL;
        int lh = dfsHeight(root->left);
        if (lh == -1)
            return -1;
        int rh = dfsHeight(root->right);
        if (rh == -1)
            return -1;

        if (abs(rh - lh) > 1)
            return -1;

        return 1 + max(lh, rh);
    }
};