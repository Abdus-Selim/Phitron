#include <bits/stdc++.h>

using namespace std;

class Test
{
private:
    int my_weight;
    int my_height;

public:
    void set_dimension(int a, int b)
    {
        my_weight = a;
        my_height = b;
    }
    int result()
    {
        int ans = 0;
        if (my_height == 0 || my_weight == 0)
            ans = 0;
        ans = my_weight * my_height;
        return ans;
    }
};

int main()
{
    Test t;
    t.set_dimension(5, 6);
    cout << "This is the result of multiplication : " << t.result() << endl;

    return 0;
}