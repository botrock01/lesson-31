#include "Free.h"

Free::Free()
{
}

Free::Free(string name, string company):Soft(name, company)
{

}

void Free::showInfo() const
{
    cout << "\tFREE\n";
    Soft::showInfo();
}

bool Free::isAvaible() const
{
    return true;
}
