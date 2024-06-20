#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

vector<int> DigOfN(int N){
    int num = N;
    int dig;
    vector <int> vec;
    while(N>0){
        dig = N%10;
        vec.push_back(dig);
        N = N/10;
    }
    return vec;
}

bool checkArmstrong(int N){
    
    int sum = 0;
    vector<int> v1 = DigOfN(N);
    vector <int>:: iterator it = v1.begin();
    while(it != v1.end()){
        sum += pow(*it,3);
        it++;
    }
    if(sum == N) return true;
    else return false;
}

int main(){
    int N;
    cin >> N;
    if(checkArmstrong(N)){
        cout << "true";
    }
    else{
        cout <<"false";
    }

    return 0;
}