#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * @brief считывает значение с плавающей точкой с клавиатуры
 * @return считанное значение
 */
double getDouble();
/**
 * @brief проверяет, что e - положительное
 * @param e заданное число
 */
void checkValue(const double e);
/**
 * @brief считает сумму всех членов последовательности, по модулю не меньших заданного числа e
 * @param e заданное число
 * @return рассчитанное значение
 */
double findSum(const double e);
/**
 * @brief точка входа в программу
 * @return 0 если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("введите e\n");
    double e = getDouble();
    checkValue(e);
    double sum = findSum(e);
    printf("сумма = %lf",sum);
    return 0;
}
double findSum(const double e)
{
    double sum = 0.0;
    int k = 1;
    double element = -8.0;
    
    while (fabs(element) >= e)
    {
        sum += element;
        double k_plus_1 = k + 1.0;
        double k_plus_2 = k + 2.0;
        element = element * (-1.0) * (k_plus_2 * k_plus_2 * k_plus_2) / (k_plus_1 * k_plus_1 * k_plus_1 * k_plus_1);
        
        k++;
    }
    
    return sum;
}
double getDouble()
{
    double e = 0;
    if (scanf("%lf",&e) != 1)
    {
        printf("ошибка.нужно вводить число");
        exit(1);
    }
    return e;
}
void checkValue(const double e)
{
    if (e <= 0)
    {
        printf("ошибка. нужно ввести число больше 0");
        exit(1);
    }
}