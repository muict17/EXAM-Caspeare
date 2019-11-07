#include <stdio.h>
/*

        WILL BE AN INFINITY LOOP of new_line AFTER EXECUTE;

*/



void Transapose(int row, int column, int ARRAY[][column], int row_pos, int column_pos)
{   
    
    
    if (row_pos >= 0)
    {
        if (column_pos < column )
        {
            
            printf("%d " ,ARRAY[row_pos][column_pos]);
        }
        
        Transapose(row, column, ARRAY, row_pos-1, column_pos);
        
    }
    
    printf("\n");
    Transapose(row, column, ARRAY, row-1, column_pos+1);
    



}
int main()
{
    int row, column;
    scanf("%d %d" ,&row ,&column);
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d" ,&array[i][j]);
        }
    }

    Transapose(row, column, array, row-1, 0);
    
    return 0;
}