// Call by value
#include<stdio.h>
int sum(int x, int y){
    return x + y;
}
int main(){
    int x=10;
    int y=20;
    int data = sum(x, y);
    printf("%d", data);
    printf("\n%d", x + y);

    return 0;
}
