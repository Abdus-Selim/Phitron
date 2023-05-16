#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
};

class linkedList
{
    node *head;

public:
    linkedList()
    {
        head = NULL;
    }
    node *createNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void insertAtHead(int value)
    {
        node *a = createNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << endl;
    }

    int SearchDistinctValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }
    void SearchAllValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << value << " is found at index of " << index << endl;
            }
            a = a->nxt;
            index++;
        }
    }
};

int main()
{
    linkedList L;

    L.insertAtHead(5);
    L.Traverse();
    L.insertAtHead(90);
    L.Traverse();
    L.insertAtHead(50);
    L.Traverse();
    L.insertAtHead(5);

    L.Traverse();

    L.SearchDistinctValue(67);

    L.SearchAllValue(5);

    return 0;
}