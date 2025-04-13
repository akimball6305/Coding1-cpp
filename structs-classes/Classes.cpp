//Aiden Kimball a539t439
#include <iostream>
#include <string>
using namespace std;

class Human {
private:
    string Name;
    int Health;
    int Damage;

public:
    Human(string name, int health = 10, int baseDamage = 4) {
        Name = name;
        Health = health;
        Damage = baseDamage;
    }

    void SayHello() {
        cout << "Hello, my name is " << Name << "!" << endl;
    }

    void SetHealth(int byAmount) {
        Health = byAmount;
    }

    void SetDamage(int givenDamage) {
        Damage = givenDamage;
    }

    int GetHealth() {
        return Health;
    }

    int GetDamage() {
        return Damage;
    }
};

int main() {
    Human human("Aiden");
    human.SayHello();
    cout << "Health: " << human.GetHealth() << endl;
    cout << "Damage: " << human.GetDamage() << endl;

    
    human.SetHealth(15);
    cout << "setting health \n";
    human.SetDamage(6);
    cout << "setting damage \n";

    cout << "Updated Health: " << human.GetHealth() << endl;
    cout << "Updated Damage: " << human.GetDamage() << endl;

    return 0;
}
