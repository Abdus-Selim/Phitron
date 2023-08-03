#include <bits/stdc++.h>
using namespace std;

// Deque using doubly linkedlist

class node
{
public:
    int data;
    node *prv;
    node *nxt;
};

class Deque
{
public:
    node *head;
    node *tail;
    int rev;
    int sz;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
        rev = 0;
    }

    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    // to print reverse deque
    void InsertAtTail(int value)
    {
        node *newnode = CreateNewNode(value);
        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;
    }

    // to print reverse deque
    void InsertAtHead(int value)
    {
        node *newnode = CreateNewNode(value);
        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->prv = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
    }

    // O(1)
    void push_back(int value)
    {
        if (rev == 0)
        {
            InsertAtTail(value);
        }
        else
        {
            InsertAtHead(value);
        }
    }

    void push_front(int value)
    {
        if (rev == 0)
        {
            InsertAtHead(value);
        }
        else
        {
            InsertAtTail(value);
        }
    }

    void deletelast()
    {
        if (sz == 0)
        {
            cout << "Deque is EMPTY!" << endl;
        }
        if (sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node *a = tail;
        tail = tail->prv;
        delete a;
        tail->nxt = NULL;
        sz--;
    }

    void deletefirst()
    {
        if (sz == 0)
        {
            cout << "Deque is EMPTY!" << endl;
        }
        if (sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node *a = head;
        head = head->nxt;
        delete a;
        head->prv = NULL;
        sz--;
    }

    void pop_back()
    {
        if (rev == 0)
        {
            deletelast();
        }
        else
            deletefirst();
    }

    void pop_front()
    {
        if (rev == 0)
        {
            deletefirst();
        }
        else
            deletelast();
    }

    int front()
    {
        if (sz == 0)
        {
            cout << "Deque is EMPTY!" << endl;
            return -1;
        }
        if (rev == 0)
        {
            return head->data;
        }
        else
            return tail->data;
    }

    int back()
    {
        if (sz == 0)
        {
            cout << "Deque is EMPTY!" << endl;
            return -1;
        }
        if (rev == 0)
        {
            return tail->data;
        }
        else
            return head->data;
    }

    void reverse_deque()
    {
        if (rev == 0)
        {
            rev = 1;
        }
        else
            rev = 0;
    }
};

int main()
{
    Deque d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);
    d.push_front(20);

    d.reverse_deque();

    cout << "Back : " << d.back() << " Front : " << d.front() << endl;


    d.pop_front();
    cout << "Back : " << d.back() << " Front : " << d.front() << endl;

    d.pop_back();
    cout << "Back : " << d.back() << " Front : " << d.front() << endl;

    return 0;
}