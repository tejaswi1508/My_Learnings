#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        /*long long res = 0;
        long long sum = 0;
        
        for(int i=1;i<=N;i++){
            
            vector<int> divisors;
            for(int k=1;k<=i;k++){
            if(i%k == 0) divisors.push_back(k);
            }
            for(int j : divisors){
                sum += j;
            }
            res += sum;
            sum = 0;
        }
        return res;*/
        long long res = 0;
        
        // Iterate over each number from 1 to N
        for (int i = 1; i <= N; ++i) {
            // Each number i is a divisor of its multiples
            res += i * (N / i);
        }

        return res;
    }
    /*vector<int> VecDiv(int N){
        vector<int> vec;
        for(int i=1;i<=N;i++){
            if(N%i == 0) vec.push_back(i);
        }
        return vec;
    }*/
};


int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        Solution ob;
        long long ans = ob.sumOfDivisors(N);
        cout << ans <<endl;
        
    }
    return 0;
}