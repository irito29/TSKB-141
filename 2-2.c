#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * @brief считывает с клавиатуры значение с плавающей точкой, выдаёт ошибку и выходит из программы если введено не число
 * @return считанное значение
 */
double getDouble();
/**
 * @brief вычисляет вторую функцию
 * @param a заданная константа а
 * @param x число которое ввёл пользователь
 * @return рассчитанное значение
 */
double yType2 (const double a,const double x);
/**
 * @brief вычисляет первую функцию
 * @param a заданная константа а
 * @param x число которое ввёл пользователь
 * @return рассчитанное значение
 */
double yType1 (const double a,const double x);

int main()
{   
    const double a = 0.3;
    
    double x = getDouble();
    if (a*x < 1)
    {
        printf("y = %lf", yType1(a,x));
    }
    else
    {
        printf("y = %lf", yType2(a,x));
    }
    return 0;
}
double getDouble()
{
    double number = 0.0;
    printf("введите число x\n");
    if (scanf("%lf", &number) != 1)
    {
        printf("ошибка.нужно ввести число");
        exit(1);
    }
    return number;
}
double yType1 (const double a,const double x)
{
    return a * sin((x*x +1 )/10);
}
double yType2 (const double a,const double x)
{
    return a * cos((x-1)/10);
}