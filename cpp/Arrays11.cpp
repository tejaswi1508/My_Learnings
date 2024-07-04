class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                k=i;
                break;
            }
        }
        if (k == -1){
            sort(nums.begin(), nums.end());
            return;
        }
        int mni = -1, mnv = 101;
        for(int i=k+1;i<n;i++){
            if(nums[i] > nums[k]){
                if(mnv >= nums[i]){
                    mnv = nums[i];
                    mni = i;
                }
            }
        }
        swap(nums[mni], nums[k]);
        for(int i=0;i<n;i++)
            cout<<nums[i]<<" ";
        reverse(nums.begin()+k+1, nums.end());
    }
        
    
};