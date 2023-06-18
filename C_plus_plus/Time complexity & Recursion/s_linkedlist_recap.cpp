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
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }

    node *CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        return newnode;
    }

    void insertathead(int data)
    {
        node *newnode = CreateNewNode(data);
        newnode->nxt = head;
        head = newnode;
    }
    void InsertAnyIndex(int index, int data)
    {
        if (index == 0)
        {
            insertathead(data);
            return;
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
        };

        if (a == NULL)
        {
            cout << "Can not insert!" << endl;
            return;
        }
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
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
};

int main()
{
    LinkedList l;
    l.insertathead(60);
    l.insertathead(70);
    l.insertathead(40);
    l.insertathead(20);

    l.Traverse();
    l.InsertAnyIndex(1, 8);
    l.InsertAnyIndex(3, 55);
    l.Traverse();

    return 0;
}