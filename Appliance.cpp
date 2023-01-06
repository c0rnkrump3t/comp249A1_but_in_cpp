//
// Created by maya_school on 2022-12-25.
//

#include <iostream>
#include <string>
#include "Appliance.h"

using namespace std;


long Appliance::snCounter = 99999;
int Appliance::counter = 0;

Appliance::Appliance() : type("Fridge"), brand("LG"), price(4999.99) {
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

    } else {
        this->price = price;

    }


    SiN = snCounter + counter;
}

Appliance::~Appliance() {
}

void Appliance::setType(string type) {
    this->type = type;
}

string Appliance::getType() {
    return this->type;
}

const string &Appliance::getBrand() const {
    return this->brand;
}

void Appliance::setBrand(const string &brand) {
    this->brand = brand;
}

double Appliance::getPrice() const {
    return this->price;
}

void Appliance::setPrice(double price) {
    this->price = price;
}

bool Appliance::operator==(const Appliance &rhs) {
    if (this->brand == rhs.brand && this->type == rhs.type && this->price == rhs.price) {
        cout << "the appliances are the same" << endl;
        return true;
    } else {
        cout << "the appliances are not the same" << endl;

        return false;

    }
}

//bool Appliance::sameSIN(long sin){
//
//}

int Appliance::getCounter() {
    return this->counter;
}

ostream &operator<<(ostream &display, const Appliance &a) {
    return display << "The appliance info is: Type- " << a.type << " brand- " << a.brand
                   << " price- " << a.price << " serial nb- " << a.SiN << endl;
}

Appliance Appliance::input_appliance() {

    Appliance a;

    cout << "What is the brand? " << endl;
    cin >> brand;
    a.brand = brand;
    //  a.setBrand(brand);
    cout << "What is the type? " << endl;
    cin >> type;
    a.type = type;
    //  a.setType(type);
    cout << "What is the price? " << endl;
    cin >> price;
    //  a.setPrice(price);
    a.price = price;
    cout << " brand= " << brand << endl;
    cout << " type= " << type << endl;
    cout << " price= " << price << endl;
    return (a);
}

long Appliance::getSIN() const {
    return this->SiN;
}

void findCheaperThan(Appliance inventory[], int max_nb_appliances) {
    double cheaper_than;
    cout << "Please enter the price to search for cheaper appliances: "<< endl;
    cin >> cheaper_than;
    for (int i = 0; i < max_nb_appliances; ++i) {
        if (inventory[i].getPrice() < cheaper_than){
            cout << "Appliance Serial #" << inventory[i].getSIN() << endl;
            cout << "Brand: " << inventory[i].getBrand() << endl;
            cout << "Type: " << inventory[i].getType() << endl;
            cout << "Price: " << inventory[i].getPrice() << endl;
        }
    }
};

void findAppliancesBy(Appliance inventory[], int max_nb_appliances) {

    string brand_name;

    cout << "Please enter the brand name: " << endl;
    cin >> brand_name;
    for (int i = 0; i < max_nb_appliances; ++i) {
        if (brand_name == inventory[i].getBrand()) {
            cout << "Appliance Serial #" << inventory[i].getSIN() << endl;
            cout << "Brand: " << inventory[i].getBrand() << endl;
            cout << "Type: " << inventory[i].getType() << endl;
            cout << "Price: " << inventory[i].getPrice() << endl;
        }
    }

}


//To print total number of appliance objects
int findNumberOfCreatedAppliances() {
    int test = 0;
    cout << " The number of objects created is: " << endl;
    return Appliance::counter;//since counter is a member of appliance
}

int menu_option() {
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

void app_display(Appliance inventory[], int max_nb_appliances) {
    long sin;
    int choice;
    int exit = false;

    do {

        cout << "Please enter sin appliance you want to update: " << endl;
        cin >> sin;
        for (int i = 0; i < max_nb_appliances; ++i) {

            if (sin == inventory[i].getSIN()) {
                cout << "Appliance Serial #" << inventory[i].getSIN() << endl;
                cout << "Brand: " << inventory[i].getBrand() << endl;
                cout << "Type: " << inventory[i].getType() << endl;
                cout << "Price: " << inventory[i].getPrice() << endl;


                do {
                    cout << "What information would you like to change?\n"
                            "\t1.\t brand \n"
                            "\t2.\t type \n"
                            "\t3.\t price \n"
                            "\t4.\t Quit \n"
                            "Enter your choice>\n";

                    cin >> choice;
                    switch (choice) {
                        case 1: {
                            cout << "Please update the brand: " << endl;
                            string updated_brand;
                            cin >> updated_brand;
                            inventory[i].setBrand(updated_brand);
                            cout << "Updated brand: " << inventory[i].getBrand() << endl;

                            break;
                        }
                        case 2: {
                            cout << "Please update the type: " << endl;
                            string updated_type;
                            cin >> updated_type;
                            inventory[i].setType(updated_type);
                            cout << "Updated type: " << inventory[i].getType() << endl;
                            break;
                        }
                        case 3: {
                            cout << "Please update the price: " << endl;
                            int updated_price;
                            cin >> updated_price;
                            inventory[i].setPrice(updated_price);
                            cout << "Updated price: " << inventory[i].getPrice() << endl;
                            break;
                        }
                        case 4: {
                            cout << "Exiting item update menu " << endl;
                            exit = true;
                            break;
                        }
                        default:
                            break;
                    }

                } while (choice > 0 && choice < 5 && (exit == false));
            }

        }


    } while (choice != 4 && exit == false);
};
