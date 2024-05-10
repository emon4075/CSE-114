#include <bits/stdc++.h>
using namespace std;
int main()
{
    char S1[10];
    // getline(cin, S1);
    // cout << "The String is: " << S1 << endl;
    cin >> S1;
    char S2[10];
    // cin >> S2;
    // cout << S2 << endl;
    // strcpy(S2, S1);
    cin >> S2;
    cout << S2 << endl;
    strcat(S1, S2);
    cout << S1 << endl;
    return 0;
}