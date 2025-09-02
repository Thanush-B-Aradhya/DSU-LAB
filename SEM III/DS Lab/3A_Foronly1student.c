#include <stdio.h>

struct database {
    int Student_ID;
    char Name[50];
    char grade[3];
    float Submarks[5];
    float totalmarks;
    float avgmarks;
};

char* gradecal(float avgmarks) {
    
    if (avgmarks >= 90)
    	return "O";
    else if (avgmarks >= 80)
    	return "A+";
    else if (avgmarks >= 70)
        return "A";
    else if (avgmarks >= 60)
        return "B+";
    else if (avgmarks >= 55)
        return "B";
    else if (avgmarks >= 50)
        return "C";
    else if (avgmarks >= 40)
        return "P";
    else
        return "F";
  
}

int main() {
        struct database student;
    
   
        printf("Enter the Name of Student: ");
        scanf("%s", student.Name);
        
        printf("Enter the Student ID: ");
        scanf("%d", &student.Student_ID);
        
        student.totalmarks = 0.0;
        
        for (int j=0; j<5; j++)
        {
            printf("Enter the marks of subject-%d: ", j + 1);
            scanf("%f", &student.Submarks[j]);
            student.totalmarks += student.Submarks[j];
        }
        student.avgmarks = student.totalmarks / 5.0;
 
        printf("\nDetails of Student :\n");
        printf("Name: %s\n", student.Name);
        printf("Student ID: %d\n", student.Student_ID);
        printf("Average Marks: %.2f\n", student.avgmarks);
        printf("Grade: %s\n", gradecal(student.avgmarks));
    
    return 0;
}
