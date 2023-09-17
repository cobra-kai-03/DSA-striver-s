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
   int height(TreeNode*root)
   {
       if(root==NULL)
       {
           return 0;
       }
       else{
           int lh=height(root->left);
           int rh=height(root->right);
           if(lh>rh)
           {
               return lh+1;
           }
           else
           {
               return rh+1;
           }
       }
   }

    
 
// Print nodes at a current level
vector<int>a;
void printCurrentLevel(TreeNode* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        a.push_back(root->val);//cout << root->data << " ";
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

    vector<vector<int>> levelOrder(TreeNode* root) {
    int h = height(root);
    vector<vector<int>>res;
    int i;
    for (i = 1; i <= h; i++)
    {
        printCurrentLevel(root, i);
        res.push_back(a);
        a.clear();
    }
    return res;

    }
};
