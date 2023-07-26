#include <bits/stdc++.h>

using namespace std;

// List is built in and as like doublyl inkedlist

void print(list<int> l)
{
    // O(n)

    // list<int>::iterator a = l.begin();
    // or
    auto a = l.begin();
    while (a != l.end())
    {
        cout << *a << " ";
        a++;
    }
    cout << endl
         << endl;
}

// O(n)
void Insert(list<int> &l, int index, int value)
{
    auto it = l.begin(); // O(1)
    advance(it, index);  // O(index)
    l.insert(it, value); // O(1)
}

// O(n)
void Delete(list<int> &l, int index)
{
    auto it = l.begin(); // O(1)
    advance(it, index);  // O(index)
    l.erase(it);         // O(1)
}

int main()
{
    list<int> l;
    // Push front O(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);

    print(l);

    // push back O(1)
    l.push_back(40);
    l.push_back(50);
    l.push_back(60);

    print(l);

    // pop back O (1)
    l.pop_back();
    l.pop_back();
    print(l);

    // pop fron O(1)
    l.pop_front();
    print(l);

    // insert at any position
    auto it = l.begin();
    advance(it, 1);
    l.insert(it, 100);
    print(l);

    Insert(l, 2, 500);
    print(l);

    Delete(l, 3);
    print(l);

    cout << l.size() << endl;

    return 0;
}