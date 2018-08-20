/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1, leaf2;
        leaves(root1, leaf1);
        leaves(root2, leaf2);
        return (leaf1==leaf2);
    }

private:
    void leaves(TreeNode* root, vector<int>& leaf){
        if(root==nullptr) return;
        else if ((root->left==nullptr)&&(root->right==nullptr)){
            leaf.push_back(root->val);
            return;
        }
        leaves(root->left, leaf);
        leaves(root->right,leaf);
    }    
};
