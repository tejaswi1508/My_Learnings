#include<iostream>
using namespace std;

void swapByRef(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
void swapByPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x,y;
   // int x=2;
   // int y=3;
    cout <<"Enter x: "<<endl;
    cin >> x;
    cout <<"Enter y: " <<endl;
    cin >> y;

    cout << "Old value of x is "<<x<< " Old value of y is "<<y<<endl;
    swapByPointer(&x,&y);
    cout << "New value of x is "<< x << " New value of y is "<< y <<endl;
    
   
   // cout << "Old value of x is "<<x<< " Old value of y is "<<y<<endl;
   // swapByRef(x,y);
   // cout << "New value of x is "<< x << " New value of y is "<< y <<endl;

    return 0;
}