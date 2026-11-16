#include <stdio.h>
#include <stdlib.h>
/**
 * @brief считывает значение с клавиатуры
 * @return считанное значение
 */
int getInt();
/**
 * @brief проверяет что n положительное
 * @param n количество членов ряда
 */
void checkValue(const int n);
/**
 * @brief считает сумму первых n членов последовательности
 * @param n количество членов ряда
 * @return рассчитанное значение
 */
double find_sum(const int n);
/**
 * @brief точка входа в программу
 * @return 0 если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("введите n\n");
    int n = getInt();
    checkValue(n);
    double sum = find_sum(n);
    printf("сумма = %lf",sum);
    return 0;
}
double find_sum(const int n)
{
    double sum = 0.0;
    double factorial = 1.0;
    int  degree = -1;
    
    for (int k = 1; k <= n; k++)
    {
        factorial *= k;
        double km1 = k + 1;
        double num = km1 * km1 * km1;
        double element = degree * num / factorial;
        sum += element;
        degree *= -1;
    }
    
    return sum;
}
int getInt()
{
    int n = 0;
    if (scanf("%d",&n) != 1)
    {
        printf("ошибка.нужно вводить целое число");
        exit(1);
    }
    return n;
}
void checkValue(const int n)
{
    if (n <= 0)
    {
        printf("ошибка. нужно ввести число больше 0");
        exit(1);
    }
}