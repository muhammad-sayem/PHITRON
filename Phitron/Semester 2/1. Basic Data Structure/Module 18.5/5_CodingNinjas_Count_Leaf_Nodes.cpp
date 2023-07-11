/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

int countLeafNodes(BinaryTreeNode<int> *root){
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    else{
        int l = countLeafNodes(root->left);
        int r = countLeafNodes(root->right);
        return l+r;
    }
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    return countLeafNodes(root);
}