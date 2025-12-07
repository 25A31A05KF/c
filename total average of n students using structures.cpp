 
#include <stdio.h> 
struct Student  
{ 
    char name[50]; 
    int marks; 
}; 
int main()  
{ 
    int n,i,total=0;  
    float average; 
    printf("Enter the number of students: "); 
    scanf("%d", &n); 
    struct Student s[n]; // Array of structure 
    for(i=0;i<n;i++)  
    { 
        printf("Enter name of student %d: ",i+1); 
        scanf("%s", s[i].name); 
        printf("Enter marks of student %d: ",i+1); 
        scanf("%d", &s[i].marks); 
    } 
    for(i=0;i<n;i++)  
    { 
        total += s[i].marks; 
    } 
    average=(float)total/n; 
    printf("\nTotal marks of all students: %d\n", total); 
    printf("Average marks of all students: %.2f", average);
	return 0; 
}
