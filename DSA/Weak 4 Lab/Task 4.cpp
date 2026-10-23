#include <iostream>
#include <string>

#include "TextEditor.h"

using namespace std;

int main()
{
    TextEditor editor(100);

    int choice;

    string text;

    int count;


    do
    {
        cout << "\n--- TEXT EDITOR MENU ---\n";

        cout << "1. Type text\n";
        cout << "2. Delete characters\n";
        cout << "3. Undo\n";
        cout << "4. Redo\n";
        cout << "5. Show current text\n";
        cout << "6. Exit\n";


        cout << "Enter choice: ";
        cin >> choice;


        switch (choice)
        {
        case 1:

            cout << "Enter text: ";

            cin.ignore();

            getline(cin, text);

            editor.typeText(text);

            break;


        case 2:

            cout << "Enter number of characters to delete: ";

            cin >> count;

            editor.deleteCharacters(count);

            break;


        case 3:

            if (editor.undo())
            {
                cout << "Undo successful."
                     << endl;
            }
            else
            {
                cout << "Nothing to undo."
                     << endl;
            }

            break;


        case 4:

            if (editor.redo())
            {
                cout << "Redo successful."
                     << endl;
            }
            else
            {
                cout << "Nothing to redo."
                     << endl;
            }

            break;


        case 5:

            editor.display();

            break;


        case 6:

            cout << "Program ended."
                 << endl;

            break;


        default:

            cout << "Invalid choice."
                 << endl;
        }

    }
    while (choice != 6);


    return 0;
}