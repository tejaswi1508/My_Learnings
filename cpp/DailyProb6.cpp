/* Concatenation of Array */
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int cnt=0;
        while(cnt!=2){
            for(int num : nums){
            ans.push_back(num);
            }
            cnt++;
        }
        return ans;
        
    }
};