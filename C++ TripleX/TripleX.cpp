#include <iostream>

int main()
{
    //This prints out the first message the player sees
    std::cout << "\n" << "You need to Kill the Arcane Wizard in his tower...\n";
    std::cout << "Crack these Mysterious Runic Puzzles to get to him... \n"<< "\n";

    //Declare 3 number code
    const int RuneA = 4;
    const int RuneB = 3;
    const int RuneC = 2;
    
    const int RuneSum = RuneA + RuneB + RuneC;
    const int RuneProduct = RuneA * RuneB * RuneC;

    //Print sum and product to the terminal
    std::cout << "+ There are 3 numbers in the code. \n";
    std::cout << "+ The numbers add-up to: " << RuneSum << "\n";
    std::cout << "+ The numbers multiply to: " << RuneProduct << "\n";

    int GuessA, GuessB, GuessC, GuessSum, GuessProduct;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;
    
    return 0;
}