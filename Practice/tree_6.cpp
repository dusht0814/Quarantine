//https://leetcode.com/problems/maximum-binary-tree-ii
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
    
    void inorder(TreeNode* root,vector<int>&nums){
        if(root==NULL)
            return;
        inorder(root->left,nums);
        nums.push_back(root->val);
        inorder(root->right,nums);
    }
    
    TreeNode* karo(int l,int r,vector<int>&nums){
        if(l>r || r>=nums.size() || l<0){
            return NULL;
        }
        if(l==r){
            TreeNode* temp=new TreeNode(nums[l]);
            return temp;
        }
        int mx=-1,ind=r;
        for(int i=l;i<=r;i++){
            if(nums[i]>mx){
                mx=nums[i];
                ind=i;
            }
        }
        TreeNode* temp=new TreeNode(nums[ind]);
        temp->left=karo(l,ind-1,nums);
        temp->right=karo(ind+1,r,nums);
        return temp;
        
            
    }
    
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        vector<int>nums;
        inorder(root,nums);
        nums.push_back(val);
        return karo(0,nums.size()-1,nums);
        
    }
};
