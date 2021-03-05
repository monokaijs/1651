//
// Created by Admin on 3/5/2021.
//

#ifndef ASSIGNMENT2_SINGLETONDEMO_H
#define ASSIGNMENT2_SINGLETONDEMO_H

#include "Company.h"
#include "string"
using namespace std;

class SingletonDemo {
private:
    Company company;
public:
    SingletonDemo();
    void main() ;
    int printMenu() const;
    int printMenu(const string& externalMessage) const;
    void addStaff();
    void viewReports();
    void viewCompanyInfo();
};


#endif //ASSIGNMENT2_SINGLETONDEMO_H
