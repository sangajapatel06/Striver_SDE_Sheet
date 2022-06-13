
void bfs(Tree *root, vector<int> &vec, int level)
{
    if (!root)
        return;

    int l = vec.size();
    if (level == l)
    {
        vec.push_back(root->val);
    }
    bfs(root->left, vec, level + 1);
    bfs(root->right, vec, level + 1);
}

vector<int> solve(Tree *root)
{
    vector<int> vec;
    bfs(root, vec, 0);
    return vec;
}