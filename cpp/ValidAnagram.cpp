// 242. Valid Anagram
class Solution {
    public:
        bool isAnagram(string s, string t) {
            int hash1[26] = {0};
            for(char ch: s){
                hash1[ch - 'a']++;
            }
            int hash2[26] = {0};
            for(char ch : t){
                hash2[ch - 'a']++;
            }
    
            for(int i=0;i<26;i++){
                if(hash1[i]!=hash2[i]) return false;
            }
            return true;
        }
    };