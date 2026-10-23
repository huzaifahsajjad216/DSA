#include <iostream>
#include "myStackMin.h"

using namespace std;

int main()
{
    int capacity;

    cout << "Enter maximum stack size: ";
    cin >> capacity;


    myStackMin<int> stack(capacity);

    int choice;

    int value;


    do
    {
        cout << "\n--- MINIMUM STACK MENU ---\n";

        cout << "1. Push element\n";
        cout << "2. Pop element\n";
        cout << "3. Show top element\n";
        cout << "4. Check if stack is empty\n";
        cout << "5. Check if stack is full\n";
        cout << "6. Display stack elements\n";
        cout << "7. Show minimum element\n";
        cout << "8. Exit\n";


        cout << "Enter choice: ";
        cin >> choice;


        switch (choice)
        {
        case 1:

            cout << "Enter value: ";
            cin >> value;

            stack.push(value);

            break;


        case 2:

            if (!stack.isEmpty())
            {
                cout << "Popped: "
                     << stack.pop()
                     << endl;
            }
            else
            {
                cout << "Stack is empty." << endl;
            }

            break;


        case 3:

            if (!stack.isEmpty())
            {
                cout << "Top: "
                     << stack.top()
                     << endl;
            }
            else
            {
                cout << "Stack is empty." << endl;
            }

            break;


        case 4:

            if (stack.isEmpty())
                cout << "Stack is empty." << endl;
            else
                cout << "Stack is not empty." << endl;

            break;


        case 5:

            if (stack.isFull())
                cout << "Stack is full." << endl;
            else
                cout << "Stack is not full." << endl;

            break;


        case 6:

            stack.display();

            break;


        case 7:

            if (!stack.isEmpty())
            {
                cout << "Minimum: "
                     << stack.getMin()
                     << endl;
            }
            else
            {
                cout << "Stack is empty." << endl;
            }

            break;


        case 8:

            cout << "Program ended." << endl;

            break;


        default:

            cout << "Invalid choice." << endl;
        }

    }
    while (choice != 8);


    return 0;
}