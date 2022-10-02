#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        int y = k / x;
        if (y == n)
        {
            cout << n << endl;
        }
        else if (y < 0)
        {
            cout << "0" << endl;
        }
        else if (y < n)
        {
            cout << y << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}
// Fuck question Logic use your own logic and recive the given answer for the given question