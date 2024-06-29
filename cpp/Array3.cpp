#include<iostream>
#include<stack>

using namespace std;

void printStack(stack<int> st){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    while(!temp.empty()){
        cout << temp.top() <<" ";
        st.push(temp.top());
        temp.pop();

    }
}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    stack<int> st;
    st.push(arr[0]);
    for(int i=1;i<N;i++){
        if(arr[i] != st.top()) st.push(arr[i]);
    }
    printStack(st);

}