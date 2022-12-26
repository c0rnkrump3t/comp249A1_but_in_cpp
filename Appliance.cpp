//
// Created by maya_school on 2022-12-25.
//

#include <iostream>
#include <string>
#include "Appliance.h"
using namespace std;



long Appliance::snCounter = 99999;
int Appliance::counter = 0;
Appliance::Appliance() : type("Fridge"), brand("LG"), price(4999.99)
{
    //default initialized constructor
    counter++;
    SiN = snCounter + counter;

}

Appliance::Appliance(string type, string brand, double price) {
    this->type = type;
    this->brand = brand;
    counter++;

    if (price < 1) {
        cout << "Price cannot be less than $1 ";

    }
    else {
        this->price = price;

    }


    SiN = snCounter + counter;
}
Appliance::~Appliance()
{
}
void Appliance::setType(string type)
{
    this->type = type;
}
string Appliance::getType()
{
    return this->type;
}
const string& Appliance::getBrand() const
{
    return this->brand;
}
void Appliance::setBrand(const string& brand)
{
    this->brand = brand;
}
double Appliance::getPrice() const
{
    return this->price;
}
void Appliance::setPrice(double price)
{
    this->price = price;
}
bool Appliance::operator==(const Appliance& rhs)
{
    if (this->brand == rhs.brand && this->type == rhs.type && this->price == rhs.price) {
        cout << "the appliances are the same" << endl;
        return true;
    }
    else {
        cout << "the appliances are not the same" << endl;

        return false;

    }
}

int Appliance::getCounter() {
    return this->counter;
}
ostream& operator<<(ostream& display, const Appliance& a) {
    return display << "The appliance info is: Type- " << a.type << " brand- " << a.brand
                   << " price- " << a.price << " serial nb- " << a.SiN << endl;
}
//To print total number of appliance objects
int findNumberOfCreatedAppliances() {
    cout << " The number of objects created is: " << endl;
    return  Appliance::counter;//since counter is a member of appliance
}

int menu_option()
{
    int option_nb;
    do {
        cout << "What do you want to do? " << endl;
        cout << "\t 1. Enter new appliances (password required) " << endl;
        cout << "\t 2. Change information of an appliance (password required) " << endl;
        cout << "\t 3. Display all appliances by a specific brand " << endl;
        cout << "\t 4. Display all appliances under a certain price. " << endl;
        cout << "\t 5. Quit" << endl;
        cout << "Please enter your choice >" << endl;
        cin >> option_nb;


    } while (option_nb < 1 || option_nb > 5);
    return option_nb;
}
