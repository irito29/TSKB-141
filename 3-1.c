#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>
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
 * @breif проверяет то что шаг больше 0, если не больше выводит ошибку, выходит из программы
 */
void checkStep(const double step);
/**
 * @breif проверяет то конец больше начала , если нет выводит ошибку, выходит из программы
 */
void compareStartAndEnd(const double start, const double end);
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
    compareStartAndEnd(start,end);
    checkStep(step);
    printf("x\t y\n");
    for (double x = start; x <= end + DBL_EPSILON; x += step)
    
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
void compareStartAndEnd(const double start, const double end)
{
    if (start > end){
        printf("ошибка. начало интервала не долно быть больше конца");
        exit(1);
    }
}
void checkStep(const double step)
{
    if (step <= 0){
        printf("ошибка. шаг должен быть больше 0");
        exit(1);
    }
}
