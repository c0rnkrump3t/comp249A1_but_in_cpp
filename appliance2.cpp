#include <iostream>
#include <stdlib.h>
#include "Appliance.h"
#include <vector>

int main() {
//    Appliance* a = new Appliance("fridge,", "LG", 2);
//    Appliance* a2 = new Appliance();
//    Appliance* a4 = new Appliance();
//    Appliance* appliance;
//    Appliance aaa;
    cout << "===Appliance Tracker===" << endl;

    int inventory_nb;
    int *inventory;
    int inventory_max;
    string brand_user, type_user;
    double price_user;
    cout << "Please enter the max amount of appliances your store can contain: " << endl;
    cin >> inventory_max;
    Appliance inv_app[inventory_max];
    const string password = "c249";
    string employee_pw;
    int menu_cnt = 0;
    int pw_count = 0;
    do {
        switch (menu_option()) {
            case 1:
                cout << "Please enter your password: " << endl;
                cin >> employee_pw;
                if (employee_pw != password) {
                    menu_cnt = 1;
                    for (int i = 0; i < 4; i++) {
                        do {//  password attempt 3 times
                            menu_cnt++;//   shows how many times menu was shown
                            pw_count++;
                            cout << "Please enter your password: " << endl;
                            cin >> employee_pw;
                            if (employee_pw == password) {
                                cout
                                        << "Please enter the max amount of appliances you want to add to the inventory array: "
                                        << endl;
                                cin >> inventory_nb;
                                if (inventory_max >=
                                    inventory_nb) { // if inventory_nb less than or equal to inventory_max
                                    cout << "your appliance inventory is :" << inventory_nb << endl;
                                    for (size_t i = 0; i < inventory_nb; ++i) {
                                        string brand, type;
                                        double price;
                                        cout << "What is the brand? " << endl;
                                        cin >> brand;
                                        // getline(cin,brand, '\n');

                                        cout << "What is the type? " << endl;
                                        cin >> type;
                                        //  getline(cin,type,'\n');
                                        cout << "What is the price? " << endl;
                                        cin >> price;
                                        inv_app[i] = *new Appliance(type, brand, price);

                                    }

                                    for (int j = 0; j < inventory_nb; ++j) {
                                        cout << inv_app[j] << endl;
                                    }
                                    i = 4;
                                } else {
                                    cout << "The max amount of appliances your store can hold is " << inventory_max
                                         << endl;
                                    i = 4;

                                }

                            }
                        } while (employee_pw != password && menu_cnt < 3);
                        if (menu_cnt % 3 == 0 &&
                            pw_count != 11) { //   if password attempt is 3rd time, and not 12th attempt
                            menu_option();//    show the menu option
                        }

                        menu_cnt = 0; //resets the menu count

                    }
                    if (pw_count == 11) {
                        cout << "Program detected suspicious activities and will terminate immediately!" << endl;
                        break;
                    }
                } else if (employee_pw == password) {
                    cout << "Please enter the max amount of appliances you want to add to the inventory array: "
                         << endl;
                    cin >> inventory_nb;
                    if (inventory_max >= inventory_nb) { // if inventory_nb less than or equal to inventory_max
                        //inventory = new int[inventory_nb];//    set an array to the inventory_nb
//                        for (size_t i = 0; i < appliance_inventory.size(); i++)
//                        {
//
//
//                        }
                    } else {
                        cout << "The max amount of appliances your store can hold is " << inventory_max << "." << endl;
                    }
                }
                break;
            case 2:
//                cout << "Please enter your password: " << endl;
//                cin >> employee_pw;
//                int choice;
//
//                do {
//                    int exit = false;
//                    if (employee_pw != password) {
//                        menu_cnt = 1;
//                        do {
//                            menu_cnt++;
//                            cout << "Please enter your password: " << endl;
//                            cin >> employee_pw;
//                            if (menu_cnt % 3 == 0 && employee_pw != password) {
//                                menu_option();//    show the menu option
//                            }
//                        } while (employee_pw != password);
//                    } else if (employee_pw == password) {
//                        long sin;
//
//                        do {
//
//                            cout << "Please enter sin appliance you want to update: " << endl;
//                            cin >> sin;
//                            for (int i = 0; i < inventory_nb; ++i) {
//
//                                if (sin == inv_app[i].getSIN()) {
//                                    cout << "Appliance Serial #" << inv_app[i].getSIN() << endl;
//                                    cout << "Brand: " << inv_app[i].getBrand() << endl;
//                                    cout << "Type: " << inv_app[i].getType() << endl;
//                                    cout << "Price: " << inv_app[i].getPrice() << endl;
//
//
//                                    do {
//                                        cout << "What information would you like to change?\n"
//                                                "\t1.\t brand \n"
//                                                "\t2.\t type \n"
//                                                "\t3.\t price \n"
//                                                "\t4.\t Quit \n"
//                                                "Enter your choice>\n";
//
//                                        cin >> choice;
//                                        switch (choice) {
//                                            case 1: {
//                                                cout << "Please update the brand: " << endl;
//                                                string updated_brand;
//                                                cin >> updated_brand;
//                                                inv_app[i].setBrand(updated_brand);
//                                                cout << "Updated brand: " << inv_app[i].getBrand() << endl;
//
//                                                break;
//                                            }
//                                            case 2: {
//                                                cout << "Please update the type: " << endl;
//                                                string updated_type;
//                                                cin >> updated_type;
//                                                inv_app[i].setType(updated_type);
//                                                cout << "Updated type: " << inv_app[i].getType() << endl;
//                                                break;
//                                            }
//                                            case 3: {
//                                                cout << "Please update the price: " << endl;
//                                                int updated_price;
//                                                cin >> updated_price;
//                                                inv_app[i].setPrice(updated_price);
//                                                cout << "Updated price: " << inv_app[i].getPrice() << endl;
//                                                break;
//                                            }
//                                            case 4: {
//                                                cout << "Exiting item update menu " << endl;
//                                               exit = true;
//                                                break;
//                                            }
//                                            default:
//                                                break;
//                                        }
//
//                                    } while (choice > 0 && choice < 5 && (exit == false) );
//                                }
//
//                            }
//
//
//                        } while (choice !=4 && exit==false);
//                    }
//                } while (choice !=4);

                app_display(inv_app,inventory_nb );
                break;
            case 3:
                findAppliancesBy(inv_app,inventory_nb);
                break;
        }
    }while (true);}
