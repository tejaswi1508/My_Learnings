#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    vector<pair<int,int>> inp(t);
    for (int i = 0; i < t; ++i) {
        cin >> inp[i].first;
        cin >> inp[i].second;
    }

    for(auto x : inp){
        int res = (x.first-1)*x.second + 1;
        cout << res << endl;
    }
    return 0;

}