#include <iostream>
#include "utils/Hero.hpp" // this is custom include header file

int main(){
    // implement your code to test the functional of Hero class here ...
    // [This will score by automate testing too.]
    Hero knight("Richard", 50, 50, 25, "Sword");
    Hero enemy("Rascal", 40, 40, 10, "Bow and Arrow");


    knight.info();
    enemy.info();

    // Loop until one hero dies
    while (knight.isAlive() && enemy.isAlive()) {
        knight.strike(enemy);  // Knight attacks enemy
        if (!enemy.isAlive()) {
            std::cout << enemy.getName() << " has been defeated!" << endl;
            break;
        }

        enemy.strike(knight);  // Enemy attacks knight
        if (!knight.isAlive()) {
            std::cout << knight.getName() << " has been defeated!" << endl;
            break;
        }

        std::cout << endl;
    }

    std::cout << "Battle is over!" << endl;
    return 0;

}