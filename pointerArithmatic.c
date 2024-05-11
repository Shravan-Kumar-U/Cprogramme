# include<stdio.h>



int main(){
    int i =0;
    int *ptr = &i;
    printf("The adress of i is %d\n",ptr);
    ptr++;
    printf("The adress of i is %d",ptr);//we can add(ptr++) the pointer and create another adress space for storing the data as well as we can substract the pointer (ptr--)
    
    
    
    return 0;
}
