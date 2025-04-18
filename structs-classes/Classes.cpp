//Aiden Kimball a539t439
#include <iostream>
#include <string>
using namespace std;

bool debug = true;

class Human {
protected:
    string Name;
    int Health;
    int Damage;

public:
    Human(string name, int health = 10, int baseDamage = 4) {
        Name = name;
        Health = health;
        Damage = baseDamage;
    }

    Human() {
        Name = "name";
        Health = 1;
        Damage = 1;
    }

    void SayHello() {
        cout << "Hello, my name is " << Name << "!" << endl;
    }

    virtual void SetHealth(int byAmount) {
        if (debug) {
            //cout << "at top of SetHealth(byAmount), health = " << Health << ", byAmount = " << byAmount << endl;
        }
        if (Health < 0)
        {
            Health = 0;
        }
        if (Health > 100) Health = 100;
        Health += byAmount;
        
    }

    void SetName(string name) {
        Name = name;
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
    string GetName()
    {
        return Name;
    }
};

class Barbarian : public Human {
    //class inherits all things from human
    //protection allows for variables to be accessed by children variable
public:
    Barbarian(string name, int health = 10, int baseDamage = 4) {
        SetName(name);
        SetHealth(health);
        SetDamage(baseDamage);
    }
    void Yell() {
        cout << "Barbarian yell\n";
    }
    void doubleSwing(Human& target) {
        cout << "barbarian swings both axes at " << target.GetName() << "!\n";
        int tempDamage = GetDamage() * 2;
        target.SetHealth(-tempDamage);
    }
};

class ShopKeeper : public Human {
private:
    string shopName;
        int gold = 10;
public:
    ShopKeeper(string name, int health = 10, int baseDamage = 4) {
        SetName(name);
        SetHealth(health);
        SetDamage(baseDamage);
    }
    void SetHealth(int byAmount) override
    {
        Health += byAmount;

        if (Health <= 0)
        {
            DropGold();
        }
    }
    void DropGold() {
        cout << GetName() <<" dropped " << GetGold() << " gold." << endl;
    }
    void SetGold(int money) {
        gold = money;
    }
    int GetGold() {
        return gold;
    }
    void SetShopName(string shop) {
        shopName = shop;
    }
    string GetShopName() {
        return shopName;
    }
};


int main() {
    Barbarian barb("barb");
    Human aiden("Aiden");
    aiden.SayHello();
    cout << "Health: " << aiden.GetHealth() << endl;
    cout << "Damage: " << aiden.GetDamage() << endl;

    
    aiden.SetHealth(15);
    cout << "setting health \n";
    aiden.SetDamage(6);
    cout << "setting damage \n";

    cout << "Updated Health: " << aiden.GetHealth() << endl;
    cout << "Updated Damage: " << aiden.GetDamage() << endl;

    cout << "\n\n barbarian attacks aiden\n\n";

    barb.doubleSwing(aiden);
    cout << aiden.GetHealth() << endl;

    cout << "\n\n Shopkeeper stuff\n";

    ShopKeeper keeper("carl");
    keeper.SetShopName("carls Stuff");
    cout << keeper.GetShopName() << endl;
    cout << keeper.GetHealth() << endl;
    cout << "setting health to 0 now to check\n";
    keeper.SetHealth(-20);
    //cout << keeper.GetHealth() << endl;
    //keeper.DropGold();

    return 0;
}
