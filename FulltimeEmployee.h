//FulltimeEmployee.h

#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include "Employee.h"

class FulltimeEmployee: public Employee{
private:
float employeeSalary;
public:
void setSalary(float salary);
float getSalary();
};

#endif
