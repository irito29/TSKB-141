#include <stdlib.h>
#include <math.h>
#include <stdio.h>
/**
 * @brief просит пользователя ввести сторону куба
 * @return сторону куба
 */
double getSide();

/**
 * @brief считывает с клавиатуры значение с плавающей точкой, выдаёт ошибку и выходит из программы если введено не число
 * @return считанное значение
 */
double getDouble();

/**
 * @brief проверяет что число от 1 до 4(включая границы)
 * @param choice считанное число
 */
void checkChoice(const double choice);

/**
 * @brief проверяет что число положительное
 * @param side считанное число
 */
void checkSide(const double side);

/**
 * @brief вычисляет значение площади грани куба по заданным данным
 * @param side сторона куба
 * @return площадь грани куба
 */
double findSquare(double side);

/**
 * @brief вычисляет значение площади полной поверхности куба по заданным данным
 * @param side сторона куба
 * @return площадь полной поверхности куба
 */
double findSurfaceArea(double side);

/**
 * @brief вычисляет значение объёма куба по заданным данным
 * @param side сторона куба
 * @return объём куба
 */
double findVolume(double side);

/**
 * @brief просит пользователя выбрать действие
 * @return число, обозначающее выбор пользователя
 */
double makeChoice();

/**
 * @brief точка входа в программу
 * @return 0 если программа выполнена корректно
 */
int main()
{
    double choice = 0.0;
    const double  side = getSide();
    while(1 ==1)
    {
        choice = makeChoice();
        
        if( choice == 1)
        {
            printf("площадь грани куба = %lf\n", findSquare(side));
            
        }
        if (choice == 2)
        {
            printf("площадь полной поверхности куба = %lf\n", findSurfaceArea(side));
        }
        if (choice == 3)
        {
            printf("объёма куба = %lf\n", findVolume(side));
        }
        if (choice ==4)
        {
            printf("программа завершена.до свидания");
            exit(1);
        }
    }
    
    return 0;

    
}

double getSide()
{
    printf("ведите сторону куба\n");
    double side = getDouble();
    return side;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf", &value) != 1)
    {
        printf("ошибка. введите число.");
        exit(1);
    }
        checkSide(value);
        return value;
    
}

void checkChoice(const double choice)
{
    if (choice > 4 || choice <1)
    {
        printf("ошибка. введите число от 1 до 4");
        exit(1);
    }
}

void checkSide(const double side )
{
    if (side <= 0 )
    {
        printf("ошибка. сторона квадрата должна быть больше 0.");
        exit(1);
    }
}

double findSquare(double side)
{
    return pow(side,2);
}

double findSurfaceArea(double side)
{
    return pow(side,2)*6;
}

double findVolume(double side)
{
    return pow(side,3);
}

double makeChoice()
{
    printf("чтобы узнать площадь грани куба введите 1\n");
    printf("чтобы узнать площадь полной поверхности куба введите 2\n");
    printf("чтобы узнать объём куба введите 3\n");
    printf("для выхода введите 4\n");
    double choice = getDouble();
    checkChoice(choice);
    return(choice);
}
