vector<int> postorderTraversal(TreeNode* root) {
    vector<int>ans;
    stack<TreeNode*>st1,st2;   
        // preorder(root);
        // return ans;
    if(root==nullptr){
        return ans;
    }
    st1.push(root);
    while(!st1.empty()){
        
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left!=nullptr){
            st1.push(root->left);

        }
        if(root->right!=nullptr){
            st1.push(root->right);

        }

    }
    while(!st2.empty()){
        ans.push_back(st2.top()->val);
        st2.pop();
    }
    return ans;


    }
};
