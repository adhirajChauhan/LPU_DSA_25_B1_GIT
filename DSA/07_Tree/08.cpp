// https://leetcode.com/problems/kth-smallest-element-in-a-bst/
// class Solution {
// public:
//     int count = 0;
//     int ans = -1;
//     void inorder(TreeNode* root, int k){
 
//         if(root == NULL) return;
//         //left
//         inorder(root->left, k);
//         //root
//         count++;
//         if(count == k){
//             ans = root->val;
//             return;
//         }

//         //right
//         inorder(root->right, k);
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         inorder(root, k);
//         return ans;
//     }
// };


// //--------------------------

// https://www.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

// // return the Kth largest element in the given BST rooted at 'root'
// class Solution {
//   public:
  
//   void reverseInorder(Node *root, int k, int &count, int& result){
//       if(root == NULL) return;
      
//       reverseInorder(root->right, k, count, result);
      
//       count++;
//       if(count == k){
//           result = root->data;
//           return;
//       }
      
//       reverseInorder(root->left, k ,count, result);
//   }
//     int kthLargest(Node *root, int k) {
//         int count = 0;
//         int result = -1;
//         reverseInorder(root, k, count, result);
//         return result;
        
//     }
// };

// //--------------------


// https://leetcode.com/problems/range-sum-of-bst/
// class Solution {
// public:
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         if(root==NULL) return 0;

//         //Case 1 : node is in range -> include and explore both sides
//         if(root->val >= low && root->val <= high){
//             return root-> val 
//             + rangeSumBST(root->left,low, high)
//             + rangeSumBST(root->right, low, high);
//         }

//         //Case 2 : node is less than low ->skip left subtree
//         else if(root->val < low){
//             return rangeSumBST(root->right, low, high);
//         }

//         //Case 3 : node is greater than high -> skip right subtree
//        else return rangeSumBST(root->left, low, high);
//     }

// };



// //------------------------


// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
// class Solution {
// public:
// void inorder(TreeNode* root, vector<int> & values){
//     if(root== NULL) return;
//     inorder(root->left, values);
//     values.push_back(root->val);
//     inorder(root->right, values;)
// }
//     bool findTarget(TreeNode* root, int k) {
//         vector<int> values;
//         inorder(root, values);

//         int left = 0;
//         int right = values.size() - 1;

//         while(left < right){
//             int sum = values[left] + values[right];
//             if(sum == k) return true;
//             else if(sum < k) left++;
//             else right--;
//         }
//         return false;
//     }
// };

// //---------------------------------

// https://leetcode.com/problems/delete-node-in-a-bst/submissions/1697632263/

// class Solution {
// public:
//     // Utility to find the minimum value node in a BST
//     TreeNode* minValue(TreeNode* root) {
//         TreeNode* temp = root;
//         while (temp && temp->left != NULL) {
//             temp = temp->left;
//         }
//         return temp;
//     }

//     // Function to delete a node with given key from BST
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         // Base case: if tree is empty
//         if (root == NULL) return root;

//         // If key is less → go left
//         if (key < root->val) {
//             root->left = deleteNode(root->left, key);
//             return root;
//         }
//         // If key is more → go right
//         else if (key > root->val) {
//             root->right = deleteNode(root->right, key);
//             return root;
//         }

//         // Node to be deleted is found: root->val == key
//         else {
//             // Case 1: 0 children
//             if (root->left == NULL && root->right == NULL) {
//                 delete root;
//                 return NULL;
//             }

//             // Case 2: 1 child (right only)
//             if (root->left == NULL && root->right != NULL) {
//                 TreeNode* temp = root->right;
//                 delete root;
//                 return temp;
//             }

//             // Case 2: 1 child (left only)
//             if (root->left != NULL && root->right == NULL) {
//                 TreeNode* temp = root->left;
//                 delete root;
//                 return temp;
//             }

//             // Case 3: 2 children
//             // Find inorder successor (min in right subtree)
//             TreeNode* successor = minValue(root->right);

//             // Replace current node's value with successor's value
//             root->val = successor->val;

//             // Delete the successor node from right subtree
//             root->right = deleteNode(root->right, successor->val);

//             return root;
//         }
//     }
// };

// //------------------------------

// https://www.naukri.com/code360/problems/flatten-bst-to-a-sorted-list_1169459?leftPanelTabValue=PROBLEM
// #include <bits/stdc++.h> 

// void inorder(TreeNode* root, vector<int> & values){
//     if(root== NULL) return;
//     inorder(root->left, values);
//     values.push_back(root->val);
//     inorder(root->right, values;)
// }

// TreeNode<int>* flatten(TreeNode<int>* root)
// {
//     vectir<int> inorderVal;
//     inorder(root,inorderVal );

//     int n = inorderVal.size();

//     TreeNode<int>* newRoot = new TreeNode<int> (inorderVal[0]);
//     TreeNode<int>* curr = newRoot;

//     for(int i = 0; i < n; i++){
//         TreeNode<int> * temp = new TreeNode<int>(inorderVal[i]);
//         curr->left = NULL;
//         curr->right = temp;
//         curr = temp;

//     }

//     curr->left = NULL;
//     curr->right = NULL;
//     return newRoot;

// }