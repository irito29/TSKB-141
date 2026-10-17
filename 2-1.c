#include <stdlib.h>
#include <math.h>
#include <stdio.h>
/**
 * @brief просит пользователя ввести сторону куба и проверяет верно ли она введена, если неправильно то выводит ошибку
 * @return сторону куба
 */
double getSide();

/**
 * @brief считывает с клавиатуры значение с плавающей точкой, выдаёт ошибку и выходит из программы если введено не число
 * @return считанное значение
 */
double getDouble();

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
int makeChoice();
/**
 * @brief считывает с клавиатуры значение типа int, выдаёт ошибку и выходит из программы если введено не целое число
 * @return считанное значение
*/
 int getInt();
/**
 * @brief точка входа в программу
 * @return 0 если программа выполнена корректно
 */
int main()
{
    int choice = 0;
    const double  side = getSide();
    while(1 ==1 )
    {
        choice = makeChoice();
        switch(choice) {
            case 1:
                printf("площадь грани куба = %lf\n", findSquare(side));
                break;
            case 2:
                printf("площадь полной поверхности куба = %lf\n", findSurfaceArea(side));
                break;
            case 3:
                printf("объёма куба = %lf\n", findVolume(side));
                break;
            case 4:
                printf("программа завершена.до свидания");
                return 0;
            default:
                printf("ошибка. введите число от 1 до 4\n");
                break;
        
        }
    }
    
    return 0;

    
}

double getSide()
{
    printf("введите сторону куба\n");
    double side = getDouble();
    if (side <= 0 )
    {
        printf("ошибка. сторона куба должна быть больше 0.");
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


int getInt()
{
    int value = 0;
    if (scanf("%d", &value) != 1)
    {
        printf("ошибка.нужно вводить целое число.");
        exit(1);
    }
    return value;
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

int makeChoice()
{
    printf("чтобы узнать площадь грани куба введите 1\n");
    printf("чтобы узнать площадь полной поверхности куба введите 2\n");
    printf("чтобы узнать объём куба введите 3\n");
    printf("для выхода введите 4\n");
    int choice = getInt();
    return(choice);
}
