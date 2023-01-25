#include <iostream>
#include "singleton.h"
using namespace std;
void yetAnotherfunc()
{
    cout <<"\nyetAnotherfunc: \n";
    singleton.objectAddress();
}
int main()
{
    cout << "main: \n";
    singleton.objectAddress();

    yetAnotherfunc();

    cout<<'\n';
    return 0;
}
