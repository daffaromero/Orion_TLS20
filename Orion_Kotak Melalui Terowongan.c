#include <stdio.h>
#include <stdlib.h>

int n;
struct Box{
   int length, width, height, volume;
};
int main(){
    int i;
    struct Box arr_box[i];

    printf("Input: amount of boxes (max 100) then length, width, height of the boxes (max length, width, height: 100)\n");
    scanf ("%d", &n);

    if(0<n && n<=100){
        for(i=0; i<n; i++){
            scanf ("%d %d %d", &arr_box[i].length, &arr_box[i].width, &arr_box[i].height);
        
            if(arr_box[i].length<=100 && arr_box[i].length>=1 && arr_box[i].width<=100 && arr_box[i].width>=1 && arr_box[i].height<=100 && arr_box[i].height>=1)
            arr_box[i].volume=arr_box[i].length*arr_box[i].width*arr_box[i].height;
            else exit(0);
        }

        printf("\nOutput:\n");  
            for(i=0; i<n; i++){
                if (arr_box[i].height < 41) printf("%d\n", arr_box[i].volume);                
            }
    }   
    else exit(0);
return 0;
}
