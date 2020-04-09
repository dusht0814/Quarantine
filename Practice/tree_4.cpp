//https://leetcode.com/problems/insert-into-a-binary-search-tree/**
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
    TreeNode* pos(TreeNode* root,int val){
        if(root==NULL)
            return NULL;
        if(val>=root->val){
            TreeNode *temp=pos(root->right,val);
            if(temp==NULL){
                temp=new TreeNode(val);
                root->right=temp;
            }
        }
        else {
            TreeNode *temp=pos(root->left,val);
            if(temp==NULL){
                temp=new TreeNode(val);
                root->left=temp;
            }
            
        }
        return root;
}
    TreeNode* insertIntoBST(TreeNode* root, int val) {
         pos(root,val);
        return root;
    }
};
