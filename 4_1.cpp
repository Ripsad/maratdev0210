#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a.find(b) != string::npos)
    {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}