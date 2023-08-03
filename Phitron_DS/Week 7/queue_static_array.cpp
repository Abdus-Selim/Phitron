#include <bits/stdc++.h>
using namespace std;

/*Queue is a First in First out (FIFO) Data Structure*/

// Queue using an array
const int MAX_SIZE = 500;

class Queue
{
public:
    int a[MAX_SIZE];
    int l, r;
    Queue()
    {
        l = 0;
        r = -1;
    }
    void Enqueue(int value)
    {
        if (r + 1 >= MAX_SIZE)
        {
            cout << "Queue is FULL!" << endl;
            return;
        }
        r++;
        a[r] = value;
    }
    // O(1)
    void Dequeue()
    {
        if (l > r)
        {
            cout << "Queue is EMPTY!" << endl;
            return;
        }
        l++;
    }
    int front()
    {
        if (l > r)
        {
            cout << "Queue is EMPTY!" << endl;
            return -1;
        }
        return a[l];
    }
    int size()
    {
        return r - l + 1;
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