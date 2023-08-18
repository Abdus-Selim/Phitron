#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nodes = 4;                 // O(1)
    int Matrix[nodes][nodes] = {}; // O(n^2)

    // for(int i = 0; i<nodes; i++)
    // {
    //     for(int j =0; j<nodes;j++)
    //     {
    //         Matrix[i][j] = 0;
    //     }
    // }
    Matrix[0][1] = 1; // O(1)
    Matrix[1][0] = 1;

    Matrix[1][2] = 1;
    Matrix[2][1] = 1;

    Matrix[2][3] = 1;
    Matrix[3][2] = 1;

    Matrix[3][1] = 1;
    Matrix[1][3] = 1;

    // O(n^2)

    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}