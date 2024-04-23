# include<stdio.h>
// Types of function call
// Call by value

// ondhu vale annu finction ge kottu nantra function alli erva work madlikke heludu
void wrongswap(int a,int b);

int main(){
    int x=4,y=9;
    printf("The value of a and b before swap is %d and %d \n",x,y);
    wrongswap(x,y);
    printf("The value of a and b after swap is %d and %d \n",x,y);

    
    
    
    
    return 0;
}
void wrongswap(int a,int b){
    int temp;
    temp = a;
    a=b;
    b= temp;

}