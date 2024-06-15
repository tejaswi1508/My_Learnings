#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1,2,3,4,5,6,7};
    int sum = 0;
    int n = sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<n;i++){
        sum += arr1[i];
    }
    cout<< sum;
    return 0;
}