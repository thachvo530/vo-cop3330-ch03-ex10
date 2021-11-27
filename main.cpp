#include <iostream>
#include "header.h"


using namespace std;

int main(void)
{
    double n1;
    double n2;
    double total = 0;
    string operation;

    cout << "Please enter an operation: " << endl;
    cin >> operation;
    cout << "Please enter the first operand: " << endl;
    cin >> n1;
    cout << "Please enter the second operand: " << endl;
    cin >> n2;

    total = calculation(n1,n2,operation);

    cout << "The total is " << total << endl;

}