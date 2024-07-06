//Binary Search iterative method
#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& nums,int target){
    int n = nums.size();
    int low=0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) low = mid+1;
        else high = mid-1;
    }
    return -1;
}
int main(){
    vector<int> nums = {3,4,6,7,9,12,16,17};
    int target = 6;
    int ans = BinarySearch(nums,target);
    if (ans == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: " << ans << endl;
    return 0;
}