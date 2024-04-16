# include<stdio.h>

int far(float n);


int main(){
    int n;
    printf("Enter the temperature :");
    scanf("%d",&n);
    float c=far(n);
    printf("The farenHeat conversion is %f",c);
    
    
    return 0;
}
int far(float n){
    float celc = (n*(9/5)+32);
    return celc;

}