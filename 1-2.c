#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @breif Предлагает пользователю ввести данные и считывает их с клавиатуры
 * @return Считанное значение
 */
double getNumber ();

/**
 * @breif Считывает с клавиатуры занчение с плавающей точкой. Если это не точка то выдаёт ошибку и выходит из программы
 * @return Считанное значение
 * 
 */
double getDouble();

/** @breif вычисляет среднее арифметическое кубов для 2х заданных чисел
 * @param number1 первое число
 * @param number2 второе число
 * @return рассчитанное значение
 */
double arithmeticMeanCubes(const double number1,const double number2);

/**
 * @breif вычисляет среднее геометрическое модулей для 2х заданных чисел
 * @param number1 первое число
 * @param number2 второе число
 * @return рассчитанное значение
 */
double geometricMeanNumbers(const double number1,const double number2);

double getDouble();
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    
    const double number1 =  getNumber();
    
    const double number2 =  getNumber();
    printf("среднее арифметическое кубов этих чисел %.3f\n",arithmeticMeanCubes(number1,number2));
    printf("среднее геометрическое модулей этих чисел %.3f\n",geometricMeanNumbers(number1, number2));
    return 0;
}
double getNumber()
{   
    printf("введите число\n");
    double number = getDouble();
    
    return number;
}

double arithmeticMeanCubes(const double number1,const double number2)
{
    return (pow(number1,3) + pow(number2,3)) /2;
}

double geometricMeanNumbers(const double number1,const double number2)
{
    return sqrt(fabs(number1 * number2));
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf", &value) != 1)
        {
            printf("Ошибка\n");
            exit(1);
        }
    return value;
}