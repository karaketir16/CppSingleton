#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
    int func1();
    void func2();
    void objectAddress();
    static Singleton * instance();
    ~Singleton();
private:
    int x;
    int y;
};

#define singleton Singleton::instance()

#endif