//ParttimeEmployee.cpp

#include "ParttimeEmployee.h"

void ParttimeEmployee::setHourlyWage(float wage){
employeeHourlyWage = wage;
}

void ParttimeEmployee::setHoursWorked(int hours){
employeeHoursWorked = hours;
}

float ParttimeEmployee::getHourlyWage(){
return employeeHourlyWage;
}

int ParttimeEmployee::getHoursWorked(){
return employeeHoursWorked;
}

float ParttimeEmployee::calculatePay(){
return employeeHourlyWage * employeeHoursWorked;
}
