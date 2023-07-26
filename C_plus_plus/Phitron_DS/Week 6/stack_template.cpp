#include <bits/stdc++.h>

/*Template based Stack using Dynamic Array*/

using namespace std;

template <class T>

class Stack
{
public:
    T *a;
    int capcty;
    int stack_size;
    Stack()
    {
        a = new T[1];
        capcty = 1;
        stack_size = 0;
    }

    /*Make the array capacity multiplied by 2*/
    void increase_size()
    {
        T *tmp;
        tmp = new T[capcty * 2];
        for (int i = 0; i < capcty; i++)
        {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        delete[] tmp;
        capcty = capcty * 2;
    }
    /*Add an element to the stact O(1)*/
    void push(T val)
    {
        if (stack_size + 1 > capcty)
        {
            increase_size();
        }
        stack_size = stack_size + 1;
        a[stack_size - 1] = val;
    }
    /*Delete the top most element from the stack O(1)*/
    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack Size is EMPTY!" << endl;
            return;
        }
        stack_size = stack_size - 1;
    }

    /*Returns the top element of the stack O(1)*/
    T top()
    {
        if (stack_size == 0)
        {
            cout << "Stack Size is EMPTY!" << endl;
            assert(false);
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack<double>st;
    st.push(3.5);
    st.push(3.6);
    st.push(7.8);
    cout<<st.top()<<endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl<<endl;

    Stack<char>stt;
    stt.push('a');
    stt.push('b');
    stt.push('c');
    cout<<stt.top()<<endl;
    stt.pop();
    cout << stt.top() << endl;
    stt.pop();
    cout << stt.top() << endl;
    stt.pop();
    cout << stt.top() << endl;
    return 0;
}