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
};

Person f() {
    Person masato;
    masato.name = "Masato";
    masato.age = 0;
    return masato;
}

/*
 * 
 */
int main(int argc, char** argv) {
    //case1
    Person taro;
    taro.name = "Taro";
    taro.age = 32;
    
    //case2
    Person A(taro);
    cout << A.name << endl;
    
    //case3
    Person B;
    B = taro;
    cout << B.name << endl;
    
    //case4
    Person C(f());
    cout << C.name << endl;

    return 0;
}

