//https://leetcode.com/problems/maximum-binary-tree/
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
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return karo(0,nums.size()-1,nums);
    }
};
