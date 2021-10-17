#include <stdio.h>

int main()
{
    int box[] = {-3,0,4,1,11,57,2,10,-29,0,11};
    int temp;
    
    for(int i=0;i<sizeof(box)/sizeof(box[0]);i++){
        for(int j=0;j<sizeof(box)/sizeof(box[0])-i;j++){
            if(box[j]>box[j+1]){
                temp = box[j+1];
                box[j+1] = box[j];
                box[j] = temp;
            }
        }
    }
    
    for(int k=0;k<sizeof(box)/sizeof(box[0]);k++){
        printf("%d ", box[k]);
    }

    return 0;
}
