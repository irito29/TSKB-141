#include <stdio.h>
#include <math.h>
/**
 * @breif Вычисление функции A по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитаное значение A
 */
double A(const double x, const double y,const double z);

/**
 * @breif Вычисление функции B по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитаное значение B
 */
double B(const double x, const double y,const double z);

/**
 * @brief точка входа в программму
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    const double x  = 2.2;
    const double y = 9.2;
    const double z = 10.2;
    printf("a=%.3f\n", A(x,y,z));
    printf("b=%.3f", B(x,y,z));
    return 0;
}

double A(const double x, const double y,const double z)
{
    return log(z+ pow(x,2)) +  pow(sin(x/y),2);
}

double B(const double x, const double y, const double z)
{
    return -z * (x+sqrt(x+z))/ (x-sqrt(fabs(x-y)));
}