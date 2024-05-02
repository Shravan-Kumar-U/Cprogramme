

// Write a program to change the value of a variable to ten times of its current value.Write a function and pass the value by reference
# include<stdio.h>

int times(int *a){
    printf("%d",10*(*a));
}

int main(){
    int i=2;
    times(&i);
    return 0;

    


    
    
    
}
