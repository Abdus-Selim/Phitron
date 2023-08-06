#include <iostream>
#include <vector>
using namespace std;

string clrs(int N)
{
    vector<char> clrs(N, 'W'); 

    for (int i = 1; i <= N; ++i)
    {
        for (int j = i; j <= N; j += i)
        {
            clrs[j - 1] = (clrs[j - 1] == 'W') ? 'B' : 'W';
        }
    }

    return string(clrs.begin(), clrs.end());
}

int main()
{
    int N;
    cin >> N;

    string result = clrs(N);

    cout << result << endl;

    return 0;
}
