# include<stdio.h>



int main(){
    int a,b,choice,result;
    printf("Enter the choice\n 1 for sum \n 2 for substraction \n 3 for multipication \n 4 for modulus\n");
    scanf("%d",&choice);
    printf("Enter the two numbers :");
    scanf("%d %d",&a,&b);
    switch (choice)
    {
    case 1:
        result=a+b;
        printf("The sum of %d and %d is %d",a,b,result);

        break;
    case 2:
        result=a-b;
        printf("The substration of %d and %d is %d",a,b,result);

        break;
    case 3:
        result=a*b;
        printf("The multiplaction of %d and %d is %d",a,b,result);

        break;
    case 4:
        result=a/b;
        printf("The division of %d and %d is %d",a,b,result);

        break;
    case 5:
        result=a%b;
        printf("The modulus  of %d and %d is %d",a,b,result);

        break;
    
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
    
}
