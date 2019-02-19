#include<stdio.h>
int main(){
    int x , y;
    int result;
      //  x = 15, y = 20 ;
        scanf("%d %d",   &x , &y);
    result = x+y;
    /// 30 == 30
    if (result == 30){
        printf("The result is %d", result);

            if(x == 14){
            printf("\nThe result of x is %d", x);
            printf("\nThe result of y is %d", y);
            }else{
            printf("\nx != 14");
            }
    }
    else if(result == 9){
        printf("The result is Nine");
    }
    else{
     printf("\nError");
    }
}

