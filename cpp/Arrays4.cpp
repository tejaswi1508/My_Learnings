#include<iostream>
#include<vector>

using namespace std;

string Find_ints(int n, vector<int> &arr, int target){
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) return "YES";
        }
    }
    return "NO";
}

int main(){
    int N;
    cin >> N;
    vector<int> arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int target;
    cin>> target;
    string ans = Find_ints(N, arr[N], target);
    cout << "This is the answer for variant 1: " << ans << endl;

    return 0;
    
}






