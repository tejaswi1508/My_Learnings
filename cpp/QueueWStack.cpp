class MyQueue {
public:
    stack<int> s1 , s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(!s2.empty()){
            for(int i=0;i<s2.size()-1;i++){
                s1.push(s2.top());
                s2.pop();
            }
            s1.push(x);
            for(int i=0;i<s1.size()-1;i++){
                s2.push(s1.top());
            }
        }
        else if(s2.empty()){
            s1.push(x);
        }
    }
    
    int pop() {
        s2.pop();
    }
    
    int peek() {
        s2.top();
    }
    
    bool empty() {
        return s2.empty();
    }
};

/*
class MyQueue {
public:
    stack<int> s1 , s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int ans = s2.top();
        s2.pop();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
    
    int peek() {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int ans = s2.top();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
    
    bool empty() {
        return s1.empty();
    }
};
*/