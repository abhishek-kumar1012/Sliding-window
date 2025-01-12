Given a string s, find the length of the longest 
substring
 without repeating characters.
Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 
Constraints:
0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.

code::

  int lengthOfLongestSubstring(string s) {
     int n=s.size();
     vector<int>mp(256,-1);
     int l=0;
     int r=0;
     int len=0;
     while(r<n){
        if(mp[s[r]]!=-1){
           if(mp[s[r]]>=l)l=mp[s[r]]+1;
        }
           mp[s[r]]=r;
           len=max(len,r-l+1);
           r++;
     }
     return len;
    
