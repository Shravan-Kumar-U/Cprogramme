# include<stdio.h>
// 65 90
int main(){
    char a;
    printf("Enter the charecter :");
    scanf("%c",&a);
    if(a>=97 && a<=135){
        printf("The entered charecter is lower case");
    }else{
        printf("Not");
    }
}