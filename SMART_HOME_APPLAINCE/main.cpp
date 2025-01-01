#include <iostream>
#include "devices.h"
#include "utility.h"

using namespace std;

void displayMenu() {
    cout << "====== Smart Home Automation System ======\n";
    cout << "1. Turn Light On/Off\n";
    cout << "2. Turn Fan On/Off\n";
    cout << "3. Display Current Temperature\n";
    cout << "4. View Energy Usage\n";
    cout << "5. Save and Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    bool lightState = false, fanState = false;
    int choice;
    loadState(lightState, fanState);

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                lightState = toggleDevice("Light", lightState);
                break;
            case 2:
                fanState = toggleDevice("Fan", fanState);
                break;
            case 3:
                cout << "Current Temperature: " << simulateTemperature() << "°C\n";
                break;
            case 4:
                cout << "Energy Usage:\n";
                cout << "Light: " << calculateEnergyUsage(2, 0.1) << " kWh\n";
                cout << "Fan: " << calculateEnergyUsage(5, 0.3) << " kWh\n";
                break;
            case 5:
                saveState(lightState, fanState);
                cout << "State saved. Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
