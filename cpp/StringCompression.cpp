class Solution {
    public:
        int compress(vector<char>& chars) {
            int count = 1;
            int n = chars.size();
            int left = 0;
            int right = 1;
            string s;
            for(int right=1;right<n;right++){
                if(chars[left] == chars[right]){
                    s[right]
                    count++;
                    if(count>1){
                        s[]
                    }
                }
                else if(chars[left]!= chars[right]){
                    left = right;
                    right = right+1;
                    count = 1;
                }
            }
            
        }
    };