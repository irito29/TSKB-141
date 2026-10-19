#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>
typedef enum
{
    SQUARE = 1,
    SURFACEAREA = 2,
    VOLUME = 3,
    EXIT = 4
    
} UserChoice; 
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
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    int choice = 0;
    const double  side = getSide();
    while(true)
    {
        choice = makeChoice();
        switch(choice) {
            case SQUARE:
                printf("площадь грани куба = %lf\n", findSquare(side));
                break;
            case SURFACEAREA:
                printf("площадь полной поверхности куба = %lf\n", findSurfaceArea(side));
                break;
            case VOLUME:
                printf("объёма куба = %lf\n", findVolume(side));
                break;
            case EXIT:
                printf("программа завершена.до свидания");
                return 0;
            default:
                printf("ошибка. введите число от 1 до 4\n");
                break;
        
        }
    }
    
    

    
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
    printf("чтобы узнать площадь грани куба введите %d\n", SQUARE);
    printf("чтобы узнать площадь полной поверхности куба введите %d\n", SURFACEAREA);
    printf("чтобы узнать объём куба введите %d\n", VOLUME);
    printf("для выхода введите %d\n", EXIT);
    UserChoice choice = getInt();
    return(choice);
}
