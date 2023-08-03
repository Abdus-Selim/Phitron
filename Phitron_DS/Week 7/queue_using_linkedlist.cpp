#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
};
class Queue
{
public:
    node *head;
    node *tail;
    int sz;

    Queue()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    node *CreateNOde(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    void Enqueue(int value)
    {
        sz++;
        node *newnode = CreateNOde(value);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->nxt = newnode;
        tail = newnode;
    }
    void Dequeue()
    {
        if (sz == 0)
        {
            cout << "Queue is Empty!" << endl;
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
        sz--;
        delete a;
    }
    int front()
    {
        if (sz == 0)
        {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return head->data;
    }
    int size()
    {
        return sz;
    }
};

int main()
{
    Queue q;
    q.Enqueue(5);
    q.Enqueue(10);
    q.Enqueue(15);

    cout << "Q size: " << q.size() << endl;
    cout << q.front() << endl;
    q.Dequeue();
    cout << q.front() << endl;
    q.Dequeue();
    cout << q.front() << endl;
    q.Dequeue();

    cout << "Q size: " << q.size() << endl;
    cout << q.front() << endl;
    return 0;
}