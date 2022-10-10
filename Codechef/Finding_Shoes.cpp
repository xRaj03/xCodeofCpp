#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int r = n;

        if (m > n)
        {
            m = n;
        }
        int count = n - m;

        cout << r + count << endl;
    }
    return 0;
}

