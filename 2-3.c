#include <stdio.h>
#include <stdlib.h>
/**
 * @brief проверяет возможность построения треугольника
 * @param a первая сторона
 * @param b вторая сторона
 * @param c третья сторона
 * @return 1 если треугольник можно построить, 0 иначе
 */
int checkTriangle(const double a, const double b, const double c);

/**
 * @brief возвращает максимум из двух чисел
 * @param a первое число
 * @param b второе число
 * @return большее из a и b
 */
double max2(const double a, const double b);

/**
 * @brief проверяет является ли треугольник остроугольным
 * @param a первая сторона
 * @param b вторая сторона
 * @param c третья сторона
 */
void checkSharp(const double a, const double b, const double c);

/**
 * @brief просит пользователя ввести сторону треугольника и проверяет валидность
 * @return сторону треугольника
 */
double getSide();

/**
 * @brief считывает с клавиатуры значение с плавающей точкой
 * @return считанное значение
 */
double getDouble();

/** 
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double side1 = getSide();
    const double side2 = getSide();
    const double side3 = getSide();
    if (checkTriangle(side1,side2,side3)){
        checkSharp(side1,side2,side3);
    }
    return 0;
    
}
int checkTriangle(const double a,const double b, const double c )
{
    if ((c<a+b) && (b<a+c) && (a<b+c)) {
        printf("треугольник можно построить\n");
        return 1;
    }
    else {
        printf("треугольник нельзя построить");
        return 0;
    }
}
void checkSharp(const double a, const double b, const double c)
{
    double max = max2(max2(a, b), c);
    double notMax1 = 0.0;
    double notMax2 = 0.0;

    if (max == a)
    {
        notMax1 = b;
        notMax2 = c;
    }
    else if (max == b)
    {
        notMax1 = a;
        notMax2 = c;
    }
    else
    {
        notMax1 = a;
        notMax2 = b;
    }

    if (max * max < notMax1 * notMax1 + notMax2 * notMax2)
    {
        printf("треугольник является остроугольным\n");
    }
    else
    {
        printf("треугольник не является остроугольным\n");
    }
}
double getSide()
{
    printf("введите сторону треугольника\n");
    double side = getDouble();
    if (side <= 0 )
    {
        printf("ошибка. сторона треугольника должна быть больше 0.");
        exit(1);
    }
    return side;
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

double max2(const double a , const double b){
    if (a >= b) 
    {
        return a;
    } 
    else 
    {
        return b;
    }
}
