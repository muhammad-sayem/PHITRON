#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*,int>> q;
    q.push({root, 1});
    // q.push(make_pair(root, q));      // Long Cut //


    while(!q.empty()){
        pair<TreeNode<int>*, int> parent = q.front();
        TreeNode<int>* node = parent.first;
        int level = parent.second;
        q.pop();


        if(node->val == searchedValue){
            return level;
        }


        if(node->left != NULL) {
          q.push({node->left, level + 1});
        }
        if(node->right != NULL) {
            q.push({node->right, level+1});
        }
    }
}
