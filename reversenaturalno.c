// Decrement for loop

# include<stdio.h>

int main(){
    int n;
    printf("Enter the natural number :");
    scanf("%d",&n);
    
    for(int i=n;i;i--){
        printf("%d\n",i);
    }
    return 0;
    
}