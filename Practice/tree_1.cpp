//https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
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
    TreeNode* ans;
    void inorder(TreeNode* cloned,int t){
        if(cloned==NULL)
            return;
        inorder(cloned->left,t);
            if(cloned->val==t)
            {
                ans=cloned;
                return;
            }
        inorder(cloned->right,t);
}
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
       inorder(cloned,target->val);
        return ans;
        
    }
};
