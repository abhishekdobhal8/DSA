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
    
    int diameter(TreeNode* root, int& maxD){
        if(!root) return 0;

        int lh = diameter(root->left, maxD);
        int rh = diameter(root->right, maxD);
        
        maxD = max(maxD, lh + rh);

        return 1 + max(lh, rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxD = 0;
        diameter(root, maxD);
        return maxD;
    }
};