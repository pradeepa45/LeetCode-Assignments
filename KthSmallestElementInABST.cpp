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
    TreeNode* ino(TreeNode* root, int& k){
        if(root==NULL)
            return root;
        TreeNode* l = ino(root->left,k);
        if(l!=NULL) return l;
        k--;
        if(k==0) return root;
        else return ino(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* ans = ino(root,k);
        if(ans!=NULL)
            return ans->val;
        else return 0;
    }
};
