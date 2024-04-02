// Suppose, you are the owner of a construction company. You want to create a code for the laborer hiring purpose of a recent multistoried apartment construction project. Given, the carrying rate of different components is as follows: Stone chips: 1 laborer/10000kg; Sand: 1 laborer/20000kg; Cement: 1 laborer/200bag; Now, create a code using C++ that will show the number of laborers needed on a particular day for the variable amount of stone chips, sand and cement carrying purpose. Also show the amount of bill payable each day for the hired laborers (laborer hiring cost is 800tk/day/laborer).
#include <bits/stdc++.h>
using namespace std;

int main() {
    double stoneChipsKg, sandKg;
    int cementBags;

    int laborersForStone, laborersForSand, laborersForCement;

    cout << "Enter the amount of stone chips (in kg): ";
    cin >> stoneChipsKg;

    cout << "Enter the amount of sand (in kg): ";
    cin >> sandKg;

    cout << "Enter the amount of cement (in bags): ";
    cin >> cementBags;

    // Calculate the number of laborers required
    laborersForStone = ceil(stoneChipsKg / 10000);
    laborersForSand = ceil(sandKg / 20000);
    laborersForCement = ceil(static_cast<double>(cementBags) / 200);

    // Total number of laborers needed
    int totalLaborers = laborersForStone + laborersForSand + laborersForCement;

    // Calculate the total bill
    int totalBill = totalLaborers * 800; // 800tk per laborer

    cout << "Total laborers needed: " << totalLaborers << endl;
    cout << "Total bill payable: " << totalBill << "tk" << endl;

    return 0;
}
