/* 
 * File:   EmployeeMain.cpp
 * Author: MHerzog
 *
 * Created on March 16, 2015, 5:34 PM
 */

#include <cstdlib>

#include "employee/Employee.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Employee mary(12, "Mary", 20.00);
    Employee pat(1234, "Pat", 15.75);
    cout << "id: " << pat.getId() << endl;
    cout << "name: " << pat.getName() << endl;
    cout << "pay rate: " << pat.getPayRate() << endl;
    cout << "gross pay: " << pat.grossPay(40.00) << endl;
    cout << "net pay: " << pat.netPay(40.00) << endl;
    return 0;
}

