bool checkBST(Node* root,int min = -1,int max = 10001) {
        if(root == NULL)
            return true;
        if(root->data<=min or root->data>=max)
            return false;

        return checkBST(root->left,min,root->data) and checkBST(root->right,root->data,max);
    }
