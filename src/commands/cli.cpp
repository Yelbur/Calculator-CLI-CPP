#include "cli.h"
#include <iostream>

void print_help()
{
    std::cout << "Calculator CLI v1.0.0\n\n";

    std::cout << "Usage:\n";
    std::cout << "  cli <command> [arguments]\n\n";

    std::cout << "Commands:\n";
    std::cout << "  factorial <n>         Calculate the factorial of n\n";
    std::cout << "  add <a> <b>           Add two numbers\n";
    std::cout << "  subtract <a> <b>      Subtract b from a\n";
    std::cout << "  multiply <a> <b>      Multiply two numbers\n";
    std::cout << "  divide <a> <b>        Divide a by b\n";
    std::cout << "  power <base> <exp>    Raise base to the power of exp\n";
    std::cout << "  fibonacci <n>         Calculate the nth Fibonacci number\n";
    std::cout << "  gcd <a> <b>           Calculate the greatest common divisor\n\n";

    std::cout << "Options:\n";
    std::cout << "  -h, --help            Show this help message\n";
    std::cout << "  -v, --version         Show the program version\n";
}

void print_version()
{
    std::cout << "Calculator CLI version 1.0.0\n";
}