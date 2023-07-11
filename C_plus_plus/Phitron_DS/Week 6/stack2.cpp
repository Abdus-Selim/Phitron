#include <bits/stdc++.h>

/*Stack using Dynamic Array*/

using namespace std;

class Stack
{
public:
    int *a;
    int capcty;
    int stack_size;
    Stack()
    {
        a = new int[1];
        capcty = 1;
        stack_size = 0;
    }

    /*Make the array capacity multiplied by 2*/
    void increase_size()
    {
        int *tmp;
        tmp = new int[capcty * 2];
        for (int i = 0; i < capcty; i++)
        {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        delete []tmp;
        capcty = capcty*2;
    }
    /*Add an element to the stact O(1)*/
    void push(int val)
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
        a[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }

    /*Returns the top element of the stack O(1)*/
    int top()
    {
        if (stack_size == 0)
        {
            cout << "Stack Size is EMPTY!" << endl;
            return -1;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack st;
    st.push(5);
    cout << st.top() << endl;
    st.push(3);
    cout << st.top() << endl;
    st.push(9);
    cout << st.top() << endl
         << endl;

    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    return 0;
}