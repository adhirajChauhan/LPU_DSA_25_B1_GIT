/*
https://leetcode.com/problems/valid-palindrome/
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left<right){
            while(left < right && !isalnum(s[left])) left++;
            while(left < right && !isalnum(s[right])) right--;

            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }

            left++;
            right--;
        }
        return true;
    }
};



https://leetcode.com/problems/reverse-words-in-a-string/
#include<sstream>
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        istringstream ss(s);

        //Exract words and ignore multiple spaces
        while(ss >> word){
            words.push_back(word);
        }

    //reverse the vector of words
        reverse(words.begin(), words.end());

        //Join the words with a single space
    string result = "";
    for(int i = 0; i < words.size(); i++){
        result += words[i];
        if(i < words.size() - 1){
            result += " ";
        }
    }
    return result;
    }

    
};


https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0, right = 0;
        int maxLen = 0;
        while(right < s.length()){
            if(seen.find(s[right]) == seen.end()){
                seen.insert(s[right]);
                maxLen = max(maxLen,right - left + 1);
                right++;
            }
            else{
                seen.erase(s[left]);
                left++;
            }
        }
        return maxLen;
    }
};


https://www.geeksforgeeks.org/problems/pattern-searching5231/1

class Solution {
  public:
    bool searchPattern(string& txt, string& pat) {
        int n = txt.length();
        int m = pat.length();
        
        for(int i = 0; i <= n - m; i++){
            int j = 0;
            while(j < m && txt[i+j]== pat[j]){
                j++;
            }
            if(j == m) return true;
        }
        return false;
    }
};


*/