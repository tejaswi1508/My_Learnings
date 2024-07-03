/* You are given a 0-indexed integer array nums of even length consisting 
of an equal number of positive and negative integers.You should return the
array of nums such that the the array follows the given conditions:
Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in
nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the 
aforementioned conditions.*/


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int posInd = 0,negInd=1;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negInd]=nums[i];
                negInd += 2;
            }
            else{
                ans[posInd]=nums[i];
                posInd += 2;
            }
        }
        return ans;
    }
};