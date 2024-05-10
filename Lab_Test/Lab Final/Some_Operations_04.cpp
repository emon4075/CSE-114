#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S1;
    // getline(cin, S1);
    // cout << "The String is: " << S1 << endl;
    cin >> S1;
    string S2;
    // cout << S2 << endl;
    // strcpy(S2, S1);
    cin >> S2;
    S1 = S1 + S2;
    cout << S1 << endl;
    return 0;
}