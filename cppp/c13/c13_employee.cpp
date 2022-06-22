
#include "c13_employee.h"


employee::employee(): pname(new std::string()), id(0) 
{

}

employee::employee(std::string &s): pname(new std::string(s)), id(0) 
{

}

employee::employee(const employee&)
{

}

employee::employee &operator=(const employee&)
{

}