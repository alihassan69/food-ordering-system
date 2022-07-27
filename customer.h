#include <iostream>
#include <cstring>
using namespace std;
class customer
{
protected:
    int id;
    char *name;

public:
    customer();
    customer(int, char *);
    void setID(int);
    int getID();
    void setName(char *);
    char *getName();
};