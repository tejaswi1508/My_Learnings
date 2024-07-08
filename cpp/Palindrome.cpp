#include<iostream>
#include<string>

using namespace std;

bool palinCheck(string & str){
    int n = str.length();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            return false;
        }
               
    }
    return true;
}
int main(){
    string str = "satas";
    if(palinCheck(str)==true){ cout<<"yes";}
    else cout<<"no";

    return 0;
}