//https://leetcode.com/problems/deepest-leaves-sum

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
    int maxLev(TreeNode* root){
        if(root==NULL)
            return 0;
        int lev=0;
        lev=1+max(maxLev(root->left),maxLev(root->right));
        return lev;
        
    }
    void sum(TreeNode* root,int L,int &ans,int cl){
        if(root==NULL)
            return;
        cl++;
        if(cl==L)
            ans+=root->val;
        sum(root->left,L,ans,cl);
        sum(root->right,L,ans,cl);
        
        
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int ans=0;
       int L=maxLev(root);
        sum(root,L,ans,0);
        return ans; 
    }
};
