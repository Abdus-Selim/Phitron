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
    int sz;

public:
    LinkedList()

    {
        head = NULL;
        sz = 0;
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
        sz++;
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
    int getSize()
    {
        // O(n)
        return sz;

        // o(size of list) = o(n)
        //  int sz = 0;
        //  node *a = head;
        //  while(a!= NULL)
        //  {
        //      sz++;
        //      a = a->nxt;
        //  }
        //  return sz;
    }
    void insertAtAnyIndex(int index, int value)
    {
        if (index < 0 || index > sz)
        {
            return;
        }
        if (index == 0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
    // delete at head
    void deleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->nxt;
        delete a;
    }

    // Delete the value of any Index
    void deleteAnyIndex(int index)
    {
        if (index < 0 || index > sz - 1)
        {
            return;
        }
        if (index == 0)
        {
            deleteAtHead();
            return;
        }
        sz--;
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }
    // Insert new value after a specific value
    void insertAfterValue(int prev_value, int new_value)
    {
        node *a = head;
        while (a != NULL)
        {
            if (a->data == prev_value)
            {
                break;
            }
            a = a->nxt;
        }
        if (a == NULL)
        {
            cout << prev_value << " does not exist in this Linked-List." << endl;
            return;
        }
        sz++;
        node *b = CreateNewNode(new_value);
        b->nxt = a->nxt;
        a->nxt = b;
    }
    /*Reverse print using Recursion*/
    void reversePrint(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        reversePrint(a->nxt);
        cout << a->data << " ";
    }
    void reversePrint2()
    {
        reversePrint(head);
        cout << endl;
    }
};

int main()
{
    LinkedList L;

    L.InsertAtHead(90);

    L.InsertAtHead(50);

    L.InsertAtHead(30);

    L.InsertAtHead(600);

    L.Traverse();
    L.reversePrint2();

    L.Traverse();
    L.insertAtAnyIndex(1, 60);
    L.Traverse();
    L.insertAtAnyIndex(4, 700);
    L.Traverse();

    cout << L.getSize() << endl;

    L.deleteAtHead();
    L.Traverse();
    cout << L.getSize() << endl;

    L.deleteAnyIndex(2);
    L.Traverse();
    cout << L.getSize() << endl;

    L.insertAfterValue(700, 98);
    L.Traverse();
    cout << L.getSize() << endl;

    L.reversePrint2();
    return 0;
}