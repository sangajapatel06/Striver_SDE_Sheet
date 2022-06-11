
bool getPath(TreeNode *root, vector<int> &arr, int x)
{
    if (!root)
        return false;

    arr.push_back(root->val);
    if (root->val == x)
    {
        return true;
    }
    if (getPath(root->left, arr, x) || getPath(root->right, arr, x))
        return true;

    arr.pop_back();
    return false;
}

vector<int> Solution::solve(TreeNode *A, int B)
{
    vector<int> arr;
    if (A == NULL)
        return arr;
    getPath(A, arr, B);
    return arr;
}

-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

                                                                                                                                                   bool
                                                                                                                                                   getPath(TreeNode *root, vector<int> &arr, int x)
{
    if (!root)
        return false;

    // arr.push_back(root->val);
    if (root->val == x || getPath(root->left, arr, x) || getPath(root->right, arr, x))
    {
        arr.push_back(root->val);
        return true;
    }

    // arr.pop_back();
    return false;
}

vector<int> Solution::solve(TreeNode *A, int B)
{
    vector<int> arr;
    if (A == NULL)
        return arr;
    getPath(A, arr, B);
    reverse(arr.begin(), arr.end());
    return arr;
}
