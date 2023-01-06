//
// Created by maya_school on 2022-12-25.
//

#ifndef COMP249A1_APPLIANCE_H
#define COMP249A1_APPLIANCE_H


#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
 using namespace std;
class Appliance {
public:
    Appliance();
    Appliance(string type, string brand, double price);
 long getSIN() const;
    ~Appliance();
    void setType(string type);
    string getType();
    const string& getBrand() const;
    void setBrand(const string& brand);
    double getPrice() const;
    void setPrice(double price);
    bool operator ==(const Appliance& rhs);
    friend ostream& operator<<(ostream&, const Appliance& a);
    int getCounter();
    static int counter;

    Appliance input_appliance( );

private:
    long SiN;
    double price;
    string type;
    string brand;
    static long snCounter;
 };


int findNumberOfCreatedAppliances();
int menu_option();
void app_display(Appliance inventory[], int max_nb_appliances);
 void findAppliancesBy(Appliance inventory[] , int max_nb_appliances);
void findCheaperThan(Appliance inventory[], int max_nb_appliances);
 ;



#endif //COMP249A1_APPLIANCE_H
