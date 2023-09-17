/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int>in;
vector<int>pre;
vector<int>post;
void inorder(TreeNode*root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    in.push_back(root->data);
    inorder(root->right);
}
void preorder(TreeNode*root)
{
    if(root==NULL)
    {
        return;
    }
    pre.push_back(root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(TreeNode*root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    post.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    inorder(root);
    preorder(root);
    postorder(root);
    vector<vector<int>>res;
    res.push_back(in);
    res.push_back(pre);
    res.push_back(post);
    return res;
}
