# include<stdio.h>

int main(){
    int sum=0,n;
    printf("Enter the number for its multiplication table :");
    scanf("%d",&n);

    for (int i = 1; i <=10; i++)
    {
        /* code */
        printf("%d X %d = %d\n",n,i,n*i);
        sum=sum+(n*i);
    }
    printf("The sum of the above table is %d",sum);
    
    
    
    
 
    
    
    return 0;   
}