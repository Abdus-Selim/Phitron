#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *nxt;
};

class LinkedList
{
    node *head;

public:
    LinkedList()

    {
        head = NULL;
    }

    // Create new node with data = value and nxt = NULL
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    // insert a vlaue at head
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        // if head is not NULL
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
        cout<<endl;
    }
    int SearchDistinctValue(int value)
    {
        node* a = head;
        int index=0;
        while(a != NULL)
        {
            if(a->data == value)
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
        node* a = head;
        int index = 0;
        while(a != NULL)
        {
            if (a->data == value)
            {
                cout<<value<<" is found at index of "<<index<<endl;
            }
            a = a->nxt;
            index++;
        }
    }
};

int main()
{
    LinkedList L;
    L.Traverse();

    L.InsertAtHead(30);
    L.Traverse();

    L.InsertAtHead(50);
    L.Traverse();

    L.InsertAtHead(30);
    L.Traverse();

    L.InsertAtHead(10);

    L.Traverse();

    cout<<"10 is found at "<<L.SearchDistinctValue(10)<<endl;
    cout<<"30 is found at "<<L.SearchDistinctValue(30)<<endl;
    L.SearchAllValue(50);
    L.SearchAllValue(30);

    return 0;
}