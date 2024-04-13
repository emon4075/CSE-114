#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    stack<char> ST;
    stack<char> CPY;
    queue<char> Q;
    for (char &C : S)
    {
        if (ST.empty() || C != ST.top())
        {
            ST.push(C);
        }
        else
        {
            ST.pop();
        }
    }
    while (!ST.empty())
    {
        CPY.push(ST.top());
        ST.pop();
    }
    while (!CPY.empty())
    {
        Q.push(CPY.top());
        CPY.pop();
    }
    while (!Q.empty())
    {
        cout << Q.front();
        Q.pop();
    }

    return 0;
}