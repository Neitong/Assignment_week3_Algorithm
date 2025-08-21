#include <iostream>
#include <string>

using namespace std;

class Hero{

    private:
        // Define all the attributes here...
        // [ your code ]
        
        
    public:
        // Define the constructor and methods here ...
        Hero(string name, int health, int armor, int power, string weapon)
        //: name(name), health(health), armor(armor), power(power), weapon(weapon){}
        {
            // assign each attributes' value from constructor param here...
            // [ your code ]
            
        }

        void setName(string name) { this->name = name; }
        string getName() { return this->name; }
    
        void info(){
            // process display hero info here...
            // [ your code ]
            
        }

        void strike(Hero& enemy){
            // process the strike logic here...
            // you can add the narative text as well (optional)
            // [ your code ]

        }

        // getter methods
        int getHealth() const {
            // this won't error when you create the health attribute
            return health;
        }

        int getArmor() const {
            // this won't error when you create the armor attribute
            return armor;
        }

        bool isAlive() const { return health > 0; }
};