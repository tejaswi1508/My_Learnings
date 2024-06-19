#include<iostream>

using namespace std;

int CountDig(int N){
    int cnt = 0;
    int num = N;
    int dig;
    while(N>0){
        dig = N%10;
        if(dig !=0 && num % dig == 0) cnt++;
        N = N/10;
    }
    return cnt;
}

int main(){
    int N;
    cin >> N;
    cout << CountDig(N);

    return 0;
}