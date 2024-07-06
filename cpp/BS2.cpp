/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int cnt = 0;
        int first = -1,last = -1;

        for(int i = 0;i<n;i++){
            if(nums[i]==target){
                first = i;
                break;
            }
            
        }
        if(first == -1) return {-1,-1};

        for(int j = n-1;j>=first ;j--){
            if(nums[j]==target){
                last = j;
                break;
            }
        }
        
        return {first,last};
    }
};