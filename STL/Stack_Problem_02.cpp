#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    stack<char> ST;
    stack<char> CPY;
    for (char C : S)
    {
        if (ST.empty() || ST.top() != C)
        {
            ST.push(C);
        }
        else if (ST.top() == C)
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
        cout <<CPY.top();
        CPY.pop();
    }

    return 0;
}