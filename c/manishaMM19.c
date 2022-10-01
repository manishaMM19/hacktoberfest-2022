#include <stdio.h>
int main(){
    //Sum of odd numbers
    int max, sum = 0;
    printf("Enter the maximum value: ");
    scanf("%d", &max);

    for (int i = 1; i <= max; i++ ){
        if (i % 2 != 0){
            sum = sum + i;
        }
    }
    printf("Sum of Odd Numbers between 0 and %d = %d", max, sum);
    return 0;
}
