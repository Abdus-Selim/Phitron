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

    void build_binay_tree()
    {
        node *allnode[6];
        for (int i = 0; i < 6; i++)
        {
            allnode[i] = CreateNewNode(i);
        }
        allnode[0]->Left = allnode[1];
        allnode[0]->Right = allnode[2];

        allnode[1]->Left = allnode[5];
        allnode[1]->parent = allnode[0];

        allnode[2]->Left = allnode[3];
        allnode[2]->Right = allnode[4];
        allnode[2]->parent = allnode[0];

        allnode[5]->parent = allnode[1];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];

        root = allnode[0];
    }

    void DFS(node *a)
    {
        if(a == NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        DFS(a->Left);
        DFS(a->Right);
    }
};

int main()
{
    binary_tree bt;
    bt.build_binay_tree();
    bt.DFS(bt.root);

    return 0;
}
