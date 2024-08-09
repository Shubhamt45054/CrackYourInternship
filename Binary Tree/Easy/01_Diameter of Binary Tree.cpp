 int solve(TreeNode* root,int& ans){
        if(root==NULL){
            return 0;
        }
        int left=solve(root->left,ans);
        int right=solve(root->right,ans);
        ans=max(ans,left+right);
        return max(left,right)+1;
    }
    // dimater means longest distance btw any two nodes of tree
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        solve(root,ans);

        return ans;
    }
