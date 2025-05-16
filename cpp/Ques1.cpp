#include<iostream>
#include<string>
#include<vector>
using namespace std;

int checkcnt(string& str){
    int cnt0=0,cnt1=0;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]=='0') cnt0++;
        else if (str[i] == '1') cnt1++;
    }
    if(cnt0==cnt1) return cnt0;
    else return 0;
}

vector<string> Largest_good(string& binStr){
    //int n = binStr.length();
    int cnt = checkcnt(binStr);
    vector<string> newStr;
    for(int i=0;i<cnt;i++){
        newStr.push_back("1");
    }
    for(int i=0;i<cnt;i++){
        newStr.push_back("0");
    }

    return newStr;
}
/*
int main(){
    string binString = "110001";
    vector<string> ans = Largest_good(binString);
    for(auto c : ans){
       std:: cout << c;
    }
    return 0;
}
*/