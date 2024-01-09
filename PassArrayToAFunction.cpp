#include <iostream>

double gettotal(double prices[], int length);

int main() {
    double prices[] = {70.2, 710.2, 789.96};
    int length = sizeof(prices) / sizeof(double);
    double total = gettotal(prices, length);
    std::cout << "$"<<total;
    return 0;
}

double gettotal(double prices[], int length) {
    double total = 0;
    for (int i = 0; i < length; i++) {
        total = total + prices[i];
    }
    return total; 
}
