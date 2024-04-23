# include<stdio.h>

// Write a program to print the address of a variable use this adress to get the value of this variable

int main(){
    int i=5;
    int *j;
    j=&i;
    printf("The adress of the i is  %d\n",j);
    printf("The value of i using pinter is %d\n",*j);
    printf("another %d",*(&i));
    return 0;
    
    
}
