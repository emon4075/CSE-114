#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Ch;
    getline(cin, Ch);
    cout << Ch << endl;
    stringstream SS(Ch);
    string Word;
    while (SS >> Word)
    {
        cout << Word << endl;
    }
    cout << Ch << endl;
    return 0;
}