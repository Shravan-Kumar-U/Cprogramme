# include<stdio.h>

int fact(int x);

int main(){
    int a=5;
    printf("The factorial of %d is %d",a,fact(a));

    return 0;
   
}
int fact(int x){
    if(x==0||x==1){
        return 1;
    }else{
        return x*fact(x-1);
    }
}