#include <iostream>
#include <string>
#include "myCarStack.h"

using namespace std;

int main()
{
    myCarStack parking;

    int choice;

    string carNumber;

    do
    {
        cout << "\n--- PARKING LOT MENU ---\n";

        cout << "1. Park a new car\n";
        cout << "2. Remove a car by number\n";
        cout << "3. Search for a car\n";
        cout << "4. View parked cars\n";
        cout << "5. Total cars parked\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;


        switch (choice)
        {
        case 1:

            cout << "Enter car number: ";
            cin >> carNumber;

            if (parking.parkCar(carNumber))
                cout << "Car parked successfully."
                     << endl;
            else
                cout << "Parking lot is full."
                     << endl;

            break;


        case 2:

            cout << "Enter car number to remove: ";
            cin >> carNumber;

            if (parking.removeCar(carNumber))
                cout << "Car removed successfully."
                     << endl;
            else
                cout << "Car not found."
                     << endl;

            break;


        case 3:

            cout << "Enter car number to search: ";
            cin >> carNumber;

            if (parking.searchCar(carNumber))
                cout << "Car is present."
                     << endl;
            else
                cout << "Car is not present."
                     << endl;

            break;


        case 4:

            parking.display();

            break;


        case 5:

            cout << "Total cars parked: "
                 << parking.totalCars()
                 << endl;

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