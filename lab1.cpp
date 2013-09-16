// Test.cpp : Defines the entry point for the console application.
//

#include <stdio.h>


int main()
{
int counter, denominator;

denominator = counter = 0; //Устанавливаем начальные значение

printf("Увеличиваем счетчик и отображаем на экране\n");
printf("%d\n%d\n", ++counter, denominator++);
printf("Вычисляем значение Counter/Denominator = ");
printf("%d\n", counter/denominator);
printf("%d\n", counter);

return 0;
}



