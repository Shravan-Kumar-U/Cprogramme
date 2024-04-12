# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){
    int number,guess,attem=1;
    srand(time(0));
    number=rand()%100+1;
    // printf("%d",number);
    
    do
    {
        printf("Enter the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess<number){
            printf("Enter heigher number please...\n");
        }else if(guess>number){
            printf("Enter lower number please...\n");
        }else{
            printf("You guessed the number in %d attempts",attem);
        }
        attem++;
        /* code */

    } while (number != guess);
    return 0;
    

}