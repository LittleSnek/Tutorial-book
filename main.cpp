//
//  main.cpp
//  Chapter-3.2
//
//  Created by Onni Salminen on 3.3.2017.
//  Copyright © 2017 Onni Salminen. All rights reserved.
//
//  Chapter 3 second example (1rst edition)
//

#include "std_lib_facilities.h"

int main() {
    cout << "Please enter your first name and age\n";
    string first_name;
    int age;
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name << " (age " << age << ")\n";
}
