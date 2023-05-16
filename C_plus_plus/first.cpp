#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    // int x;
    // float y;
    // cin>>x >> y; 

    // cout << x << " " <<y<<"\n";
    // string arr;
    // cin>> arr;
    // cout<< arr;

    // string s1, s2;
    // s1 = "My name is Md. Abdus Selim.";
    // s2 = " I live in Bangladesh";

    // string s = s1+s2;
    // cout << s << "\n";

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // string s;
    // // cin >> s;

    // // cout<< s << "\n";

    // getline(cin, s);
    // cout<< s << "\n";

    // ofstream file1, file2;
    // file1.open("firts.txt");
    // file1<<"Hello there, this the first file" << "\n";

    // file2.open("2nd.txt");
    // file2<<"Hello there, this is the 2nd file" << "\n";

    ifstream file3;
    file3.open("input.txt");
    int x; 
    double y, z;

    file3>> x >> y >> z;

    cout << x << " " << y << " " << z<<"\n";

    file3.close();
    return 0; 
}