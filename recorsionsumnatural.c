# include<stdio.h>

int sum(int x);

int main(){
    int a = 5;
    printf("the sum of first %d number is %d",a,sum(a));

}
int sum(int x){
    if(x==0){
        return 0;
    }else if(x==1){
        return 1;
    }else{
        return x+sum(x-1);
    }
}