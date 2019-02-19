#include<stdio.h>
int main(){
    int x , y;
    int result;
      //  x = 15, y = 20 ;

        scanf("%d %d",   &x , &y);
    result = x+y;
    /// 30 == 30
    if (result == 30){
        printf("The result is Thirty");
    }
    else if(result == 9){
        printf("The result is Nine");
    }

    else if(result == 10){
        printf("The result is %d", result);
    }

    else{
     printf("\nError");
    }
}


