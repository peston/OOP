/* Создание класса Работник для вывода статистики (Имени, его номера, и оклада)
Если оклад превысит 50 000, то он недопустим*/

class employee
{
    public:
        employee(char *, long, float);
        ~employee(void);

    void show_employee(void);
    int change_salary(float);
    long get_id(void);

    private:
        char name [64] ;
        long employee_id;
        float salary;
};

