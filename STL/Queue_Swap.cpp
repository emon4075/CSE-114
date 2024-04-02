#include <bits/stdc++.h>
using namespace std;
void printQ(queue<int> Q)
{
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> Q1;
    queue<int> Q2;
    int N;
    cout << "Enter The Number of Elements That You Want to Push: ";
    cin >> N;
    cout << "Elements For Q1: ";
    for (int i = 0; i < N; i++)
    {
        int X;
        cin >> X;
        Q1.push(X);
    }
    cout << "Elements For Q2: ";
    for (int i = 0; i < N; i++)
    {
        int X;
        cin >> X;
        Q2.push(X);
    }
    cout << "Q1 Before Swap: ";
    printQ(Q1);
    cout << "Q2 Before Swap: ";
    printQ(Q2);
    Q1.swap(Q2);
    cout << "Q1 After Swap: ";
    printQ(Q1);
    cout << "Q2 After Swap: ";
    printQ(Q2);
    return 0;
}