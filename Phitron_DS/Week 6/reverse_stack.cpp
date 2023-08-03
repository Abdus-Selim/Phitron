#include <bits/stdc++.h>
using namespace std;
/*Reverse a stack using another stack*/
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
    Stack<double> st;
    st.push(3.5);
    st.push(3.6);
    st.push(7.8);

    Stack<double> tmp;
    while (st.getsize() > 0)
    {
        tmp.push(st.top());
        st.pop();
    }
    swap(st, tmp);

    while (st.getsize() > 0)
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}