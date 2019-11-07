#include <stdio.h>
int main()
{
    int decimal;
    int temp;
    scanf("%d" ,&decimal);
    temp = decimal;
    int count = 0;

    while (temp > 0)
    {
        temp = temp / 2;
        count++;
        
    }

    int i = count-1;
    int array[count];
    temp = decimal;
    while (temp > 1)
    {
        array[i] = temp%2;
        decimal = decimal/2;
        temp = decimal;
        i--;
    }
    array[0] = temp;
    



    for (int i = 0; i < count; i++)
    {
        printf("%d " ,array[i]);
    }

    return 0;
}