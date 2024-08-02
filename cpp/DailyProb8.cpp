/* 3190. Find Minimum Operations to Make All Elements Divisible by Three*/

int minimumOperations(vector<int>& nums) {
        int cnt = 0;
        int modu;
        for(int num : nums){
            modu = num % 3;
            if(modu == 1 || modu == 2){
                cnt++;
            }
        }
        return cnt;
    }