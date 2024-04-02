#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    int Num = 6;
    Q.push(Num);
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }

    return 0;
}