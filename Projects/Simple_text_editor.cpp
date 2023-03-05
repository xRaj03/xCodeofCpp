#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string filename, line, newLine;
    char choice;

    cout << "Welcome to Simple Text Editor!\n";

    while (true)
    {
        cout << "\nPlease select an option:\n";
        cout << "1. Create a new file\n";
        cout << "2. Open an existing file\n";
        cout << "3. Exit\n";
        cin >> choice;

        if (choice == '1')
        {
            cout << "Enter a name for your new file: ";
            cin >> filename;
            ofstream myfile(filename);
            cout << "Enter text (type 'exit' to finish):\n";
            while (getline(cin, newLine))
            {
                if (newLine == "exit")
                {
                    break;
                }
                myfile << newLine << endl;
            }
            myfile.close();
        }

        else if (choice == '2')
        {
            cout << "Enter the name of the file you want to open: ";
            cin >> filename;
            ifstream myfile(filename);
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << endl;
                }
                myfile.close();
            }
            else
            {
                cout << "Error: Unable to open file\n";
            }
        }

        else if (choice == '3')
        {
            break;
        }

        else
        {
            cout << "Error: Invalid option\n";
        }
    }

    return 0;
}
