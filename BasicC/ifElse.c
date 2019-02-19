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
    }else{
     printf("\nError");
    }
}

