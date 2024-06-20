#include<iostream>
#include<vector>

using namespace std;

vector<int> reverseNum(int N){
    int dig;
    int num=N;
    vector<int> vec;
    while(num>0){
        dig = num%10;
        vec.push_back(dig);
        num = num/10;
    }
    while(!vec.empty() && vec[0]==0){
        vec.erase(vec.begin());
    }
     

    return vec;
}
void printReverse(const vector<int>& vec){
    for(int digit : vec){
        cout << digit;
    }
    cout<<endl;
}
int main(){
    int N;
    cin >> N;
    vector<int> NewNum = reverseNum(N);
    printReverse(NewNum);
}

/*
// Solution of leetcode problem
class Solution {
public:
    int reverse(int N) {
        int dig;
        int x;
        
        int num=abs(N);
        long revNum = 0;
        
        while(num>0){
            dig = num%10;
            revNum = revNum * 10 + dig;
            num = num/10;
        }
        if(revNum < INT_MIN || revNum >INT_MAX) return 0;
        else if(N<0) return -1*revNum;
        else return (int)revNum;
    }
};

*/