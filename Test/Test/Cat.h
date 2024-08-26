#pragma once
#include <iostream>
#include <string>
#include <memory>
class Cat {
    // constructor style
    Cat(int a, int c, int g) : a(a), c(c), _g(g) {

    }
    ~Cat();

public:
    int a;
    char c;

private:
    int _g;



    void Seta() {}
    int geta() {}

}