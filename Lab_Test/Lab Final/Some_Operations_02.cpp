#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S1;
    getline(cin, S1);
    cout << "The String is: " << S1 << endl;
    cout << S1.capacity() << " " << S1.size() << endl;
    char C = 'Z';
    S1.push_back(C);
    cout << S1 << endl;
    S1.pop_back();
    cout << S1 << endl;
    S1.clear();
    cout << S1 << endl;
    cout << S1.length() << " " << S1.size() << endl;
    cout << "Saad";
    return 0;
}