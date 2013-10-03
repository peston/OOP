#include <iostream>
#include <string.h>
#include "Lab 1_2.h"

using namespace std;

employee::employee(char *name, long employee_id, float salary) // Конструктор
{
    strcpy(employee::name, name) ;
    employee::employee_id = employee_id;
        if (salary < 50000.0) employee::salary = salary;
        else // Недопустимый оклад
    employee::salary=0.0;
}

void employee::show_employee(void) // Функция вывода информации о работнике
{
    cout << "Служащий: " << name << endl;
    cout << "Номер служащего: " << employee_id << endl;
    cout << "Оклад: " << salary << endl;
}

employee::~employee(void) //Деструктор
{
    cout << "Уничтожение объекта для " << name << endl;
}

int main(void)
{
    employee worker("Old Bobby", 1212, 50020.0);
    worker.show_employee();

return 0;
}
