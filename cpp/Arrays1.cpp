#include<iostream>
using namespace std;

int find_max(int arr[], int N){
    int maxi = arr[0];
    for(int i=0;i<N-1;i++){
        if(arr[i+1]>maxi) {
            maxi = arr[i+1];
        }
    }
    return maxi; 
}

int main(){
    int q;
    cin >> q;
    
    while(q--){
        int N;
        cin >>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int res = find_max(arr,N);
        cout<< res<<endl;
    }
    return 0;

}