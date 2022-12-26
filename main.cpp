#include <iostream>
#include <stdlib.h>
#include "Appliance.h"
#include <vector>
int main() {
    Appliance* a = new Appliance("fridge,", "LG", 2);
    Appliance* a2 = new Appliance();
    Appliance* a4 = new Appliance();

    cout << "====Appliance Tracker===" << endl;

    int inventory_nb;
    int* inventory;
    int inventory_max;

    cout << "Please enter the max amount of appliances your store can contain: " << endl;
    cin >> inventory_max;
    vector<Appliance*> appliance_inventory(inventory_max);
    const string password = "c249";
    string employee_pw;
    int menu_cnt = 0;
    int pw_count = 0;
    do
    {


        switch (menu_option())
        {
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
                                cout << "Please enter the max amount of appliances you want to add to the inventory array: " << endl;
                                cin >> inventory_nb;
                                if (appliance_inventory.size() >= inventory_nb) { // if inventory_nb less than or equal to inventory_max
                                    //inventory = new int[inventory_nb];//    set an array to the inventory_nb
                                    //   cout << "Your appliances stored in the arrya is " << inventory_nb << endl;
                                    for (size_t i = 0; i < appliance_inventory.size(); i++)
                                    {

                                    }
                                    i = 4;
                                }
                                else {
                                    cout << "The max amount of appliances your store can hold is " << inventory_max << endl;
                                    i = 4;

                                }

                            }
                        } while (employee_pw != password && menu_cnt < 3);
                        if (menu_cnt % 3 == 0 && pw_count != 11) { //   if password attempt is 3rd time, and not 12th attempt
                            menu_option();//    show the menu option
                        }

                        menu_cnt = 0; //resets the menu count

                    }
                    if (pw_count == 11) {
                        cout << "Program detected suspicious activities and will terminate immediately!" << endl;
                        break;
                    }
                }

                else if (employee_pw == password) {
                    cout << "Please enter the max amount of appliances you want to add to the inventory array: " << endl;
                    cin >> inventory_nb;
                    if (inventory_max >= inventory_nb) { // if inventory_nb less than or equal to inventory_max
                        inventory = new int[inventory_nb];//    set an array to the inventory_nb

                    }
                    else {
                        cout << "The max amount of appliances your store can hold is " << inventory_max << "." << endl;
                    }
                }
                break;
            case 2:
                cout << "Please enter your password: " << endl;
                cin >> employee_pw;
                if (employee_pw != password) {
                    menu_cnt = 1;

                    do
                    {
                        menu_cnt++;
                        cout << "Please enter your password: " << endl;
                        cin >> employee_pw;
                        if (menu_cnt % 3 == 0 && employee_pw != password) {
                            menu_option();//    show the menu option

                        }
                        else if (employee_pw == password) {
                            cout << "Please enter appliance you want to update: " << endl;

                        }
                    } while (employee_pw != password);
                }

                break;
            case 5:
                cout << "Peace out y'all!!";
                exit(0);
                break;
            default:
                break;
        }

    } while (true);
    return 0;


}