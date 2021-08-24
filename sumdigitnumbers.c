#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int a,b,c,d;
    scanf("%d",&n);
    a = n/10000;
    b = (n%1000)/100;
    c = (n%100)/10;
    d = (n%10);
    
    printf("%d",(a+b+c+d));
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}