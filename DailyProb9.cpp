/*Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".*/

class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.length();
        stack<string> st;
        string temp = "[.]";
        for(int i=n-1;i>=0;i--){
            st.push(string(1,address[i]));
            if(st.top()=="."){
                st.pop();
                st.push(temp);
            }
        }
        string result;
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        return result;
    }
};