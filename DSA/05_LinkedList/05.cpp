
// // https://leetcode.com/problems/linked-list-cycle/
// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode(int x) : val(x), next(NULL) {}
// //  * };
// //  */
// // class Solution {
// // public:
// //     bool hasCycle(ListNode *head) {
// //         ListNode* slow = head;
// //         ListNode* fast = head;

// //         while(fast!=NULL && fast->next != NULL){
// //             slow = slow->next;
// //             fast=fast->next->next;

// //             if(slow == fast){
// //                 return true;
// //             }
// //         }
// //         return false;
// //     }
// // };



// https://leetcode.com/problems/linked-list-cycle-ii/
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast!= NULL && fast->next !=NULL){
//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow==fast){

//             slow = head;

//             while(slow!=fast){

//                 slow = slow->next;
//                 fast=fast->next;
//             }
//             return slow;
//         }
        
//         }
//         return NULL;
//     }
// };




// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head == NULL || head->next ==NULL){
//             return head;
//         }

//         ListNode* curr = head;
//         while(curr != NULL && curr->next != NULL){
//             if(curr->val == curr->next->val){
//                 //Duplicate node found, remove next
//                 ListNode* temp = curr->next;
//                 curr->next = curr->next->next;
//                 delete temp;
//             }
//             else{
//                 //No duplicate
//                 curr = curr->next;
//             }
//         }
//         return head;
//     }
// };






// /*
// structure of the node of the list is as
// struct Node
// {
//     int data;
//     struct Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };
// */



// https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

// class Solution {
//   public:
//     // Should return head of the modified linked list
//     Node* sortedInsert(Node* head, int key) {
//         Node* n = new Node(key);
        
//         if(head == NULL || n->data < head->data){
//             n->next = head;
//             return n;
//         }
        
//         Node* curr = head;
//         while(curr->next != NULL && curr->next->data < n->data){
//             curr = curr->next;
//         }
        
//         n->next = curr->next;
//         curr->next = n;
//         return head;
        
        
//     }
// };


// https://leetcode.com/problems/intersection-of-two-linked-lists/
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         if(headA == NULL || headB == NULL) return NULL;

//         ListNode* a = headA;
//         ListNode* b = headB;

//         while(a!=b){
//             if(a == NULL) a = headB;
//             else a = a->next;

//             if(b == NULL) b = headA;
//             else b = b->next;
//         }
//         return a;
//     }
// };



// https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
// /*  Node is defined as
//   struct Node {
//     int data;
//     struct Node *next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };*/
// class Solution {
//   public:
//     Node* segregate(Node* head) {
//         if(head == NULL || head->next == NULL) return head;
        
//         int count[3] = {0,0,0};
//         Node* temp = head;
        
//         while(temp!= NULL){
//             count[temp->data]++;
//             temp= temp->next;
//         }
        
        
        
//     }
// };

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// https://leetcode.com/problems/odd-even-linked-list/
// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(head = NULL || head->next = NULL) return head;

//         ListNode* odd = head;
//         ListNode* even = head->next;
//         ListNode* evenHead = even;

//         while(even!= NULL && even->next != NULL){
//             odd->next = even->next;
//             odd= odd->next;

//             even->next = od->next;
//             even = even->next;
//         }
//         odd->next = evenHead;
//         return head;
//     }
// };