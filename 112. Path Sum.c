/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */




bool hasPathSum(struct TreeNode* root, int targetSum){
    
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
     {
         targetSum=targetSum-root->val;
         if(targetSum==0)
             return 1;
         else
             return 0;
     }
        
    bool l= hasPathSum(root->left, targetSum-(root->val));
    bool r= hasPathSum(root->right, targetSum-(root->val));
    return l||r;
    

}
