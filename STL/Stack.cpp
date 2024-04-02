#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout << "Enter The Number of Elements In Your Stack: " << endl;
    cin >> N;
    stack<int> ST;
    while (N--)
    {
        int X;
        cin >> X;
        ST.push(X);
    }
    cout << "Empty or Not: " << ST.empty() << endl;
    cout << "Size of The Stack: " << ST.size() << endl;
    while (!ST.empty())
    {
        cout << ST.top() << endl;
        ST.pop();
    }
    return 0;
}