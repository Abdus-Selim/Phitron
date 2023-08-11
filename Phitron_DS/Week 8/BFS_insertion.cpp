#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    node *Left;
    node *Right;
    node *parent;
};

class binary_tree
{
public:
    node *root;

    binary_tree()
    {
        root = NULL;
    }

    node *CreateNewNode(int id)
    {
        node *newnonde = new node;
        newnonde->id = id;
        newnonde->Left = NULL;
        newnonde->Right = NULL;
        newnonde->parent = NULL;
        return newnonde;
    }
    void Insertion(int id)
    {
        node *newnode = CreateNewNode(id);
        if (root == NULL)
        {
            root = newnode;
            return;
        }
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            if (a->Left != NULL)
            {
                q.push(a->Left);
            }
            else
            {
                a->Left = newnode;
                newnode->parent = a;
                return;
            }
            if (a->Right != NULL)
            {
                q.push(a->Right);
            }
            else
            {
                a->Right = newnode;
                newnode->parent = a;
                return;
            }
        }
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
                l = a->Left->id;
                q.push(a->Left);
            }
            if (a->Right != NULL)
            {
                r = a->Right->id;
                q.push(a->Right);
            }
            if (a->parent != NULL)
            {
                p = a->parent->id;
            }
            cout << "Node id = " << a->id << " Left Child = " << l << " Right child = " << r << " Parent = " << p << endl;
        }
    }
};

int main()
{
    binary_tree bt;
    bt.Insertion(0);
    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);

    bt.BFS();

    return 0;
}
