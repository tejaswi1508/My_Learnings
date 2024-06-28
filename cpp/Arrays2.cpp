#include<iostream>
using namespace std;

int print2largest(int arr[], int N) {
        // code here
        int maxi = arr[0];
        
        int k=0;
        for(int i=0;i<N-1;i++){
            if(arr[i+1]>maxi) {
                maxi = arr[i+1];
                k=i+1;
            }
            
        }
        cout << k <<endl;
        int secmax;
        if(k>1) secmax = arr[k-1];
        else if(k==1 && k<N) secmax = arr[k+1];
        for(int i=0;i<N;i++){
            if(arr[i+1]>secmax && arr[i+1]<maxi){
                secmax = arr[i+1];
            }
        }
        return secmax;
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
        int res = print2largest(arr,N);
        cout<< res<<endl;
    }
    return 0;

}