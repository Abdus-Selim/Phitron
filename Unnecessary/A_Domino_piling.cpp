#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, numOfDomino;
    cin >> row >> col;
    if ((row >=1 && col > 1) || (row > 1 && col>=1))
    {
        numOfDomino = (row * col) / 2;
        cout << numOfDomino << endl;
    }
    else if(row==1 && col == 1)
    {
        cout<<"0"<<endl;
    }

    return 0;
}