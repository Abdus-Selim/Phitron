#include <bits/stdc++.h>
using namespace std;

// Queue using Circular array theory

class Queue
{
public:
    int *a;
    int array_capacity;
    int l, r, sz;
    Queue()
    {
        a = new int[1];
        array_capacity = 1;
        l = 0;
        r = -1;
        sz = 0;
    }
    void remove_circular()
    {
        if (l > r)
        {
            int *tmp = new int[array_capacity];
            int idx = 0;
            for (int i = 1; i < array_capacity; i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            for (int i = 0; i <= r; i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            swap(tmp, a);
            l = 0;
            r = array_capacity - 1;
            delete[] tmp;
        }
    }
    void increase_size()
    {
        int *tmp = new int[array_capacity * 2];
        for (int i = 0; i < array_capacity; i++)
        {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        array_capacity = array_capacity * 2;
        delete[] tmp;
    }
    void Enqueue(int value)
    {
        if (sz == array_capacity)
        {
            increase_size();
        }
        r++;
        if (r == array_capacity)
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
        if (l == array_capacity)
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