// Implement of a Binary Search Tree

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node *Left;
    node *Right;
};

class BST
{
public:
    node *root;

    BST()
    {
        root = NULL;
    }

    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->value = value;
        newnode->Left = NULL;
        newnode->Right = NULL;
        return newnode;
    }

    void BFS()
    {
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if (a->Left != NULL)
            {
                l = a->Left->value;
                q.push(a->Left);
            }
            if (a->Right != NULL)
            {
                r = a->Right->value;
                q.push(a->Right);
            }
            cout << "Node value = " << a->value << " Left Child = " << l << " Right child = " << r << " Parent = " << p << endl;
        }
    }

    void Insert(int value)
    {
        node *newnode = CreateNewNode(value);
        if (root == NULL)
        {
            root = newnode;
            return;
        }
        node *Parent = root;
        node *prv = NULL;
        while (Parent != NULL)
        {
            if (newnode->value > Parent->value)
            {
                prv = Parent;
                Parent = Parent->Right;
            }
            else
            {
                prv = Parent;
                Parent = Parent->Left;
            }
        }
        if (newnode->value > prv->value)
        {
            prv->Right = newnode;
        }
        else
        {
            prv->Left = newnode;
        }
    }
};

int main()
{
    BST b;
    b.Insert(6);
    b.Insert(4);
    b.Insert(3);
    b.Insert(5);
    b.Insert(7);
    b.Insert(8);
    b.BFS();

    return 0;
}