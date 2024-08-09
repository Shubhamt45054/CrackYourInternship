
class Solution {
public:
    TreeNode* solve(TreeNode* root){
        if(root==NULL) return root;

        TreeNode* ll,*rr;
        ll=solve(root->right);
        rr=solve(root->left);
        root->right=rr;
        root->left=ll;

        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        return solve(root);
    }
