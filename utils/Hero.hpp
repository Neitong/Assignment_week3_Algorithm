#include <iostream>
#include <string>

using namespace std;

class Hero{

    private:
        // Define all the attributes here...
        // [ your code ]
        string name;
        string weapon;
        int health;
        int armor;
        int power;
        
    public:
        // Define the constructor and methods here ...
        Hero(string name, int health, int armor, int power, string weapon)
        //: name(name), health(health), armor(armor), power(power), weapon(weapon){}
        {
            // assign each attributes' value from constructor param here...
            // [ your code ]
            this->name = name;
            this->weapon = weapon;
            this->health = health;
            this->armor = armor;
            this->power = power;
        }

        void setName(string name) { this->name = name; }
        string getName() { return this->name; }
    
        void info(){
            // process display hero info here...
            // [ your code ]
            cout << "Hero Name: " << name << ", Weapon: " << weapon << ", Health: " << health << ", Armor: " << armor << ", Power: " << power << endl;

            cout << endl;
        }

        void strike(Hero& enemy){
            // process the strike logic here...
            // you can add the narative text as well (optional)
            // [ your code ]
            // int demage = power + (rand() % 10);
            // int enemyDefence = enemy.getArmor();
            // int actualDemage = max(demage, enemyDefence);

            // enemy.health -= actualDemage;
            // cout << name << " Attack " << enemy.name << " with " << weapon << "for " << actualDemage << " demage! " << endl;

            // if (enemyDefence <= 0)
            // {
            //     cout << enemy.name << " has been slayed!!!" << endl;
            // }

            //std::cout << name << " attacks " << enemy.name << " with " << weapon << "!" << endl;

            int damage = power;

            if (enemy.armor >= damage) {
                enemy.armor -= damage;
                damage = 0;
            } else {
                damage -= enemy.armor;
                enemy.armor = 0;
            }

            enemy.health -= damage;
            if (enemy.health < 0) enemy.health = 0;

            // std::cout << enemy.name << "'s remaining health: " << enemy.health
            //         << ", remaining armor: " << enemy.armor << endl;

            std::cout << name << " attacks " << enemy.name << endl;
            std::cout << enemy.name << "'s armor should drop to " << enemy.armor << " and health to " << enemy.health << endl;
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