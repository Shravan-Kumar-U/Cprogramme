// To calculate income tax paid an employee to the govt as per the salary mentioned below
// income salery 2.5L t0 5L taxt 5%
// 5L to 10L tax 20%
// above 10L tax 30% 
// /below 2.5 L no tax required

# include<stdio.h>

int main(){
    float salary,tax=0;
    printf("Entere your salary :");
    scanf("%f",&salary);
    
    
    if(salary>=250000 && 500000<=salary){
        tax = tax+0.05*(salary-250000);
    }
    if(salary>=500000 && 1000000<salary){
        tax = tax+0.2*(salary-500000);
    }
    if(salary>1000000){
        tax = tax+0.3*(salary-1000000);
    }
    printf("\nThe tax you have to pay is %f",tax);
    return 0;
    

}