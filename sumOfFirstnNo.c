# include<stdio.h>

int main(){
    int sum=0,n,i=0;
    printf("Enter the  first n number for its sum ");
    scanf("%d",&n);
    while (i<=n)
    {
        sum+=i;
        i++;
    }
    
    
    printf("The sum of first %d number is %d",n,sum);
    
 
    
    
    return 0;   
}