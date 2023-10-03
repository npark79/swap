//made number Swap function using a simple code
//made by Namsik Park in FDU
//data: Sep 20, 2023
//level 0


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x, y, temp;
    
    x = 4; 
    y = 5; 

    printf("Before swap: x = %d, y = %d\n", x, y);
    
    temp = x;
    x = y;
    y = temp; 
    
    printf("After swap: x = %d, y = %d\n", x, y);

    exit(1);  
}