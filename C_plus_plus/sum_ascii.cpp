#include <bits/stdc++.h>

using namespace std;

int main()
{
    int length = 0, sum = 0;
    char arr[100];

    fgets(arr, sizeof(arr), stdin);
    length = strlen(arr);

    for (int i = 0; arr[i] != '\n'; i++)
    {
        cout << "the ascii value of " << i << "th index is " << (int)arr[i] << endl;
        sum = sum + (int(arr[i]));
    }

    cout << "The sum of the ascii value of your word is " << sum << endl;

    return 0;
}
