#include <iostream>
using namespace std;

int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    if (x == a || x == b || x == c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
