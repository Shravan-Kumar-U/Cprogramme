// Write a program using a functioin which calculate the sum and average of two numbers .Use pointers and print the value of sum average in main

# include<stdio.h>

int an(int *a,int *b){
    int sum,avg;
    sum=*a+*b;
    avg=(float)sum/2;
    printf("The sum of the %d and %d is %d\n",*a,*b,sum);
    printf("The avg of the %d and %d is %d\n",*a,*b,avg);
}

int main(){
    int a=4,b=5;
    an(&a,&b);

    return 0;
    


    
    
    
}
