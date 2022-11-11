#include <bits/stdc++.h>
using namespace std;

class Stack
{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

void push(int element)
{
    if(size-top>1)
    {
        top++;
        arr[top]=element;
    }
    else
    {
        cout<<"Stack is overflow"<<endl;
    }

}

void pop()
{
    if(top>=0)
    {
        top--;
    }
    else
    {
        cout<<"Stack underflow"<<endl;
    }
}

int peek()
{
    if(top>=0)
    {
        return arr[top];
    }
    else
    {
    cout<<"Stack is empty"<<endl;
    return -1;
    }
}

bool isEmpty()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Stack is not empty"<<endl;
    }
}

};

int main()
{
    Stack st(5);
    st.push(34);
    st.push(89);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isEmpty())
    cout<<"Stack is empty :("<<endl;
    else
    cout<<"Stack is empty :)"<<endl;
    return 0;
}
