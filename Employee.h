//Employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee{
protected:
int employeeID;
std::string employeeName;
std::string employeeDepartment;
public:
void setID(int id);
void setName(std::string name);
void setDepartment(std::string dept);
int getID();
std::string getName();
std::string getDepartment();
};

#endif
