#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief считывает с клавиатуры значение с плавающей точкой, выдаёт ошибку и выходит из программы если введено не число
 * @return считанное значение
 */
double getValue();


/**
 * @brief просит пользователя ввести величину деформации в мм
 * @return величину деформации в мм
 */
double getLength();


 /**
 * @brief просит пользователя ввести коэффициент жёсткости в Н/м
 * @return коэффициент жёсткости в Н/м
 */
double getCoefficient();


 /**
 * @brief проверяет что число положительное
 * @param value считанное число 
 */
void checkValue(const double value);



 /**
 * @brief вычисляет значение потенциальной энергии пружины по заданным данным
 * @param length величина абсолютной деформации (в мм).
 * @param coefficient коэффициент жёсткости пружины (в ньютонах на метр, Н/м)
 * @return потенциальная энергия пружины
*/
double energy(const double length,const double coefficient);


/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
 
int main()
{
    double length = getLength();
    checkValue(length);
    double coefficient = getCoefficient();
    checkValue(coefficient);
    printf("потенциальная энергия пружины %lf", energy(length,coefficient));
}

double getLength()
{    
    printf("введите величину деформации в мм \n");
    double length = getValue();
    
    return length;
}


double getCoefficient()
{
    printf("введите коэффициент жёсткости в Н/м \n");
    double coefficient = getValue();
    
    return coefficient;
}

double getValue()
{   double value = 0.0;
    if(scanf("%lf", &value) != 1)
    {
        printf("ошибка");
        exit(1);
    }
    return value;
}

void checkValue(const double value)
{
    if (value <= 0 )
    {
        printf("ошибка");
        exit(1);
    }
}

double energy(const double length,const double coefficient)
{
    return (coefficient * pow(length/1000,2)/2);
}
