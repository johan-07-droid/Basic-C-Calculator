#include <stdio.h>
void calc(int a, char b, int c, int d){
        
    if(b == '+'){
        printf("Answer => %d\n", a + c);
    }
    else if(b == '-'){
        printf("Answer => %d\n", a - c);
    }
    else if(b == '*'){
        printf("Answer => %d\n", a * c);
    }
    else if(b == '/'){
        if(c == 0){
            printf("INFINITY or UNDEFINED\n");
        } else{
            printf("Answer => %d\n", a / c);
        }
    }
    else
    printf("INVALID OPERATOR\n");

}
int main(void){
    int a, c, d;
    char b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter Operators (+, -, *, /): ");
    scanf(" %c", &b);
    printf("Enter 2nd number: ");
    scanf("%d", &c);
    calc(a, b, c, d);

}