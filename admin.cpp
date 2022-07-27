#include "admin.h"
admin::admin()
{
    id = 0;
    pass = 0;
}
admin::admin(int i, int p)
{
    setID(i);
    setPass(p);
}
void admin::setID(int i)
{
    if (i > 0)
        id = i;
    else
        id = 0;
}
void admin::setPass(int p)
{
    if (p > 0)
        pass = p;
    else
        pass = 0;
}
int admin::getID()
{
    return id;
}
int admin::getPass()
{
    return pass;
}

