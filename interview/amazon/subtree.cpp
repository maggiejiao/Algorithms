#include <iostream>
using namespace std;

class TreeNode{
public:
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) { val = x; left = NULL; right = NULL;}
};

bool identical(TreeNode* T1, TreeNode* T2){
	if(T1 == NULL && T2 == NULL) return true;
	if(T1 == NULL || T2 == NULL) return false;
	if(T1->val != T2->val) return false;
	return identical(T1->left, T2->left) && identical(T1->right, T2->right);
}

//return true if T2 is a subtree of f1
bool isSubtree(TreeNode* T1, TreeNode* T2){
	if(T2 == NULL) return true;
	if(T1 == NULL) return false;
	return identical(T1, T2) || isSubtree(T1->left, T2) || isSubtree(T1->right, T2);
}



int main(){
	TreeNode* T = new TreeNode(26);
	T->right = new TreeNode(3);
	T->right->right = new TreeNode(3);
	T->left = new TreeNode(10);
	T->left->left = new TreeNode(4);
	T->left->left->right = new TreeNode(30);
	T->left->right = new TreeNode(6);

	TreeNode* S = new TreeNode(10);
	S->right = new TreeNode(6);
	S->left = new TreeNode(4);
	S->left->right = new TreeNode(30);

	cout << isSubtree(T, S) << endl;
}
