/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        int k=ms(root,maxi);
        return maxi;
    }
    int ms(TreeNode*root,int &maxi)
    {
        if(root==NULL) return 0;
        int v=root->val;
        int lp=max(0,(ms(root->left,maxi)));
        int rp=max(0,(ms(root->right,maxi)));
        maxi=max(maxi,v+lp+rp);
        return v+max(lp,rp);
    }
};
