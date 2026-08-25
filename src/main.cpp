#include <iostream>
#include <string>
#include <vector>
#include <chrono>

#include "commands/cli.h"
#include "commands/math.h"

int main(int argc, char* argv[]) {

	if (argc < 2)
	{
		print_help();
		return 1;
	}

	std::string command = argv[1];

	if (command == "-h" || command == "--help")
	{
		print_help();
		return 0;
	}

	if (command == "-v" || command == "--version")
	{
		print_version();
		return 0;
	}

	
    try
    {
        if (command == "factorial")
        {
            if (argc != 3)
            {
                throw std::invalid_argument("Usage: cli factorial <number>");
			}

            long long num = std::stoll(argv[2]);
            long long result = factorial(num);

            std::cout << result << '\n';
        }
        else if (command == "add")
        {
            if (argc != 4)
            {
                throw std::invalid_argument("Usage: cli add <a> <b>");
			}

            double a = std::stod(argv[2]);
            double b = std::stod(argv[3]);

            std::cout << add(a, b) << '\n';
        }
        else if (command == "subtract")
        {
            if (argc != 4)
            {
                throw std::invalid_argument("Usage: cli subtract <a> <b>");
			}

            double a = std::stod(argv[2]);
            double b = std::stod(argv[3]);

            std::cout << subtract(a, b) << '\n';
        }
        else if (command == "multiply")
        {
            if (argc != 4)
            {
                throw std::invalid_argument("Usage: cli multiply <a> <b>");
			}

            double a = std::stod(argv[2]);
            double b = std::stod(argv[3]);

            std::cout << multiply(a, b) << '\n';
        }
        else if (command == "divide")
        {
            if (argc != 4)
            {
                throw std::invalid_argument("Usage: cli divide <a> <b>");
			}

            double a = std::stod(argv[2]);
            double b = std::stod(argv[3]);

            std::cout << divide(a, b) << '\n';
        }
        else if (command == "power")
        {
            if (argc != 4)
            {
                throw std::invalid_argument("Usage: cli power <base> <exponent>");
			}

            double base = std::stod(argv[2]);
            double exponent = std::stod(argv[3]);

            std::cout << power(base, exponent) << '\n';
        }
        else if (command == "fibonacci")
        {
            if (argc != 3)
            {
                throw std::invalid_argument("Usage: cli fibonacci <number>");
			}

            long long num = std::stoll(argv[2]);

            std::cout << fibonacci(num) << '\n';
        }
        else if (command == "gcd")
        {
            if (argc != 4)
            {
                throw std::invalid_argument("Usage: cli gcd <a> <b>");
			}

            long long a = std::stoll(argv[2]);
            long long b = std::stoll(argv[3]);

            std::cout << gcd(a, b) << '\n';
        }
        else
        {
            print_help();
            return 1;
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }


}