#include <bits/stdc++.h>
using namespace std;

int digitSum(int num)
{
    int sum = 0;
    if (num <= 9)
    {
        return num;
    }
    sum = sum + (num % 10);
    int smaller_num = num / 10;
    return sum + digitSum(smaller_num);
}

int main()
{
    int num;
    cin >> num;
    cout << digitSum(num) << endl;

    return 0;
}