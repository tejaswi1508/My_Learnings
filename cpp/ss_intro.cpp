#include<iostream>
using namespace std;

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if(str == "Character"){
            cout<< sizeof(char);
        }
        else if(str == "Integer"){
            cout<< sizeof(int);
        }
        else if(str == "Long"){
            cout << sizeof(long);
        }
        else if(str == "Float"){
            cout << sizeof(float);
        }
        else if(str == "Double"){
            cout << sizeof(double);
        }
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
    
}