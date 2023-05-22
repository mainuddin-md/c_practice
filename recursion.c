#include <stdio.h>

int factorial(x) {
    if(x==1)
    return 1;
    else
    return x*function(x-1);
    
}
int main () {
    int x;
    printf("Input any number of: ");
    scanf("%d",&x);
    printf("number of %d", factorial(x));

}