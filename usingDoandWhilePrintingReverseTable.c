# include<stdio.h>

int main(){
    int n=4;
    int i=10;
    int j=10;
    while (i)
    {
        /* code */
        printf("4 X %d = %d\n",i,n*i);
        i--;
    }
    printf("\n");
    printf("************************************************\n");
    do
    {
        /* code */
        printf("4 X %d = %d\n",j,n*j);
        j--;
    } while (j);
    
    
    
    return 0;
}