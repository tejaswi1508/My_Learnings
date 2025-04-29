//Using sort()
class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>> result;
            unordered_map<string,vector<string>> mp;
            int n = strs.size();
            for(int i=0;i<n;i++){
                string temp = strs[i];
                sort(temp.begin(),temp.end());
                mp[temp].push_back(strs[i]);
            }
            for(auto it : mp){
                result.push_back(it.second);
            }
            return result;
        }
    };

// Using count/hash directly
class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>> result;
            unordered_map<string,vector<string>> mp;
            int n = strs.size();
            for(int i=0;i<n;i++){
                int hash1[26]={0};
                for(char ch : strs[i]){
                    hash1[ch-'a']++;
                }
                string key="";
                for(int j=0;j<26;j++){
                    key += to_string(hash1[j]) + "#";
                }
                mp[key].push_back(strs[i]);
            }
            for(auto it : mp){
                result.push_back(it.second);
            }
            return result;
        }
    };