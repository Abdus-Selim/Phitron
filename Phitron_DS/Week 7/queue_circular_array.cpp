#include <bits/stdc++.h>
using namespace std;

// Queue using Circular array theory
const int MAX_SIZE = 500;

class Queue
{
public:
    int a[MAX_SIZE];
    int l, r, sz;
    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }
    void Enqueue(int value)
    {
        if (sz == MAX_SIZE)
        {
            cout << "Queue is FULL!" << endl;
            return;
        }
        r++;
        if (r == MAX_SIZE)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }
    void Dequeue()
    {
        if (sz == 0)
        {
            cout << "Queue is EMPTY!" << endl;
            return;
        }
        l++;
        if (l == MAX_SIZE)
        {
            l = 0;
        }
        sz--;
    }
    int front()
    {
        if (sz == 0)
        {
            cout << "Queue is EMPTY!" << endl;
            return -1;
        }
        return a[l];
    }
    int size()
    {
        return sz;
    }
};

int main()
{
    Queue q;
    q.Enqueue(60);
    q.Enqueue(40);
    q.Enqueue(33);

    cout << q.size() << endl;
    cout << q.front() << endl;
    q.Dequeue();
    cout << q.front() << endl;
    q.Dequeue();
    cout << q.front() << endl;
    q.Dequeue();

    cout << q.size() << endl;

    return 0;
}