#include "utility.h"
#include <fstream>
#include <cstdlib>

void saveState(bool lightState, bool fanState) {
    std::ofstream file("data/state.txt");
    file << lightState << "\n" << fanState;
    file.close();
}

void loadState(bool& lightState, bool& fanState) {
    std::ifstream file("data/state.txt");
    if (file) {
        file >> lightState >> fanState;
    }
    file.close();
}

int simulateTemperature() {
    static int currentTemp = 25;
    currentTemp += (rand() % 5 - 2); // Random fluctuation (-2 to +2)
    return currentTemp;
}

double calculateEnergyUsage(double hours, double powerRate) {
    return hours * powerRate;
}
