//
// Created by Maya McRae on 2023-01-04.
//
if (employee_pw != password) {
menu_cnt = 1;
do {
menu_cnt++;
cout << "Please enter your password: " << endl;
cin >> employee_pw;
if (menu_cnt % 3 == 0 && employee_pw != password) {
menu_option();//    show the menu option
}

} while (employee_pw != password);
} else if (employee_pw == password) {
long sin;
bool exit = false;
do {
cout << "Please enter sin appliance you want to update: " << endl;
cin >> sin;
for (int i = 0; i < inventory_nb; ++i) {
if (sin == inv_app[i].getSIN()) {
cout << "Appliance Serial #" << inv_app[i].getSIN() << endl;
cout << "Brand: " << inv_app[i].getBrand() << endl;
cout << "Type: " << inv_app[i].getType() << endl;
cout << "Price: " << inv_app[i].getPrice() << endl;

int choice;

do {
cout << "What information would you like to change?"
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
inv_app[i].setBrand(updated_brand);
cout << "Updated brand: " << inv_app[i].getBrand() << endl;
break;
}
case 2: {
cout << "Please update the type: " << endl;
string updated_type;
cin >> updated_type;
inv_app[i].setType(updated_type);
cout << "Updated type: " << inv_app[i].getType() << endl;
break;
}
case 3: {
cout << "Please update the price: " << endl;
int updated_price;
cin >> updated_price;
inv_app[i].setPrice(updated_price);
cout << "Updated price: " << inv_app[i].getPrice() << endl;
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

} while (choice > 0 && choice < 5 && (exit = true));
}

}
while ((exit = true));
//                            if (employee_pw != password) {
//                                menu_cnt = 1;

//                    do
//                    {
//                        menu_cnt++;
//                        cout << "Please enter your password: " << endl;
//                        cin >> employee_pw;
//                        if (menu_cnt % 3 == 0 && employee_pw != password) {
//                            menu_option();//    show the menu option
//                        }
//
//                        else if (employee_pw == password) {
//                            long sin;
//                            cout << "Please enter sin appliance you want to update: " << endl;
//                            cin >> sin;
//                            for (int i = 0; i < inventory_nb; ++i) {
//                                if (sin == inv_app[i].getSIN()){
//                                    cout << "Appliance Serial #" << inv_app[i].getSIN()<< endl;
//                                    cout << "Brand: " << inv_app[i].getBrand() << endl;
//                                    cout << "Type: " << inv_app[i].getType() <<endl;
//                                    cout << "Price: " << inv_app[i].getPrice() <<endl;
//
//                                    int choice;
//
//                                    do {
//                                        cout << "What information would you like to change?"
//                                                "\t1.\t brand "
//                                                "\t2.\t type "
//                                                "\t3.\t price "
//                                                "\t4.\t Quit "
//                                                "Enter your choice>";
//
//                                        cin >> choice;
//                                        switch ( choice) {
//                                            case 1:{
//                                                cout << "Please update the brand: " << endl;
//                                                string updated_brand;
//                                                cin >> updated_brand;
//                                                inv_app[i].setBrand(updated_brand);
//                                                cout << "Updated brand: " << inv_app[i].getBrand() << endl;
//                                                break;
//                                        }
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
//                                                choice = 0;
//                                                break;
//                                            }
//                                            default:
//                                                break;
//                                        }
//                                    }while (choice >0 && choice <5);
//
//                                }
//
//                            }
//                        }

} while (employee_pw != password);

break;
case 5:
cout << "Peace out y'all!!";
//exit(0);
break;
default:
break;
}
