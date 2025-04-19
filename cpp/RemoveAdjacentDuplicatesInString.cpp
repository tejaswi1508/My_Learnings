// Using 2 stacks
class Solution {
    public:
        string removeDuplicates(string s) {
            stack<char> st;
            int n= s.size();
            for(char ch : s){
                if(!st.empty() && ch == st.top()){
                    st.pop();
                    continue;
                }
                st.push(ch);
            }
            string result;
            stack<char> temp;
            while(!st.empty()){
                temp.push(st.top());
                st.pop();
            }
            while(!temp.empty()){
                result += temp.top();
                temp.pop();
            }
            return result;
        }
    };

    // Better optimised Version - Using string as stack

    class Solution {
        public:
            string removeDuplicates(string s) {
                string ans;
                int n= s.size();
                for(char ch:s){
                    if(!ans.empty()&&ch==ans.back()){
                        ans.pop_back();
                    }
                    else ans.push_back(ch);
                }
                return ans;
            }
        };