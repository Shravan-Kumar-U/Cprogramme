# include<stdio.h>

int main(){
    int fact=1,n;
    printf("Enter the number for its factorial :");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        /* code */
        fact*=i;
        
    }
    printf("The factorial of first %d number is %d",n,fact);
    
    
 
    
    
    return 0;   
}