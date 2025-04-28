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

// Further Optimised Solution using a singe array and single pass

class Solution {
    public:
        bool isAnagram(string s, string t) {
            int hash1[26] = {0};
            int n = s.size();
            int m = t.size();
            if(n!= m) return false;
    
            for(int i=0;i<n;i++){
                hash1[s[i]-'a']++;
                hash1[t[i]-'a']--;
            }
            for(int count : hash1){
                if(count != 0) return false;
            }
            return true;
        }
    };