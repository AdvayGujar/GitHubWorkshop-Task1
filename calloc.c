#include<stdio.h>
#include <stdlib.h>
int main(){
int *ptr,i;
ptr=(int *) calloc (10,sizeof(int));
for(i=0;i<2;i++){
    scanf("%d",&ptr[i]);
}
for(i=0;i<2;i++){
    printf("%d\n",ptr[i]);
}



return 0;
}