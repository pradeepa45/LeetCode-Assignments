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
    
    int max(int a,int b){
        return (a>b)? a:b;
    }
    int maxDepth(TreeNode* root) {
        int ans ;
        if(root==NULL)
            ans = 0;
        else{
            int lf = maxDepth(root->left);
            int rg = maxDepth(root->right);
            ans = 1+max(lf,rg);
        }
        return ans;
    }
};

