#include "singleton.h"

#include <iostream>

int Singleton::func1()
{
    std::cout <<"Something";
    return 0;
}

void Singleton::func2()
{
    std::cout<<"Something else";
}

void Singleton::objectAddress()
{
    std::cout<<(long) this;
}

Singleton * Singleton::instance()
{
    static Singleton * obj = nullptr;
    if(obj == nullptr)
        obj = new Singleton();

    return obj;
}

Singleton::~Singleton()
{
    delete singleton;
}