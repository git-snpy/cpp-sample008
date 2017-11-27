/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: inoue
 *
 * Created on 2017/11/25, 13:12
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <memory>
using namespace std;

struct Person {
    string name;
    Person(const string& newName) : name(newName) {}
    ~Person() {
        cout << name << " has been destructed.\n";
    }
};

/*
 * 
 */
int main(int argc, char** argv) {
    Person a1("Taro");
    Person* pA2 = new Person("Jiro");
    Person* pA3 = new Person("Saburo");
    auto pA4 = make_shared<Person>("Shiro");
    
    cout << a1.name << endl;
    cout << pA2->name << endl;
    cout << pA3->name << endl;
    cout << pA4->name << endl;
    
    delete pA2;
    // delete pA3;
    return 0;
}

