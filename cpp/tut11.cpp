#include <iostream>
using namespace std;

int main(){
    int arr[9] ={1,2,3,4,5,6,7,8,9};
    int *p = &arr[0];
    *p = *p + 1;
    
   // cout << *(p+5) + 11 << endl;
    cout<<*p<<endl;
    return 0;
}