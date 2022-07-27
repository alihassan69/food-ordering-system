#include "customer.h"
customer::customer()
{
    id = 0;
    name = NULL;
}
customer::customer(int i, char *n)
{
    setID(i);
    setName(n);
}
void customer::setName(char *n)
{
    int s = strlen(n);
    name = new char[s + 1];
    for (int i = 0; i <= s; i++)
    {
        name[i] = n[i];
    }
}
void customer::setID(int i)
{
    if (i > 0)
        id = i;
    else
        id = 0;
}
int customer::getID()
{
    return id;
}
char *customer::getName()
{
    return name;
}