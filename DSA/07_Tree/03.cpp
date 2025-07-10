#include<iostream>
using namespace std;

 class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value){
        data = value;
        left = right = NULL;
    }
};

int countNodes(TreeNode* root){
    if(root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int countLeaf(TreeNode* root){
    if(root == NULL) return 0;

    if(!root->left && !root->right) return 1;
    return countLeaf(root->left) + countLeaf(root->right);
}

int height(TreeNode* root){
    if(root ==  NULL) return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int sumOfNode(TreeNode* root){
    if(root == NULL) return 0;
    return root->data + sumOfNode(root->left) + sumOfNode(root->right);
}

int main()
{
      TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // cout << height(root) << endl;
    cout << sumOfNode(root) << endl;
}