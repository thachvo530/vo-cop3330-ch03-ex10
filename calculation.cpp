#include <iostream>
#include "header.h"


using namespace std;

double calculation(double n1, double n2, string operation)
{
    if (operation == "+")
    {
        return n1+n2;
    }

    else if (operation == "-")
    {
        return n1 - n2;
    }

    else if (operation == "*")
    {
        return n1 * n2;
    }

    else if (operation == "/")
    {
        return n1 / n2;
    }

    else{
        return 0;
    }
}
