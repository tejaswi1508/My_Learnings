// Brute force solution
class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int res = INT_MAX;
            int sum=0,minlen=0;
            int n = nums.size();
    
            for(int i=0;i<n;i++){
                sum=0;
                for(int j=i;j<n;j++){
                    sum += nums[j];
                    if(sum >= target){
                        minlen = j-i+1;
                        res = min(res,minlen);
                        break;
                    }
                    
                }
                
            }
            return res == INT_MAX?0:res;
        }
    };

    //Optimized 

    class Solution {
        public:
            int minSubArrayLen(int target, vector<int>& nums) {
                int res = INT_MAX;
                int n = nums.size();
                int left=0,right=0;
                int sum =0,minlen=0;
        
                while(right<n){
                    
                    sum += nums[right];
                    while(sum>= target){
                        res = min(res,right-left+1);
                        sum -= nums[left];
                        left++;
                    }
                    right++;
        
                }
                return res == INT_MAX?0:res;
            }
        };