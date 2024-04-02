#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin, S);
    stringstream SS(S);
    string Word;
    stack<string> ST;
    while (SS >> Word)
    {
        ST.push(Word);
    }
    while (!ST.empty())
    {
        cout << ST.top() << " ";
        ST.pop();
    }
    return 0;
}