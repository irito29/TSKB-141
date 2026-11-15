#include <stdio.h>
#include <stdlib.h>
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
    int countnumber = 0;
    int n = getInt();
    while(n != 0)
    {
        countnumber +=1;
        n /= 10;
        
    }
    printf("%d", countnumber);
    return 0;
}
int getInt()
    {
    int value = 0;
    if (scanf("%d", &value) != 1)
    {
        printf("ошибка. нужно вводить целое число.");
        exit(1);
    }
    return value;
}

