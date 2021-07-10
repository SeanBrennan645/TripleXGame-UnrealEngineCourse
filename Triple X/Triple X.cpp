#include <iostream>
#include <ctime>

bool PlayGame(int x)
{
    //Initialise values
    int CodeC = rand() % x + x;
    int CodeA = rand() % x + x;
    int CodeB = rand() % x + x;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    if (x == 1)
    {
        std::cout << "You are currently at level " << x << "...\n\n";
    }
    else
    {
        std::cout << "You are now on level " << x << "...\n\n";
    }
    std::cout << "There are 3 numbers in the code\n";
    std::cout << "The numbers add up to " << CodeSum << "\n";
    std::cout << "The product of the numbers is " << CodeProduct << "\n";

    //User inputs
    int GuessA, GuessB, GuessC;

    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Display results
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nWell done hoe you is right!\n\n";
        return true;
    }
    else
    {
        std::cout << "\nNah you wrong\n\n";
        return false;
    }
}

void PrintIntroduction()
{
    // Random bit of ascii
    std::cout << "_______oBBBBB8o______oBBBBBBB\n";
    std::cout << "_____o8BBBBBBBBBBB__BBBBBBBBB8________o88o,\n";
    std::cout << "___o8BBBBBB** 8BBBB__BBBBBBBBBB_____oBBBBBBBo,\n";
    std::cout << "__oBBBBBBB* ___*** ___BBBBBBBBBB_____BBBBBBBBBBo,\n";
    std::cout << "_8BBBBBBBBBBooooo___* BBBBBBB8______* BB* _8BBBBBBo,\n";
    std::cout << "_8BBBBBBBBBBBBBBBB8ooBBBBBBB8___________8BBBBBBB8,\n";
    std::cout << "__* BBBBBBBBBBBBBBBBBBBBBBBBBB8_o88BB88BBBBBBBBBBBB,\n";
    std::cout << "____* BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB8,\n";
    std::cout << "______** 8BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB*,\n";
    std::cout << "___________* BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB8*,\n";
    std::cout << "____________* BBBBBBBBBBBBBBBBBBBBBBBB8888**,\n";
    std::cout << "_____________BBBBBBBBBBBBBBBBBBBBBBB*,\n";
    std::cout << "_____________* BBBBBBBBBBBBBBBBBBBBB*,\n";
    std::cout << "______________* BBBBBBBBBBBBBBBBBB8,\n";
    std::cout << "_______________* BBBBBBBBBBBBBBBB*,\n";
    std::cout << "________________8BBBBBBBBBBBBBBB8,\n";
    std::cout << "_________________8BBBBBBBBBBBBBBBo,\n";
    std::cout << "__________________BBBBBBBBBBBBBBB8,\n";
    std::cout << "__________________BBBBBBBBBBBBBBBB,\n";
    std::cout << "__________________8BBBBBBBBBBBBBBB8,\n";
    std::cout << "__________________* BBBBBBBBBBBBBBBB,\n";
    std::cout << "__________________8BBBBBBBBBBBBBBBB8,\n";
    std::cout << "_________________oBBBBBBBBBBBBBBBBBB,\n";
    std::cout << "________________oBBBBBBBBBBBBBBBBBBB,\n";
    std::cout << "________________BBBBBBBBBBBBBBBBBBBB,\n";
    std::cout << "_______________8BBBBBBBBBBBBBBBBBBB8,\n";
    std::cout << "______________oBBBBBBBBB88BBBBBBBBB8,\n";
    std::cout << "______________8BBBBBBBBB * 8BBBBBBBBB*,\n";
    std::cout << "______________BBBBBBBBB* _BBBBBBBBB8,\n";
    std::cout << "______________BBBBBBBB8_oBBBBBBBBB*,\n";
    std::cout << "______________8BBBBBBB__oBBBBBBBB*,\n";
    std::cout << "______________BBBBBBB* __8BBBBBBB*,\n";
    std::cout << "_____________8BBBBBB* ___BBBBBBB*,\n";
    std::cout << "____________8BBBBBB8___oBBBBBB8,\n";
    std::cout << "___________8BBBBBB8____8BBBBBB*,\n";
    std::cout << "__________oBBBBBB8____BBBBBBB8,\n";
    std::cout << "__________BBBBBBB8___BBBBBBBB*,\n";
    std::cout << "_________oBBBBBBB8___BBBBBBBB,\n";
    std::cout << "_________8BBBBBB8____BBBBBBB*,\n";
    std::cout << "_________BBBBBB* _____8BBBBB*,\n";
    std::cout << "________oBBBB8_______BBBBB*,\n";
    std::cout << "________oBBB8________BBBB*,\n";
    std::cout << "______8BBBB* _______* BBBBBBBB8o,\n";
    std::cout << "______BBBBB* ____________ * 88BBBo\n\n\n";

    // Intro
    std::cout << "WELCOME TO GAINZ HACKZ!!!\n\n";
    std::cout << "Ay bruh hack into this bad boi.\n";
    std::cout << "Enter the correct code to continue...\n\n";
}

int main()
{
    srand(time(NULL)); //random sequence based on the time of day

    PrintIntroduction();
    const int MaxDifficulty = 5;
    int LevelDifficulty = 1;
    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete;
        bLevelComplete = PlayGame(LevelDifficulty);
        if (bLevelComplete)
        {
            LevelDifficulty++;
        }
    }

    std::cout << "\n\nCongrats you have successfully hacked your gains!!!\n";

    return 0;
}