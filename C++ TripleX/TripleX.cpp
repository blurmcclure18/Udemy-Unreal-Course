#include <iostream>

int main()
{
    //This prints out the first message the player sees
    std::cout << "You need to Kill the Arcane Wizard in his tower...\n";
    std::cout << "Crack these Mysterious Runic Puzzles to get to him... \n";

    //Declare 3 number code
    const int a = 4;
    const int b = 3;
    const int c = 2;
 
    const int sum = a + b + c;
    const int product = a * b * c;

    //Print sum and product to the terminal
    std::cout << sum << "\n";
    std::cout << product << "\n";

    return 0;
}