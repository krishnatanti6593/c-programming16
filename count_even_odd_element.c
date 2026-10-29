#include<stdio.h>
int main(){
    int a[5],count=0,c=0;
    printf("enter the array\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            count++;
        }
        else{
            c++;
        }
    }
    printf(" EVEN = %d\n",count);
    printf("ODD = %d",c);
    return 0;
}