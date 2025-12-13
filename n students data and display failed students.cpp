#include <stdio.h> 
#include <stdlib.h> 
struct Student  
{ 
    char name[50]; 
    int marks; 
}; 
int main()  
{ 
    int n,i; 
    printf("Enter the number of students: "); 
    scanf("%d", &n); 
    struct Student *ptr = (struct Student *)calloc(n, sizeof(struct Student)); 
    if (ptr==NULL)  
    { 
        printf("Memory allocation failed. Exit..."); 
        exit(0); 
    } 
    for(i=0;i<n;i++)  
    { 
        printf("Enter name of student %d: ",i+1); 
        scanf("%s",ptr[i].name); 
        printf("Enter marks of student %d: ",i+1); 
        scanf("%d", &ptr[i].marks); 
    } 
    printf("\nStudents who failed:\n"); 
    printf("Name\tMarks\n"); 
    for(i=0;i<n;i++)  
    { 
        if(ptr[i].marks<40)  
        { 
            printf("%s\t%d\n", ptr[i].name, ptr[i].marks); 
        } 
    } 
    free(ptr); 
    return 0;
}
