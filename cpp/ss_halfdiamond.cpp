#include <iostream>
using namespace std;

void pattern10(int N)
{
    for (int i = 0; i < 2*N; i++)
    {
        if(i<=N){
            for(int j=1;j<=i;j++){
                cout << "*";
            }
            cout << endl;
        }
        else if(i>N && i < 2*N){
            for(int j=2*N-i;j>0;j--){
                cout << "*";
            }
            cout << endl;
        }
    
    }   
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N ;
    cin>>N;

    pattern10(N);

    return 0;
}