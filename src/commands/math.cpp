#include "math.h"
#include <stdexcept>

long long factorial(long long n)
{
    if (n < 0) {
        throw std::invalid_argument("Negative numbers are not allowed.");
    }
    long long result = 1;
    for (long long i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

long long add(long long a, long long b)
{
    return a + b;
}

long long subtract(long long a, long long b)
{
    return a - b;
}

long long multiply(long long a, long long b)
{
    return a * b;
}

long long divide(long long a, long long b)
{
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

long long power(long long base, long long exponent)
{
    if (base == 0 && exponent == 0) {
        throw std::invalid_argument("0 raised to the power of 0 is undefined.");
    }
    if (exponent < 0) {

    }
    long long result = 1;
    for (long long i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

long long fibonacci(long long n)
{
    if (n < 0) {
        throw std::invalid_argument("Negative numbers are not allowed.");
    }
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long a = 0, b = 1, c;
    for (long long i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

long long gcd(long long a, long long b)
{
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}