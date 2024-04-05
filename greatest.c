# include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the four number :");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("%d is the biggest number",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is the biggest number",b);
    }
    else if(c>a && c>b && c>d){
        printf("%d is the biggest number",c);
    }
    else if(d>a && d>b && d>c){
        printf("%d is the biggest number",d);
    }
    return 0;
}