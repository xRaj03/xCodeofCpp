#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter first operand: ";
    cin >> num1;

    cout << "Enter second operand: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        if (num2 == 0)
        {
            cout << "Error: Cannot divide by zero";
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        break;

    default:
        cout << "Error: Invalid operator";
        break;
    }

    cout << endl;

    // Wait for user to press a key before closing the window
    cin.clear();
    cin.ignore();
    cout << "Press any key to exit...";
    cin.get();

    return 0;
}
