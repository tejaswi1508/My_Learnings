class Solution {
  public:
    long long pairWithMaxSum(long long arr[], long long N) {
        // Your code goes here
        long long sum=0;
        long long maxi = 0;
        for(int i=0;i<N-1;i++){
            
            sum = arr[i]+arr[i+1];
            maxi = max(sum,maxi);
            
        }
        return maxi;
        
    }
};