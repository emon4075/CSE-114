#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S1;
    getline(cin, S1);
    cout << "The String is: " << S1 << endl;
    cout << "String Length: " << S1.length() << endl;
    cout << "String Size: " << S1.size() << endl;
    cout << S1.find("Hello") << endl;
    if (S1.find("Hello") == 0)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}