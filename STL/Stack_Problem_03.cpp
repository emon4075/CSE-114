#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S1, S2;
    cin >> S1 >> S2;
    stack<char> ST1;
    stack<char> ST2;
    for (char C : S1)
    {
        if (C == '#')
        {
            continue;
        }
        else
        {
            ST1.push(C);
        }
    }
    for (char C : S2)
    {
        if (C == '#')
        {
            continue;
        }
        else
        {
            ST2.push(C);
        }
    }
    if (ST1 == ST2)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}