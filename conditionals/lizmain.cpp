#include <iostream>
int main(){
    /*
        Get user input through an integer named burger.
        Prompt the user with the following line: please enter 1 for a burger
        If the user enters 1, then print out: you get a burger!
        ELSE, print out: No burger for you.

        At the end of the program, print: Goodbye
    */
   int number;
    std::cout
        << "Enter a condition 1 for burger, 2 for a special item"
        << std::endl;
    std::cin >> number;
    if (number == 1) {
        std::cout << "burger" << std::endl;
    } else if (number == 2) {
        std::cout << "HAHA YOU GET NO BURGER" << std::endl;
    }
     else {
        std::cout << "why you no choose :(" << std::endl;
    }
}