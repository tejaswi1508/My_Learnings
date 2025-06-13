/*Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].*/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> newArr;
        for(int i=0;i<n;i++){
            newArr.push_back(nums[i]);
            newArr.push_back(nums[n+i]);
        }
        return newArr;
    }
};

//improvised version
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // Encode two numbers into one element
        for (int i = 0; i < n; ++i) {
            nums[i] |= (nums[n + i] << 10);
        }

        // Decode and rearrange
        for (int i = n - 1; i >= 0; --i) {
            int y = nums[i] >> 10;
            int x = nums[i] & 1023; // Mask to get original lower 10 bits
            nums[2 * i] = x;
            nums[2 * i + 1] = y;
        }

        return nums;
    }
};
