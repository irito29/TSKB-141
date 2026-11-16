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
    int a = getInt();
    int b = getInt();
    
    int count = 0;
    for (int x = 100; x <= 999 ; x+=1){
        int sumNumber = 0;
        int lastNumber = 0;
        lastNumber = x %10;
        int number = x;
        while( number >0){
            sumNumber += number %10; 
            
            number /= 10;

        }
        if (lastNumber == b && sumNumber ==a){
            count +=1;
            

        }
    }
    printf("%d", count);
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

