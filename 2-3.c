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
void checkSharp(const double a,const double b, const double c )
{
    double max = 0.0;
    double notMax1 = 0.0;
    double notMax2 = 0.0;
    if (a >= b && a >= c){
        max = a;
        notMax1 = b;
        notMax2 = c;
    }
    if (b >= a && b >= c){
        max = b;
        notMax1 = a;
        notMax2 = c;
    }
     if (c >= b && c >= a){
        max = c;
        notMax1 = b;
        notMax2 = a;
    }
    if (max*max < notMax1 * notMax1 + notMax2 * notMax2){
        printf("треугольник является остроугольным");
    }
    else{
        printf("треугольник не является остроугольным");
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
