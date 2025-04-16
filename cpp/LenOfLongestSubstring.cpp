class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int n=s.length();
            int left=0,right=0;
            int maxLen =0;
            int freq[128]={0};
    
            while(right<n){
                freq[s[right]]++;
                while(freq[s[right]]>1){
                    freq[s[left]]--;
                    left++;
                }
                maxLen = max(maxLen,right-left+1);
                right++;
            }
            return maxLen;
        }
    
    };