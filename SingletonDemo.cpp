//
// Created by Admin on 3/5/2021.
//

#include "SingletonDemo.h"
#include "iostream"

using namespace std;

SingletonDemo::SingletonDemo() {

}

void SingletonDemo::main() {
    int choice = printMenu();
    while (choice < 0 || choice > 4) {
        choice = printMenu("Invalid choice! Please try again.");
    }
    switch (choice) {
        case 1:

            break;
        case 2:
            break;
        case 0:
            return;
    }
}

int SingletonDemo::printMenu() const {
    return printMenu("");
}

int SingletonDemo::printMenu(const string& externalMessage) const {
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃ Company Management Software                     ┃" << endl;
    cout << "┣━━━┳━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" << endl;
    cout << "┃ 1 ┃ Add Staff                                   ┃" << endl;
    cout << "┣━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" << endl;
    cout << "┃ 2 ┃ View Staff List                             ┃" << endl;
    cout << "┣━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" << endl;
    cout << "┃ 3 ┃ View Reports                                ┃" << endl;
    cout << "┣━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" << endl;
    cout << "┃ 4 ┃ View Company Info                           ┃" << endl;
    cout << "┣━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" << endl;
    cout << "┃ 0 ┃ Quit                                        ┃" << endl;
    cout << "┗━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;
    if (!externalMessage.empty()) {
        string paddingRight = "";
        for (int i = 0; i <= 51 - externalMessage.size() - 6; i ++) paddingRight += " ";
        cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
        cout << "┃ ! " << externalMessage << paddingRight << "┃" << endl;
        cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;
    }
    cout << "Enter your choice: " << flush;
    int choice;
    cin >> choice;
    system("cls");
    return choice;
}

void SingletonDemo::addStaff() {
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃ Add new staff                                   ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;
}

