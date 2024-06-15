#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a+ b;
    return c;

}
int main(){
    int num1,num2;
    cout << "Enter num1: "<<endl;
    cin >> num1;
    cout << "Enter num2: "<<endl;
    cin >> num2;
    cout << "Sum of num1 and num2 is: " << sum(num1,num2);

    return 0;
}