/*
stack empty , top = -1
*/

#include <iostream>
#include <stack>
using namespace std;

struct stack
{
    int cap;
    int top;
    int *arr;
    stack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x)
    {
        top++ arr[top] = x;
    }
    int pop()
    {
        int res = arr[top];
        top--;
        return res;
    }
    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return (top + 1);
    }
    bool isEmpty()
    {
        return (top == -1)
    }
};

int main()
{
    stack s(5);
    s.push(10);
    return 0;
}