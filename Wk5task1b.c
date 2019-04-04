#include<stdio.h>

void functionName(int *array);

int main() 
    {
        int array[5];
        functionName(&array[0]);

    return 0;
}

void functionName(int *array) 
{
    int i;
    for (i=0;i<5;i++) 
        {
        array[i] = 0;
        printf("%d\n", array[i]);
}
}