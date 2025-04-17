//Brute force

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int n = nums.size();
            int maxsum=INT_MIN;
    
            for(int i=0;i<n;i++){
                int sum=0;
                for(int j=i;j<n;j++){
                    sum += nums[j];
                    maxsum = max(maxsum,sum);
                }
            }
            return maxsum;
    
        }
    };

    //Optimised

    class Solution {
        public:
            int maxSubArray(vector<int>& nums) {
                int n = nums.size();
                int curr_sum = nums[0],max_sum=nums[0];
        
                for(int i=1;i<n;i++){
                    curr_sum = max(nums[i],curr_sum+nums[i]);
                    max_sum = max(curr_sum,max_sum);
                }
                return max_sum;
        
            }
        };