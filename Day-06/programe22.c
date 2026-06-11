#include <stdio.h>
#include<math.h>
int main()
{ 
    int binary,decimal=0,remainder,i=0;// decleration of variables
    printf("enter the number");
    scanf(" %d",&binary);// input the number from the user
    while (binary>0)// loop for binary to decimal conversion 
    {
        remainder=binary%10;
        decimal=decimal+remainder*pow(2,i);
        binary=binary/10;
        i++;
    }
    printf("Decimal equivalent =%d",decimal);
    return 0;
}
