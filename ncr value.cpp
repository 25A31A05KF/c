#include <stdio.h> 
int fact(int n); 
int main() 
{ 
    int n,r,nCr; 
    printf("Enter n value: "); 
    scanf("%d", &n); 
    printf("Enter r value: "); 
    scanf("%d", &r); 
    nCr=fact(n)/(fact(r)*fact(n-r)); 
    printf("The Value of C(%d,%d) is: %d",n,r,nCr); 
} 
int fact(int n) 
{ 
    int i,f=1; 
    for(i=1;i<=n;i++) 
    { 
        f=f*i; 
    } 
    return f; 
}
