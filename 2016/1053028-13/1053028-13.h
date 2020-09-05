#include <cmath>
int count_profit(int year){
    double total;
    total = (50000 * pow(1.36, year)) - (10000 * pow(1.02, year));
    return total;
}
