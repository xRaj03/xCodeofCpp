/* #include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;
        if (x >= 67 && x <= 45000)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
 */

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
                if (z[i + 1] == 'a' || z[i + 1] == 'e' || z[i + 1] == 'i' || z[i + 1] == 'o' || z[i + 1] == 'u')
                {
                    if (z[i + 2] == 'a' || z[i + 2] == 'e' || z[i + 2] == 'i' || z[i + 2] == 'o' || z[i + 2] == 'u'){

/*                         cout<<"Happy";
 */                    }
                }
                cout << "Happy";
            }
            
            else
            {
                cout << "Sad" << endl;
            }
        }
    }
    return 0;
}
