//Suppose, a shop gives you 10% discount for purchases above 10000 tk. Write a code that will display the total amount of bill payable by the customer by counting the number of products purchased. Given, unit price of the products is 75 tk.

#include<iostream>
using namespace std;

int main() {
    int numberOfProducts;
    const int unitPrice = 75;
    cout << "Enter the number of products purchased: ";
    cin >> numberOfProducts;

    int totalCost = numberOfProducts * unitPrice;

    if (totalCost > 10000) {
        double discount = totalCost * 0.1;
        totalCost -= discount;
    }

    cout << "The total amount payable by the customer is: " << totalCost << " Tk." << endl;

    return 0;
}
