#include<iostream>
#include<vector>

using namespace std;

vector<int> CheckDiv(int N){
    vector<int> vec;
    for(int i=1;i<=N;i++){
        if(N%i == 0) vec.push_back(i);
    }
    return vec;
}


int main(){
    int N;
    cin >> N;
    vector <int> divisors = CheckDiv(N);
    for(int i : divisors){
        cout << i << " ";
    }
}

/*
// Code for checking prime

#include<iostream>
#include<vector>

using namespace std;

vector<int> CheckDiv(int N){
    vector<int> vec;
    for(int i=1;i<=N;i++){
        if(N%i == 0) vec.push_back(i);
    }
    return vec;
}
bool checkPrime(int N){
    vector <int> divisors = CheckDiv(N);
    if(divisors.size() == 2) return true;
    else return false;
    
}

int main(){
    int N;
    cin >> N;
    if(checkPrime(N)) cout << "prime";
    else cout <<"not prime";
}
*/