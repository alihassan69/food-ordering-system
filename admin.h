#include <iostream>
using namespace std;
class admin
{
    int id;
    int pass;

public:
    admin();
    admin(int, int);
    void setID(int);
    void setPass(int);
    int getID();
    int getPass();
};