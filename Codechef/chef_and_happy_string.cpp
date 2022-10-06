#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string z;
        cin >> z;
        int c = 0;
        bool ans = false;
        for (int i = 0; i < z.size(); i++)
        {
            if (z[i] == 'a' || z[i] == 'e' || z[i] == 'i' || z[i] == 'o' || z[i] == 'u')
            {
                c++;
                if (c > 2)
                {
                    cout << "Happy" << endl;
                    break;
                }
            }
            else
            {
                c = 0;
            }
        }
        if (c < 2)
        {
            cout << "Sad";
            cout << endl;
        }
    }
    return 0;
}
