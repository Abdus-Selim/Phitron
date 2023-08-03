#include <bits/stdc++.h>
using namespace std;
/*Sorting a stack*/

template <class T>
class node
{
public:
    T data;
    node *nxt;
    node *prv;
};

template <class T>
class DublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    /*Creates a new node with the given data*/
    node<T> *CreateNewNode(T data) // O(1)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    /*Inserts a newnode with the given data into the head*/
    void InsertAtHead(T data) // O(1)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    /*Delete the head*/
    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->nxt;
        delete a;
        if (b != NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }

    int getsize()
    {
        return sz;
    }
};
/*Stack using doubly linkedlist*/
template <class T>
class Stack
{
public:
    DublyLinkedList<T> dl;

    Stack()
    {
    }
    T top()
    {
        if (dl.getsize() == 0)
        {
            cout << "Stack is Empty!" << endl;
            assert(false);
        }
        return dl.head->data;
    }

    void push(T val)
    {
        dl.InsertAtHead(val);
    }

    void pop()
    {
        if (dl.getsize() == 0)
        {
            cout << "Stack is Empty!";
            return;
        }
        dl.DeleteAtHead();
    }

    int getsize()
    {
        return dl.getsize();
    }
};

int main()
{
    Stack<int> st;
    st.push(5);
    st.push(2);
    st.push(7);
    st.push(8);
    st.push(3);

    Stack<int> tmp;
    while (st.getsize() > 0)
    {
        int t = st.top();
        st.pop();
        while(tmp.getsize()>0)
        {
            if(tmp.top()<t)
            {
                break;
            }
            int temp = tmp.top(); // Store the top element of tmp
            st.push(temp);        // Push the stored element to st
            tmp.pop();
        }
        tmp.push(t);
    }
    swap(st, tmp);

    while (st.getsize() > 0)
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}