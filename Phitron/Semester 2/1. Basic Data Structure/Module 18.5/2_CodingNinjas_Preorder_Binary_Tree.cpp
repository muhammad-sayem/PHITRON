/**********************************************************
	Following is the Binary Tree Node class structure

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

void pre(BinaryTreeNode<int> *root){
	if(root == NULL) return;

	cout << root->data << " ";
	pre(root->left);
	pre(root->right);
}

void preOrder(BinaryTreeNode<int> *root) {
	pre(root);
}