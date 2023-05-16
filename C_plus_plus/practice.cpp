#include<bits/stdc++.h>
using namespace std;

class node
{
    int date;
    node *next;
};

class likedlist
{
node *head;

likedlist()
{
    head=NULL;
}

//create new node

node *createNewNode(int val)
{
    node *newnode = new node;
    newnode->data =val;
    newnode->next=NULL;
    return newnode;
}



};

int main(
    return 0;
)
