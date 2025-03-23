class Solution {
public:

    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        height(root,dia);
        return dia;
    }

    int height(TreeNode* root , int& dia){
        
        if(root==nullptr){
            return 0;
        }
        int l = height(root->left,dia);
        int r = height(root->right,dia);
        dia = max(dia,l+r);
        return 1+max(l,r);
}
};
