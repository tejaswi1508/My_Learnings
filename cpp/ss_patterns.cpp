#include <iostream>
using namespace std;

void pattern8(int N)
{
    for (int i = 0; i < 2*N; i++)
    {
        if(i<N){
            // For printing the spaces before stars in each row
            for (int j =0; j<N-i-1; j++)
            {
                cout <<" ";
            }
           
            // For printing the stars in each row
            for(int j=0;j< 2*i+1;j++){
                
                cout<<"*";
            }
            
            // For printing the spaces after the stars in each row
             for (int j =0; j<N-i-1; j++)
            {
                cout <<" ";
            }
            cout << endl;
        }

        
        else if(i>=N && i <2*N){
            for (int j =0; j<i-N; j++)
            {
                cout <<" ";
            }
       
        // For printing the stars in each row
            for(int j=0;j< 2*i - 4*(i-N)-1;j++){
                
                cout<<"*";
            }
        
        // For printing the spaces after the stars in each row
            for (int j =0; j<i-N; j++)
            {
                cout <<" ";
            }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
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

    pattern8(N);

    return 0;
}