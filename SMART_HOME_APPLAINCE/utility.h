#ifndef UTILITY_H
#define UTILITY_H

void saveState(bool lightState, bool fanState);
void loadState(bool& lightState, bool& fanState);
int simulateTemperature();
double calculateEnergyUsage(double hours, double powerRate);

#endif
