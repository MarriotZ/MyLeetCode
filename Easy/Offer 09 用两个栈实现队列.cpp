#include <iostream>
#include <stack>
using namespace std;

class CQueue {
public:
    CQueue() {
        this->s1=new stack<int>;
        this->s2=new stack<int>;
    }
    
    void appendTail(int value) {
        s1.push(value);
    }
    
    int deleteHead() {
        if(s2.empty())
    }
    private:
    stack<int> s1;
    stack<int> s2;
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */