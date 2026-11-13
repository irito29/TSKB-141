#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * @brief считывает с клавиатуры значение с плавающей точкой, выдаёт ошибку и выходит из программы если введено не число
 * @return считанное значение
 */
double getDouble();
/**
 * @brief вычисляет значение функции y
 * @param x значение аргумента
 * @return значение функции
 */
double y(const double x);
/**
 * @brief точка входа в программу
 * @return 0 если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите начало интервала (0.5):\n");
    double start = getDouble();
    printf("Введите конец интервала (1):\n");
    double end = getDouble();
    printf("Введите шаг интервала (0.05):\n");
    double step = getDouble();
    printf("x\t y\n");
    for (double x = start; x <= end +1e-9; x += step)
    
    {
        if (x< 0 ){
            printf("%.2f\t отсутствует решение\n",x);
        }
        else
        {
            printf("%.2f\t%.4f\n",x, y(x));
        }
    }
    return 0;
}
double y(const double x)
{
    return x + cos(pow(x, 0.52)+2);
}
double getDouble()
{
    double value = 0.0;
    if (scanf("%lf", &value) != 1)
    {
        printf("ошибка. нужно вводить число.");
        exit(1);
    }
    return value;
    
}
