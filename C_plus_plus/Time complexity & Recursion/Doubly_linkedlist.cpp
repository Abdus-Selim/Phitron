#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prev;
};

class DuoublyLinkedList
{
public:
    node *head;
    DuoublyLinkedList()
    {
        head = NULL;
    }
    node *CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prev = NULL;
        return newnode;
    }
    void insertathead(int data)
    {
        node *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        newnode->nxt = head;
        head->prev = newnode;
        head = newnode;
    }

    void insertanyindex(int index, int data)
    {
        if (index == 0)
        {
            insertathead(data);
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            if (a == NULL)
            {
                break;
            }
            a = a->nxt;
            cur_index++;
        }
        if (a == NULL)
        {
            cout << "Can not insert!";
            return;
        }
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        node *b = a->nxt;
        if (b != NULL)
        {
            b->prev = newnode;
        }
        a->nxt = newnode;
        newnode->prev = a;
    }
    void traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << endl;
    }
};

int main()
{
    DuoublyLinkedList dl;
    dl.insertathead(50);
    dl.insertathead(60);
    dl.insertathead(30);

    dl.traverse();

    dl.insertanyindex(0, 300);
    dl.insertanyindex(2, 900);

    dl.traverse();

    return 0;
}