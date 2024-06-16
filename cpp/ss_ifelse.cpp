#include<iostream>
using namespace std;

class Solution{
    public:
    string compareNM(int n,int m){
        if(n<m){
            return "lesser";
        }
        else if(n==m){
            return "equal";
        }
        else if(n>m){
            return "greater";
        }
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n>>m;
        Solution obj;
        cout << obj.compareNM(n,m) << endl;
    }
    return 0;
}