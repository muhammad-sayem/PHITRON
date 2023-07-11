#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/

long long left_sum(BinaryTreeNode<int> *root){

	if(root == NULL) return 0;

	long long sum = 0;
	
	queue<BinaryTreeNode<int>*> q;
	q.push(root); 
	
	while(!q.empty()){
		BinaryTreeNode<int>* p = q.front();
		q.pop();

		if(p->left != NULL){
			sum += (p->left->data);
		}

		if(p->left != NULL) q.push(p->left);
		if(p->right != NULL) q.push(p->right);
	}

	return sum;
	
}

long long leftSum(BinaryTreeNode<int> *root)
{
	return left_sum(root);
}