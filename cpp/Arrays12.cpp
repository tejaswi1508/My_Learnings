class Solution {
    
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int>ans;
        int max=arr[n-1];
        ans.push_back(max);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=max){
                max=arr[i];
                ans.push_back(max);
                
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};