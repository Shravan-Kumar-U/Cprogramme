# include<stdio.h>

int main(){
 int n;
    printf("Enter the number for its multiplication table :");
    scanf("%d",&n);
    for (int i = 10; i; i--)
    {
        /* code */
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
    
    return 0;   
}