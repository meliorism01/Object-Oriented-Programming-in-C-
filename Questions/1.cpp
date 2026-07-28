// Write a C++ program to calculate the total salary of an employee using a function with a default argument. The total salary is calculated as:

// Salary = Basic + HRA + DA

// where:

// HRA = 10% of the basic salary
// DA = 2% of the basic salary

// If no basic salary is provided, use the default value of 520.


// Solution:
#include <iostream>
using namespace std;

void calculateSalary(float df = 520)
{
    float hra = df * 0.10;
    float da = df * 0.02;
    float salary = df + hra + da;

    cout << "Basic Salary : " << basic << endl;
    cout << "HRA : " << hra << endl;
    cout << "DA : " << da << endl;
    cout << "Total Salary : " << salary << endl;
}

int main()
{
    calculateSalary();      

    calculateSalary(1000);  

    return 0;
}