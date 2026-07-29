class Solution {
public:
    bool isAnagram(string s, string t) {
        // if lengths are different, cannot be an anagram
        if(s.size() != t.size()) return false; 

        vector<int> freq(26, 0); 

        for(char ch : s) freq[ch - 'a']++; // count characters of 1st string

        for(char ch : t) freq[ch - 'a']--; // remove characters of 2nd string

        for(int count : freq) if(count != 0) return false; 

        return true;
    }
};