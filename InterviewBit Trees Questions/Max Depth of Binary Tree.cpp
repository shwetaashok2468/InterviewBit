/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {
    if(A == NULL)
    {
        return 0;
    }
    int left_height,right_height;
    
    left_height = maxDepth(A->left);
    right_height = maxDepth(A->right);
    
    return max(left_height,right_height)+1;
}

