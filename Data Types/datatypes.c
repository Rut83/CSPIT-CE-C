#include<stdint.h>
#include<limits.h>
#include<float.h>

int main(){

    printf("Size of Int : %zu",sizeof(int));
    printf("\nSize of Char : %zu",sizeof(char));
    printf("Size of float : %zu",sizeof(float));
    printf("\nSize of long : %zu",sizeof(long));
    printf("\nSize of double : %zu",sizeof(double));
    printf("\nMaximum Value of Long : %lu",LONG_MAX);
    printf("\nMinimum Value of Long : %lu",LONG_MIN);
    printf("\nMaximum Value of char : %d",CHAR_MAX);
    printf("\nMinium Value of char : %d",CHAR_MIN);
    printf("\nMaximum Value of Long Long : %llu",LLONG_MAX);
    printf("\nMinimum Value of Long Long : %llu",LLONG_MIN);
    printf("\nMaximum Value of Float : %e",FLT_MAX);
    printf("\nMinimum Value of Float : %e",FLT_MIN);
    printf("\nMaximum Value of Float : %Le",LDBL_MAX);
    printf("\nMinimum Value of Float : %Le",LDBL_MIN);


    return 0;
}