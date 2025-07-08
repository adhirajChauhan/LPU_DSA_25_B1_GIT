/*
https://www.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1&selectedLang=python3
class Solution {
  public:
  
  void solve(stack<int>& s, int curr, int mid){
      if(s.empty()) return;
      
      int topElement = s.top();
      s.pop();
      if(curr == mid) return;
      solve(s,curr + 1, mid);
      s.push(topElement);
      
  }
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        int size = s.size();
        int mid = (size+1)/2;
        solve(s, 1, mid);
    }
};



https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1
// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        //Base case -> if stack is empty, push(x) and return;
        if(st.empty()){
            st.push(x);
            return st;
        }
        
        int topElement = st.top();
        st.pop();
        
        st = insertAtBottom(st, x);
        
        st.push(topElement);
        return st;
    }
};

*/