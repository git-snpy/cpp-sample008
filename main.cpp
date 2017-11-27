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
using namespace std;

struct Person {
    string name;
    int age;
    
    Person() {}
    
    Person(const string& newName, int newAge) {
        name = newName;
        age = newAge;
    }
    
};

/*
 * 
 */
int main(int argc, char** argv) {
    Person people[5];
    cout << end(people) - begin(people) << endl;
    
    Person taro("Taro", 32);
    cout << taro.name << " (" << taro.age << ")\n";
    
    return 0;
}

