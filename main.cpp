#include <iostream>
 #include "Appliance.h"

int main() {
//    Appliance* a = new Appliance("fridge,", "LG", 2);
//    Appliance* a2 = new Appliance();
//    Appliance* a4 = new Appliance();
//    Appliance* appliance;
//    Appliance aaa;
    cout << "===Appliance Tracker===" << endl;

    int employee_inventory;
    int max_store_inventory;

    cout << "Please enter the max amount of appliances your store can contain: " << endl;
    cin >> max_store_inventory;

    //Set an Appliance array
    Appliance inv_app[max_store_inventory];

    //Set constant password
    const string password = "c249";

    //Employee's password
    string employee_pw;

    int menu_cnt ;  //or int menu_cnt = 0
    int pw_count = 0;

    do {
        switch (menu_option()) {
            case 1:
                cout << "Please enter your password: " << endl;
                cin >> employee_pw;

                if (employee_pw != password){

                }

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
                                cin >> employee_inventory;
                                if (max_store_inventory >=
                                    employee_inventory) { // if employee_inventory less than or equal to max_store_inventory
                                    cout << "your appliance inventory is :" << employee_inventory << endl;
                                    for (size_t i = 0; i < employee_inventory; ++i) {
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

                                    for (int j = 0; j < employee_inventory; ++j) {
                                        cout << inv_app[j] << endl;
                                    }
                                    i = 4;
                                } else {
                                    cout << "The max amount of appliances your store can hold is " << max_store_inventory
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
                    cin >> employee_inventory;
                    if (max_store_inventory >= employee_inventory) { // if employee_inventory less than or equal to max_store_inventory
                        cout << "your appliance inventory is :" << employee_inventory << endl;
                        for (size_t i = 0; i < employee_inventory; ++i) {
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
                    } else {
                        cout << "The max amount of appliances your store can hold is " << max_store_inventory << "." << endl;
                    }
                }
                break;
            case 2:

                app_display(inv_app, employee_inventory);
                break;
            case 3:
                findAppliancesBy(inv_app, employee_inventory);
                break;

            case 4:
                findCheaperThan(inv_app, employee_inventory);
                break;

            case 5:
                cout << "Exiting the Appliance Tracker program. Goodbye :)" << endl;
                return 0;

        }
    } while (true);
}
