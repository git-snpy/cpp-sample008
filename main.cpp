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


// test commit

struct Person {
    string name;
    int age;
    void show() {
        cout << name << " (" << age << ")\n";
    }
};


/*
 * 
 */
int main(int argc, char** argv) {
    Person taro { "Taro", 32 };
    taro.show();
    
    Person* pHanako = new Person { "Hanako" , 27 };
    pHanako->show();
    delete pHanako;
    
    return 0;
}

