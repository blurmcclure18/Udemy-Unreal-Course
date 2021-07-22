#include <iostream>

int Difficulty()
{
    return 0;
}

void PrintIntro(int Difficulty)
{
    //This prints out the first message the player sees
    std::cout << "\n\nYou need to capture the Arcane Wizard at the top of his tower...\n";
    std::cout << "Unlock the doors in his tower to get to him... \n";
    std::cout << "You are on Level " << Difficulty << "... Unlock the door to advance to the next level.\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntro(Difficulty);

    //Declare 3 number code
    const int RuneA = 4;
    const int RuneB = 3;
    const int RuneC = 2;
    
    const int RuneSum = RuneA + RuneB + RuneC;
    const int RuneProduct = RuneA * RuneB * RuneC;

    //Print sum and product to the terminal
    std::cout << "+ There are 3 numbers on the lock. \n";
    std::cout << "+ The numbers add-up to: " << RuneSum << "\n";
    std::cout << "+ The numbers multiply to: " << RuneProduct << "\n";

    //Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the players guess is correct
    if (GuessSum == RuneSum && GuessProduct == RuneProduct)
    {
        std::cout << "\nThe door opened! \n";
        return true;
    }

    else    
    {
        std::cout << "\nThe door remains locked! \n";
        return false;
    }

}

int main()
{
    int LevelDifficulty = 1;

    while (true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;            
        }
        
    }
    return 0;
}