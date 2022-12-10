#include <stdio.h>

int main()
{
    float temp;
    printf("Enter The Temperature:");
    scanf("%f", &temp);
    int turn_on_fan=(temp>=25)&&(temp<=35);
    printf("%d", turn_on_fan);
    
    

    return 0;
}
