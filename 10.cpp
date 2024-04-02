// Suppose, a construction labor works at the rate of 200tk/hr. If the daily payable bills of all the workers exceed 20000 tk, then only 80% of the total payable amounts are given to the workers. The rest will be paid the next day. Now, write a code that will show the total amount of bill payable by the owner on a certain day. Assume each labor works for 8hr/day (Hint: Take the number of workers and the bill payable from the previous day as variables).

#include <iostream>
using namespace std;

int main() {
    int numberOfWorkers;
    float billPayableFromPreviousDay;

    cout << "Enter the number of workers: ";
    cin >> numberOfWorkers;
    cout << "Enter the bill payable from the previous day: ";
    cin >> billPayableFromPreviousDay;

    float dailyRatePerWorker = 200.0;
    int workingHoursPerDay = 8;
    float totalDailyBill = numberOfWorkers * dailyRatePerWorker * workingHoursPerDay;

    // If the daily payable bills of all workers exceed 20000 tk,
    // then only 80% of the total payable amounts are given to the workers.
    if (totalDailyBill > 20000) {
        totalDailyBill = (totalDailyBill * 0.8) + (totalDailyBill * 0.2);
    }

    // Add the bill payable from the previous day
    totalDailyBill += billPayableFromPreviousDay;

    cout << "The total amount of bill payable by the owner on a certain day is: " << totalDailyBill << " tk" << endl;

    return 0;
}
