// write a progame to print the value of a variable i by "pointer to pointer" type of varibale

# include<stdio.h>



int main(){
    int i=5;
    int *j=&i;
    int **k=&j;
    printf("The value of i using pinter to pointer is %d",**k);
   return 0;
    


    
    
    
}
