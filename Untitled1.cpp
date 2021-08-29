#include<stdio.h>
main()
{
    int i, j;
    printf("\n\t\tTable From 1 to 10\n");
    for(i=1; i<=9; i++)
    {
    	printf("\nMultiplication Table of: %d\n",i);
    	printf("============================\n");
        for(j=1; j<=10; j++)
        {
            
            printf("\t%d\n",i*j);
            
        }
      
    }
}

