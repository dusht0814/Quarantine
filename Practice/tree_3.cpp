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
    
    void traverse(TreeNode* root,int &sum){
        if(root==NULL)
            return;
        if((root->val)%2==0){
           TreeNode *L1=NULL;
            TreeNode *L2=NULL;
            TreeNode *L3=NULL;
            TreeNode *L4=NULL;
            if(root->left!=NULL)
            {
                L1= root->left->left;
                L2= root->left->right;
            }
            if(root->right!=NULL)
            {
                    L3= root->right->left;
                    L4= root->right->right;
            }
            if(L1!=NULL)
                sum+=L1->val;
            if(L2!=NULL)
                sum+=L2->val;
            if(L3!=NULL)
                sum+=L3->val;
            if(L4!=NULL)
                sum+=L4->val;
            
        }
        traverse(root->left,sum);
        traverse(root->right,sum);
}
    int sumEvenGrandparent(TreeNode* root) {
        int sum=0;
        traverse(root,sum);
        return sum;
    }
};
