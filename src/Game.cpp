/*
    Created by jesse on 03/03/2021.
    Project by Glitchtech Games
*/

#include "Game.hpp"
#include "Difficulty.hpp"

/*
    Password Variables:
    - CodeA / CodeB / CodeC

    Password Addons:
    - CodeAdded = Adds Codes onto each other
    - CodeMultiplied = Multiplies Codes with each other

    Guess Storage:
    - GuessAdded = Adds guesses onto each other
    - CodeMultiplied = Multiplies Guesses with each other
 */

Game::Game() {
    // Message to welcome the player
    std::cout << "-------------------------------------------\n";
    std::cout << "      !!! UNKNOWN USER DETECTED !!!        \n";
    std::cout << "-------------------------------------------\n";
    std::cout << " You are not authorized to use this system \n";
    std::cout << "  Please disconnect from this system ASAP  \n";
    std::cout << "-------------------------------------------";
    std::cout << std::endl;
}

void Game::run() {
    // Constant variables
    const int CodeA = 4;
    const int CodeB = 2;
    const int CodeC = 5;
    
    // Constant sums
    const int CodeAdded = CodeA + CodeB + CodeC;
    const int CodeMultiplied = CodeA * CodeB * CodeC;

    // Messages about the password
    std::cout << "  * This system's password is insecure! *" << std::endl;
    std::cout << "-------------------------------------------\n";
    std::cout << "+ The 3 number password add up to: " << CodeAdded << std::endl;
    std::cout << "+ The 3 numbers multiplied are: " << CodeMultiplied << std::endl;
    std::cout << "+ Password-format is: * * *\n";
    std::cout << "-------------------------------------------\n";

    // Handler for player input
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    // std::cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << std::endl;

    // Store player guesses
    int GuessAdded = GuessA + GuessB + GuessC;
    int GuessMultiplied = GuessA * GuessB * GuessC;

    // Print input result
    if (GuessAdded == CodeAdded && GuessMultiplied == CodeMultiplied) {
        std::cout << "System access granted!\n";
    }
    else {
        std::cout << "System access denied!\n";
    }

    // Initialize Difficulty & run it
    auto Dif = new Difficulty;
    Dif->run();
}

