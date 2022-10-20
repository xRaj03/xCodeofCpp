#include <iostream>

using namespace std;

int main()
{

    int A[] = {1, 2, 3, 4, 5};
    for (int x : A) // The auto keyword is used when the variable data type is complicated ,,
    {
        cout << x << endl;
    }

    return 0;
}