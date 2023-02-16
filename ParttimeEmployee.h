//ParttimeEmployee.h

#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include "Employee.h"

class ParttimeEmployee: public Employee{
private:
float employeeHourlyWage;
int employeeHoursWorked;
public:
void setHourlyWage(float wage);
void setHoursWorked(int hours);
float getHourlyWage();
int getHoursWorked();
float calculatePay();
};

#endif
