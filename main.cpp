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

struct A {
    int x;
    A(int newX) : x(newX) { cout << "A(int newX) is called.\n"; };
};

/*
 * 
 */
int main(int argc, char** argv) {
    A a = 5;
    
    return 0;
}

