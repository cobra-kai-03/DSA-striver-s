class MyStack {
public:
    queue<int>q,t;
    MyStack() {
        //queue<int>q;
    }
    
    void push(int x) {
        while(q.size()>0)
        {
            t.push(q.front());
            q.pop();
        }
        q.push(x);
        while(t.size()>0)
        {
            q.push(t.front());
            t.pop();
        }
    }
    
    int pop() {
        int k=q.front();
        q.pop();
        return k;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.size()==0;
    }
};
