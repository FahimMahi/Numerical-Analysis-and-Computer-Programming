// Suppose, you are the owner of the construction company "Court of Owls". You want to track the weekly payable bill for your ongoing projects. You have total 4 ongoing projects. You hire construction laborers on weekly basis and distribute them to 4 projects. Each labor works at the rate of 130tk/hr. If the weekly payable bills of all the workers exceed 1,50,000 tk, then only 75% of the total payable amounts are given to the workers. The rest will be paid the next week. Now, create a code using C++ language that will show the total amount of bill payable by you on a certain week. Assume each labor works for 8hr/day and 5 days/week.

#include <iostream>
using namespace std;

int main() {
    const int hourlyRate = 130;
    const int dailyHours = 8;
    const int workingDays = 5;
    const int thresholdAmount = 150000;
    const float payableRatio = 0.75;

    int totalLaborers;
    cout << "Enter the total number of laborers working across all projects: ";
    cin >> totalLaborers;

    int totalWeeklyHours = totalLaborers * dailyHours * workingDays;
    int totalWeeklyBill = totalWeeklyHours * hourlyRate;

    cout << "Total weekly bill without any conditions: " << totalWeeklyBill << " TK." << endl;

    if (totalWeeklyBill > thresholdAmount) {
        int payableAmount = totalWeeklyBill * payableRatio;
        int deferredAmount = totalWeeklyBill - payableAmount;
        cout << "Total payable amount this week (75%): " << payableAmount << " TK." << endl;
        cout << "Deferred amount to be paid next week: " << deferredAmount << " TK." << endl;
    } else {
        cout << "Total payable amount this week: " << totalWeeklyBill << " TK." << endl;
    }

    return 0;
}
