#include<iostream>
using namespace std;
/* 
int reverseArray(int N, int arr[]){
    int i;
}

int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0;i<N;i++){
        cin >> arr[i];
    }


}*/

int swap_num(int &x, int &y){
    x = x+y;
    y = x - y;
    x = x - y;
}
int main(){
    int x,y;
    cin >> x;
    cin >> y;
    swap_num(x,y);
    cout << x<<" "<<y;
}