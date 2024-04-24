# include<stdio.h>

void swap(int *a,int *b);

int main(){
    int x=5,y=6;
    printf("The value of a and b before swap %d and %d",x,y);
    swap(x,y);
    printf("The value of a and b after swap %d and %d",x,y);
    return 0;
}
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}