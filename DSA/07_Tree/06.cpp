// /*
// // Tree Node
// class Node {
//   public:
//     int data;
//     Node* left;
//     Node* right;

//     // Constructor to initialize a new node
//     Node(int val) {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// */

// class Solution {
//   public:
  
//   void traverseLeft(Node* root, vector<int> &ans){
//         if(root == NULL || (root->left == NULL) && (root->right == NULL)) return;
        
//         ans.push_back(root->data);
        
//         if(root->left){
//             traverseLeft(root->left, ans);
//         }
//         else{
//             traverseLeft(root->right, ans);
//         }
//   }
  
//    void traverseRight(Node* root, vector<int> &ans){
//        if(root == NULL || (root->left == NULL) && (root->right == NULL)) return;
       
//        if(root->right){
//            traverseRight(root->right, ans);
//        }
//        else{
//            traverseRight(root->left, ans);
//        }
//        //pushing in ans while returning back
//        ans.push_back(root->data);
       
//    }
   
//    void traverseLeaf(Node* root, vector<int> &ans){
//        if(root== NULL) return;
       
//        if(root->left == NULL && root->right- == NULL){
//            ans.push_back(root->data);
//            return;
//        }
//        traverseLeaf(root->left, ans);
//        traverseLeaf(root->right, ans);
//    }
//     vector<int> boundaryTraversal(Node *root) {
//        vector<int> ans;
//        if(root== NULL) return ans;
       
//        ans.push_back(root->data);
       
//        //left part
//        //traverseLeft();
//        //traverseLeaf();
//        //traverseRight();
       
//        return ans
       
       
       
        
//     }
// };