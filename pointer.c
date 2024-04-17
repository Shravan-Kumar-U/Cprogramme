# include<stdio.h>
// Pointer is used to store the adress of the another variable


int main(){
    int i=8;
    int *j;
    j=&i;
    printf("%u",&i);
    printf("%u",&j);
    printf("%d",*j);
    
    
    return 0;
}
