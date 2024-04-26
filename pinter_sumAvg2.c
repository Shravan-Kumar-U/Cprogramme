// Write a program using a functioin which calculate the sum and average of two numbers .Use pointers and print the value of sum average in main
# include<stdio.h>
void sumAndavg(int a,int b,int *sum,float *avg){
    *sum = a+b;
    *avg = (float)*sum/2;
}


int main(){
    int i=6,j=7,sum;
    float avg;
    sumAndavg(i,j,&sum,&avg);
    printf("The sum of %d and %d is %d\n",i,j,sum);
    printf("The sum of %d and %d is %f",i,j,avg);
    
    return 0;
   
    


    
    
    
}
