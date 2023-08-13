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

    void Delete(int value)
    {
        node *Parent = root;
        node *prv = NULL;

        while (Parent != NULL)
        {
            if (value > Parent->value)
            {
                prv = Parent;
                Parent = Parent->Right;
            }
            else if (value < Parent->value)
            {
                prv = Parent;
                Parent = Parent->Left;
            }
            else
                break;
        }
        if (Parent == NULL)
        {
            cout << "Value is not present the BST!" << endl;
            return;
        }
        // case 1: both child is NULL
        if (Parent->Left == NULL && Parent->Right == NULL)
        {
            if (prv->Left != NULL && prv->Left->value == Parent->value)
            {
                prv->Left = NULL;
            }
            else
            {
                prv->Right = NULL;
            }
            delete Parent;
            return;
        }
        // Case 2: node has only one child;
        if (Parent->Left == NULL && Parent->Right != NULL)
        {
            if (prv->Left != NULL && prv->Left->value == Parent->value)
            {
                prv->Left = Parent->Left;
            }
            else
            {
                prv->Right = Parent->Right;
            }
            delete Parent;
            return;
        }
        if (Parent->Left != NULL && Parent->Right == NULL)
        {
            if (prv->Left != NULL && prv->Left->value == Parent->value)
            {
                prv->Left = Parent->Left;
            }
            else
            {
                prv->Right = Parent->Right;
            }
            delete Parent;
            return;
        }

        //Case 3: node has two child
        node *tmp = Parent->Right;
        while(tmp->Left != NULL)
        {
            tmp = tmp->Left;
        }
        int saved = tmp->value;
        Delete(saved);
        Parent->value = saved;
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

    
    b.Delete(6);
    b.BFS();
    // int num;
    // while (cin >> num)
    // {
    //     if (b.Search(num))
    //     {
    //         cout << num << " is existing in the BST!" << endl;
    //     }
    //     else
    //     {
    //         cout << num << " doesn't exist in the BST!" << endl;
    //     }
    // }
    // cout<<b.Search(6)<<endl;
    // cout<<b.Search(10)<<endl;

    return 0;
}