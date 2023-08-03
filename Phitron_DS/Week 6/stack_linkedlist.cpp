#include <bits/stdc++.h>
using namespace std;

/*Stack using LinkedList*/

class node
{
public:
    int data;
    node *nxt;
    node *prv;
};
class DublyLinkedList
{
public:
    node *head;
    int sz;
    DublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    /*Creates a new node with the given data*/
    node *CreateNewNode(int data) // O(1)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    /*Inserts a newnode with the given data into the head*/
    void InsertAtHead(int data) // O(1)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
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
    /*Insert a vlaue at any index*/
    void InsertAtAnyIndex(int index, int data) // O(n)
    {
        if (index > sz)
        {
            return;
        }
        if (index == 0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    /*Delete the head*/
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        node *a = head;
        node *b = head ->nxt;
        delete a;
        if(b!= NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz --;
    }
    /*Delete any index*/
    void DeleteAIndex(int index) // O(n)
    {
        if (index >= sz)
        {
            cout << "Index does not exist!" << endl;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if (b != NULL)
        {
            b->nxt = c;
        }
        if (c != NULL)
        {
            c->prv = b;
        }
        delete a;
        if (index == 0)
        {
            head = c;
        }
        sz--;
    }
    /*Reverse the dubly linkedlist*/
    void Reverse() // O(n)
    {
        if (head == NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != sz - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        // Now last index is in a
        node *b = head;
        while (b != NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }
    int getsize()
    {
        return sz;
    }
};
/*Stack using doubly linkedlist*/
class Stack
{
    public:
    DublyLinkedList dl;

    Stack()
    {
    }
    int top()
    {
        if (dl.getsize() == 0)
        {
            cout << "Stack is Empty!"<<endl;
            return -1;
        }
        return dl.head->data;
    }

    void push(int val)
    {
        dl.InsertAtHead(val);
    }

    void pop()
    {
        if(dl.getsize() == 0)
        {
            cout << "Stack is Empty!";
            return;
        }
        dl.DeleteAtHead();
    }
};

int main()
{
    Stack st;
    st.push(5);
    cout << st.top() << endl;
    st.push(3);
    cout << st.top() << endl;
    st.push(9);
    cout << st.top() << endl
         << endl;

    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    return 0;
}