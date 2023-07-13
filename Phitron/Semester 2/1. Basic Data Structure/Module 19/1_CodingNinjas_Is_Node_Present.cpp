/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool levelOrder(BinaryTreeNode<int> *root, int x){
    if(root == NULL) return false;

    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        BinaryTreeNode<int>* p = q.front();
        q.pop();

        if(p->data == x) {
            return true;
            break;
        }

        if(p->left) q.push(p->left);        // if(f->left != NULL) q.push(f->left);
        if(p->right) q.push(p->right); 
    }

    return false;
}

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    bool flag = levelOrder(root, x);

    if(flag) return true;
    else return false;
}

// ----------------------------------------------------------------------- //

// Pathan vai's solve //

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/


bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root == NULL) return false;
    if(root->data == x) return true;

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);

    if(l == true || r == true) return true;
    else return false;

    // shortcut: return(l || r);

}