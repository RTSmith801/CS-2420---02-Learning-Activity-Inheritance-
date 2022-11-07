/**
 * @file: Inheritance.cpp
 * @assignment_name:  02 Learning Activity Inheritance
 * @author: Rick Smith (rickysmith@mail.weber.edu)
 * @date: 11/06/2022 - started : 11/06/2022 - last update
 * @brief: Using inheritance to create a simple battle program
 *
 */

/***********************************************
 WizardBattle is an example of using inheritance

 Character class is overriden by a Wizard class
 to add the element of magic
 ***********************************************/

#include <iostream>
#include <ctime>
#include "Wizard.h"

using namespace std;

int main() {
    srand(time(nullptr));
    Character *gandolf = new Wizard("gandolf", 100, 9);
    Wizard *saron = new Wizard("Saron", 100, 7);

    do{
        saron->startBattle();
        gandolf->startBattle();

        saron->battle(gandolf);
        gandolf->battle(saron);
        std::cout << *gandolf << std::endl;
        std::cout << *saron << std::endl;

    }while(saron->getHp() > 0 && gandolf->getHp() > 0);

    if(saron->getHp() > gandolf->getHp()){
        std::cout << "Middle Earth is doomed" << std::endl;
    }
    else{
        std::cout << "Middle Earth has a chance" << std::endl;
    }

    return 0;
}
