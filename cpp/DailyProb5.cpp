/* Building Array From Permutation */
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};
