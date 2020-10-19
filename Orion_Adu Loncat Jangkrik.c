#include <stdio.h>

int main(){
    int x1, v1, x2, v2, cricket1, cricket2;
    printf("Please input x1, v1, x2, dan v2, separated with a space: \n");
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    if(x1>= 0 && x2>0 && 0<=v1<=1000 && 0<=v2<=1000 && x1<x2){
        cricket1 = x1;
        cricket2 = x2;
        while(cricket1 < cricket2){
            cricket1 = cricket1 + v1;
            cricket2 = cricket2 + v2;
            }
        if(cricket1 == cricket2){
            printf("YES\n");
            }

        else{
            printf("NO\n");
            }
    }
    else{
        printf("Wrong inputs! Please try again.\n");
        printf("Remember, 0<=x1<x2<=1000 where the x1 is first position of first cricket etc.");
        }
return 0;
}
