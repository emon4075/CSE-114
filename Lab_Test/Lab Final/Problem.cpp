#include <bits/stdc++.h>
using namespace std;
int main()
{
    string X, Y;
    cout << "Enter The First Binary String: ";
    cin >> X;
    cout << "Enter The Second Binary String: ";
    cin >> Y;
    int F00 = 0, F11 = 0, F01 = 0, F10 = 0;
    for (int i = 0; i < X.size(); i++)
    {
        if ((X[i] == '0' && Y[i] == '0'))
        {
            F00++;
        }
        else if ((X[i] == '1' && Y[i] == '1'))
        {
            F11++;
        }
        else if (X[i] == '0' && Y[i] == '1')
        {
            F01++;
        }
        else
        {
            F10++;
        }
    }
    cout << (float)(F11 + F00) / (F11 + F00 + F10 + F01) << endl;
    return 0;
}