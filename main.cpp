//main.cpp

#include <iostream>
#include "Employee.h"
#include "FulltimeEmployee.h"
#include "ParttimeEmployee.h"

int main(){
FulltimeEmployee ftEmp;
ftEmp.setID(123);
ftEmp.setName("John Smith");
ftEmp.setDepartment("Accounting");
ftEmp.setSalary(60000.00);

std::cout << "Fulltime employee with salary:" << std::endl;
std::cout << "ID: " << ftEmp.getID() << std::endl;
std::cout << "Name: " << ftEmp.getName() << std::endl;
std::cout << "Department: " << ftEmp.getDepartment() << std::endl;
std::cout << "Salary: $" << ftEmp.getSalary() << std::endl;

ParttimeEmployee ptEmp;
ptEmp.setID(456);
ptEmp.setName("Jane Doe");
ptEmp.setDepartment("Sales");
ptEmp.setHourlyWage(20.00);
ptEmp.setHoursWorked(25);

std::cout << "Part time employee with daily wages:" << std::endl;
std::cout << "ID: " << ptEmp.getID() << std::endl;
std::cout << "Name: " << ptEmp.getName() << std::endl;
std::cout << "Department: " << ptEmp.getDepartment() << std::endl;
std::cout << "Hourly wage: $" << ptEmp.getHourlyWage() << std::endl;
std::cout << "Hours worked: " << ptEmp.getHoursWorked() << std::endl;
std::cout << "Pay: $" << ptEmp.calculatePay() << std::endl;

return 0;
}
