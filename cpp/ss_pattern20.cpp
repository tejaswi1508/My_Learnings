#include <iostream>
using namespace std;

void pattern20(int N)
{
    
    for (int i = 0; i < 2*N; i++)
    {
        if(i<N){
            for(int j=0;j<N-i;j++){
                cout<<"*";
            }
            for(int j=0;j<2*i;j++){
                cout<<" ";
            }
            for(int j=0;j<N-i;j++){
                cout<<"*";
            }
            cout<< endl;
        }
        else if(i>=N&&i<2*N){
            for(int j=0;j<i-N+1;j++){
                cout<<"*";
            }
            for(int j=0;j<2*N - 2*(i-N+1);j++){
                cout<<" ";
            }
            for(int j=0;j<i-N+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N ;
    cin>>N;

    pattern20(N);

    return 0;
}