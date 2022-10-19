#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        int res = 0;
        map<char, int> y, z;
        for (char i : s)
        {
            y[i]++;
        }
        for (char i : t)
        {
            z[i]++;
        }
        for (char i = 'a'; i <= 'z'; ++i)
        {
            res = max(res, min(y[i], z[i]));
        }

        cout << res << endl;
    }
    return 0;
}
