#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int binary;
    scanf("%d" ,&binary);
    int count = 0,temp=binary;

    while (temp > 0)
    {
        temp = temp/1000;
        count++;
    }
    
    
    int array[count];
    int sum = 0;

    for (int i = count-1; i >= 0; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            if (binary>0)
            {
            sum += binary%2 * pow(2,j);
            binary = binary/10;
            }
            
        }
        array[i] = sum;
        sum = 0;
        
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d" ,array[i]);
    }
    
    
    
    
    
    

    return 0;
}