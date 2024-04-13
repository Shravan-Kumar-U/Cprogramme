# include<stdio.h>

int main(){
    int i=2,n,prime=0;
    printf("Enter the number to check wether the  number is prime or not :");
    scanf("%d",&n);
    while (i<n)
    {
        if(n%i==0){
            prime=1;
        }
        i++;
    }
    
    if(prime==1){
        printf("%d is not a prime number",n);
    }else{
        printf("%d is a prime number",n);
    }
    
    
    
    return 0;   
}