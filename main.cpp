#include <iostream>
#include <string>
#include "SingletonDemo.h"

int main() {
    system("chcp 65001");
    system("cls");
    SingletonDemo demo = SingletonDemo();

    demo.main();

    return 0;
}
