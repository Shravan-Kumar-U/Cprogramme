
// looping are used to repeat similar part of a code snippet effeciently
// tyoes if loop
// 1.while loop
// 2.do while loop
// 3.for loop
// this code is for while loop
// condition for while loop is given below
// while (/* condition */)
// {
//     /* code */
// }
// About while loop
// we have to set a initial value for while loop and condition as well as stoping conditionn
// Eg : 1

// int main(){
//     int i=0;
//     while (i<10)
//     {
//         /* code */printf("hello world\n");
//         i++;
//     }
    
    
//     return 0;

// }
// out put will be the following 
// hello world
// hello world
// hello world
// hello world
// hello world
// hello world
// hello world
// hello world
// hello world
// hello world
// NOTE......
// If the condition is always true then the loop will be known as infinite loop
// Eg for infinte loop
// int i=11;
//     while (i<10)
//     {
//         /* code */printf("hello world\n");
//         i++;
//     }
    
    
//     return 0;

// }
// Q. Print the numbers 10 - 20 using while loop by initializing the value to 0.

# include<stdio.h>

int main(){
    int i=0;
    while (i<=20)
    {
        /* code */
        if(i>=10){
            printf("The value of i is %d\n",i);
        }
        i++;
    }
    
    return 0;
}