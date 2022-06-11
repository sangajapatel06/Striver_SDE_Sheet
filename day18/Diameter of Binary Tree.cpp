class Solution
{
public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        int d = 0;
        solve(root, d);
        return d;
    }
    int solve(TreeNode *root, int &d)
    {
        if (root == NULL)
        {
            return NULL;
        }

        int ld = solve(root->left, d);
        int rd = solve(root->right, d);

        d = max(d, ld + rd);
        return 1 + max(ld, rd);
    }
};