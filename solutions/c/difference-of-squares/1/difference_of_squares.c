#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int x) {
    return x * (x + 1) * (2 * x + 1) / 6;
}

unsigned int square_of_sum(unsigned int x) {
    unsigned int sum = x * (x + 1) / 2;
    return sum * sum;
}

unsigned int difference_of_squares(unsigned int x) {
    return square_of_sum(x) - sum_of_squares(x);
}
