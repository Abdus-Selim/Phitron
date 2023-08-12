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
    bool Search(int value)
    {
        node *Parent = root;
        while (Parent != NULL)
        {
            if (value > Parent->value)
            {
                Parent = Parent->Right;
            }
            else if (value < Parent->value)
            {
                Parent = Parent->Left;
            }
            else
            {
                return true;
            }
        }
        return false;
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
    // b.BFS();
    int num;
    while (cin >> num)
    {
        if (b.Search(num))
        {
            cout << num << " is existing in the BST!" << endl;
        }
        else
        {
            cout << num << " doesn't exist in the BST!" << endl;
        }
    }
    // cout<<b.Search(6)<<endl;
    // cout<<b.Search(10)<<endl;

    return 0;
}