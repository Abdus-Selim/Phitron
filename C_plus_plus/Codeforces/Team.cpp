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

/* The code snippet is reading `n` lines of input and for each line, it calculates the sum of the
digits in the line. If the sum is greater than or equal to 2, it increments the `count` variable.
Finally, it prints the value of `count`. */

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

