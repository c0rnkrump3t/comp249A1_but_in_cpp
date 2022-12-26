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


    ~Appliance();
    void setType(string type);
    string getType();
    const string& getBrand() const;
    void setBrand(const string& brand);
    double getPrice() const;
    void setPrice(double price);
    bool operator ==(const Appliance& rhs);
    /* static long getSin();
     static void setSin(long sn);*/
    friend ostream& operator<<(ostream&, const Appliance& a);
    int getCounter();
    static int counter;

private:
    long SiN;
    double price;
    // static long SN;
    // long serialNb = 1000000;
    string type;
    string brand;
    static long snCounter;
};


int findNumberOfCreatedAppliances();
int menu_option();

;



#endif //COMP249A1_APPLIANCE_H
