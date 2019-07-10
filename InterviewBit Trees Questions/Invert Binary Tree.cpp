TreeNode* Solution::invertTree(TreeNode* node) {
    
    queue<TreeNode*>q;
    
    q.push(node);
    
    while(!q.empty())
    {
        TreeNode *temp=q.front();
        q.pop();
        //cout<<temp->data<<" ";
        swap(temp->left,temp->right);
        
        
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
        
        
    }
    
    return node;
}

