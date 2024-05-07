# include<stdio.h>

int main(){
    int rating;
    printf("Enter your rating between 1-5\n");
    scanf("%d",&rating);
    switch (rating)
    {
    case /* constant-expression */1:
        /* code */printf("Outstanding App");
        break;
    case 2:
        printf("Excellenet App");
        break;
    case 3 :
        printf("Good app");
        break;
    case 4 :
        printf("Not Good");
        break;
    case 5 :
        printf("Bad App");
        break;
    
    default:
        printf("Invalid rating");
        break;
    }
    return 0;
}