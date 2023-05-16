// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, x, y, z, counter =0;

//     cin>>n;

//     for(int i = 0; i<n; i++)
//     {
//         cin>>x>>y>>z;
//         if(x+y+z >=2)
//         counter++;
//     }
//     cout<<counter<<endl;

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0, i;
    cin >> n;

    string line;

    for (i = 0; i < n; i++)
    {
        cin >> line;
        int sum = 0;
        for (char c : line)
        {
            sum += (c - '0'); // convert char to int
        }
        if (sum >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

