#include <bits/stdc++.h>
using namespace std;
vector<int> evenGenerator(vector<int> a)
{

    for (int i = 0; i <= 5; i++)
    {
        int k = rand() % 100;
        if (k % 2 == 0)
            a.push_back(k);
    }

    return a;
}
int main()
{

    vector<int> a;
    vector<int> b = evenGenerator(a);
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";

    return 0;
}
