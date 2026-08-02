#include <iostream>
#include <string>
#include <vector>
#include <chrono>

#include "commands/cli.h"
#include "commands/math.h"

int main(int argc, char* argv[]) {

	if (argc < 2) {
		print_help();
		return 1;
	}

	std::string command = argv[1];

	if (command == "-h" || command == "--help") {
		print_help();
		return 0;
	}

	if (command == "-v" || command == "--version") {
		print_version();
		return 0;
	}

	
    try
    {
        if (command == "factorial")
        {
            if (argc != 3){
                throw std::invalid_argument("Usage: cli factorial <number>");
			}

            long long n = std::stoll(argv[2]);

            auto start = std::chrono::high_resolution_clock::now();
            long long result = factorial(n);
            auto end = std::chrono::high_resolution_clock::now();

            std::cout << result << '\n';

            auto duration =
                std::chrono::duration_cast<std::chrono::microseconds>(end - start);

            std::cout << "Time: " << duration.count() << " us\n";
        }
        else if (command == "add")
        {
            if (argc != 4){
                throw std::invalid_argument("Usage: cli add <a> <b>");
			}

            std::cout << add(std::stod(argv[2]), std::stod(argv[3])) << '\n';
        }
        else if (command == "subtract")
        {
            if (argc != 4){
                throw std::invalid_argument("Usage: cli subtract <a> <b>");
			}


            std::cout << subtract(std::stod(argv[2]), std::stod(argv[3])) << '\n';
        }
        else if (command == "multiply")
        {
            if (argc != 4){
                throw std::invalid_argument("Usage: cli multiply <a> <b>");
			}

            std::cout << multiply(std::stod(argv[2]), std::stod(argv[3])) << '\n';
        }
        else if (command == "divide")
        {
            if (argc != 4){
                throw std::invalid_argument("Usage: cli divide <a> <b>");
			}

            std::cout << divide(std::stod(argv[2]), std::stod(argv[3])) << '\n';
        }
        else if (command == "power")
        {
            if (argc != 4){
                throw std::invalid_argument("Usage: cli power <base> <exponent>");
			}

            std::cout << power(std::stod(argv[2]), std::stod(argv[3])) << '\n';
        }
        else if (command == "fibonacci")
        {
            if (argc != 3){
                throw std::invalid_argument("Usage: cli fibonacci <number>");
			}

            std::cout << fibonacci(std::stoll(argv[2])) << '\n';
        }
        else if (command == "gcd")
        {
            if (argc != 4){
                throw std::invalid_argument("Usage: cli gcd <a> <b>");
			}

            std::cout << gcd(std::stoll(argv[2]), std::stoll(argv[3])) << '\n';
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