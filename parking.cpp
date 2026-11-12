#include <iostream>
using namespace std;

int main() {
    const int totalSlots = 5;
    int parkedCars = 0;
    int choice = 0;

    do {
        cout << "\n===== PARKING MANAGEMENT SYSTEM =====\n";
        cout << "1. Park Vehicle\n";
        cout << "2. Remove Vehicle\n";
        cout << "3. Show Available Slots\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                if (parkedCars < totalSlots) {
                    ++parkedCars;
                    cout << "Vehicle parked successfully!\n";
                } else {
                    cout << "Parking is full!\n";
                }
                break;

            case 2:
                if (parkedCars > 0) {
                    --parkedCars;
                    cout << "Vehicle removed successfully!\n";
                } else {
                    cout << "Parking is empty!\n";
                }
                break;

            case 3:
                cout << "Total parking slots: " << totalSlots << '\n';
                cout << "Occupied slots: " << parkedCars << '\n';
                cout << "Available slots: "
                     << totalSlots - parkedCars << '\n';
                break;

            case 4:
                cout << "Thank you for using the Parking Management System!\n";
                break;

            default:
                cout << "Invalid choice. Please select 1 to 4.\n";
        }

    } while (choice != 4);

    return 0;
}
