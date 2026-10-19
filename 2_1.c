#include <stdio.h>
/**
 * @brief Вычисляет сумму двух чисел
 * @param ch1,ch2 вводимые числа
 * @return Рассчитанное значение
 */
double summ(const double ch1, const double ch2);
/**
 * @brief Вычисляет разность двух чисел
 * @param ch1,ch2 вводимые числа
 * @return Рассчитанное значение
 */
double razn(const double ch1, const double ch2);
/**
 * @brief Вычисляет произведение двух чисел
 * @param ch1,ch2 вводимые числа
 * @return Рассчитанное значение
 */
double umn(const double ch1, const double ch2);
/**
 * @brief Вычисляет частное двух чисел
 * @param ch1,ch2 вводимые числа
 * @return Рассчитанное значение
 */
double del(const double ch1, const double ch2);
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
* @brief Проверяет не является ли второе число нулём
* @param ch2 второе число
* @return 0 если если число не равно нулю, иначе "Error!" и завершение программы
*/
double checkNum(const double ch2);
/**
* @brief Точка входа в программу
* @return 0, если программа выполнена корректно, иначе не 0
*/
int main()
{
    printf("Enter two numbers\n");
    double ch1=getDouble();
    double ch2=getDouble();
    printf("Sum of numbers: %lf\n",summ(ch1,ch2));
    printf("Number difference: %lf\n",razn(ch1,ch2));
    printf("Product of numbers: %lf\n",umn(ch1,ch2));
    printf("Quotient of numbers: %lf",del(ch1,ch2));
    return 0;
}

double getDouble() {
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
    {
        printf("Error");
        exit(1);
    }
    return value;
}
double CheckNum(const double ch2) {
    if (ch2==0) {
        printf("Error!");
        exit(1);
    }
}

double summ(const double ch1, const double ch2) {
    return ch1+ch2;
}
double razn(const double ch1, const double ch2) {
    return ch1-ch2;
}
double umn(const double ch1, const double ch2) {
    return ch1*ch2;
}
double del(const double ch1, const double ch2) {
    return ch1/ch2;
}