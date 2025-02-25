// int prefix(vector<int>& nums,int i){
    //     int result=1;
    //     if(i==0) return 1;
    //     else{
    //         for(int j=0;j<i;j++){
    //             result *= nums[j];
    //         }
    //     }
    //     return result;
    // }
    // int suffix(vector<int>& nums,int i){
    //     int result=1;
    //     if(i==nums.size()-1) return 1;
    //     else{
    //         for(int j=i+1;j<nums.size();j++){
    //             result *= nums[j];
    //         }
    //     }
    //     return result;
    // }

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;  
        prefix *= nums[i];  
    }
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;  
        suffix *= nums[i];  
    }

    return answer;