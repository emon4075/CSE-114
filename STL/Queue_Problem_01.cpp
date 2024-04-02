#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, Word;
    queue<string> Q;
    stack<string> ST;
    cout << "Enter a String: ";
    getline(cin, S);
    stringstream SS(S);
    while (SS >> Word)
    {
        Q.push(Word);
    }
    while (!Q.empty())
    {
        ST.push(Q.front());
        Q.pop();
    }
    cout << "Reversed String: ";
    while (!ST.empty())
    {
        cout << ST.top() << " ";
        ST.pop();
    }
    cout << endl;

    return 0;
}