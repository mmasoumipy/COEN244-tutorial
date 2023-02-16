//Employee.cpp

#include "Employee.h"

void Employee::setID(int id){
employeeID = id;
}

void Employee::setName(std::string name){
employeeName = name;
}

void Employee::setDepartment(std::string dept){
employeeDepartment = dept;
}

int Employee::getID(){
return employeeID;
}

std::string Employee::getName(){
return employeeName;
}

std::string Employee::getDepartment(){
return employeeDepartment;
}
