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
    node *allnode[6];

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
    void print_tree()
    {
        for (int i = 0; i < 6; i++)
        {
            int p = -1;
            int l = -1;
            int r = -1;
            if (allnode[i]->parent != NULL)
            {
                p = allnode[i]->parent->id;
            }
            if (allnode[i]->Left != NULL)
            {
                l = allnode[i]->Left->id;
            }
            if (allnode[i]->Right != NULL)
            {
                r = allnode[i]->Right->id;
            }
            cout << "Node " << i << " : Parent = " << p << " , Left child = " << l << " , Right child = " << r << endl;
        }
    }
};

int main()
{
    binary_tree bt;
    bt.build_binay_tree();
    bt.print_tree();

    return 0;
}
