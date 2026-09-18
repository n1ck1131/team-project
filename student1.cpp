#include "student1.h"

// Факториал n! (n <= 20)
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Двойной факториал n!! (n <= 20)
long long doubleFactorial(int n) {
    long long result = 1;
    for (int i = n; i > 0; i -= 2) {
        result *= i;
    }
    return result;
}
