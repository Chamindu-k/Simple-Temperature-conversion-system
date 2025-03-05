#include <iostream>



int main() {

    double temp;
    char unit;

    std::cout << "********** Temperature conversion *************** \n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to : ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the temparature in Celsius: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temparature is: " << temp << "F\n";

    }
    else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temparature in Fahrenheit: ";
        std::cin >> temp;
        temp = ( temp-32) / 1.8;
        std::cout << "Temparature is: " << temp << "c\n";
    }
    else {
        std::cout << "invalid input please enter valid input";
    }

    std::cout << "****************************************************";

    return 0;
}