#include <iostream>

int main() {

    // bool isDisabled = false;
    //
    // if (isDisabled == true) {
    //     std::cout << "Can sit at disabled table" << std::endl;
    // }

    // double number;
    // std::cout << "Please enter a number: ";
    // std::cin >> number;
    //
    // if (number > 5.1) {
    //     number = number * 2;
    // }
    //
    // std::cout << number << std::endl;

    int number;
    std::cout
        << "Enter a condition 1 for tacos, 2 for burritos, 3 for pork cutlet.."
        << std::endl;
    std::cin >> number;

    if (number == 1) {
        std::cout << "Tacos" << std::endl;
    } else if (number == 2) {
        std::cout << "Burrito" << std::endl;
    } else if (number == 3) {
        std::cout << "Pork Cutlet" << std::endl;
    } else {
        std::cout << "You didn't choose an option!" << std::endl;
    }

    if (number == 1) {
        std::cout << "Tacos" << std::endl;
    }
    if (number == 2) {
        std::cout << "Burrito" << std::endl;
    } 
    if (number == 3) {
        std::cout << "Pork Cutlet" << std::endl;
    }

    std::cout << "Goodbye!" << std::endl;
}
