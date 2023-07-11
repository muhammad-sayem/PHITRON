#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> v;

void levelOrder(BinaryTreeNode<int> *root){
    if(root == NULL) return;

    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        BinaryTreeNode<int>* f = q.front();
        q.pop();

        v.push_back(f->val);

        if(f->left != NULL) q.push(f->left);
        if(f->right != NULL) q.push(f->right);
    }
}

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    v.clear();
    levelOrder(root);
    return v;

}