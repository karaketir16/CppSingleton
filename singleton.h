#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
    Singleton(Singleton const&)                         = delete;
    void operator=(Singleton const&)  			        = delete;

    int func1();
    void func2();
    void objectAddress();
    static Singleton &instance();
private:
    Singleton();
    int x;
    int y;
};

#define singleton Singleton::instance()

#endif
