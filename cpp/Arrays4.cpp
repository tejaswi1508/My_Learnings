#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(int n,vector<int> &arr,int target){
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int num2 = target - num;
        if(mpp.find(num2)!= mpp.end()){
            return {mpp[num2],i};
        }
        mpp[num] = i;
    }
    return {-1,-1};
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}






