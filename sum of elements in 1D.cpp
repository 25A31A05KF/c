#include <stdio.h> 
#include <stdlib.h> 
int main()  
{ 
    int n,*ptr,i,sum;  
    printf("Enter no.of elements: "); 
    scanf("%d", &n); 
    ptr=(int *)malloc(n*sizeof(int)); 
    if(ptr==NULL)  
    { 
        printf("Memory allocation failed. Exit.."); 
        exit(0); 
    } 
    printf("Enter elements of the array:"); 
    for(i=0;i<n;i++)  
    { 
          scanf("%d",(ptr+i)); 
    } 
    sum = 0; 
    for(i=0;i<n;i++)  
    { 
        sum=sum+*(ptr+i); 
    } 
    printf("The sum of all array elements is: %d\n",sum); 
    free(ptr);
    return 0;
}
