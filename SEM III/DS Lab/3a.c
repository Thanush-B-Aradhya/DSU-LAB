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
    
    if (avgmarks >= 90) {
    	return "O"
    } else if (avgmarks >= 80) {
    	return "A+"
    } else if (avgmarks >= 70) {
        return "A";
    } else if (avgmarks >= 60) {
        return "B+";
    } else if (avgmarks >= 55) {
        return "B";
    } else if (avgmarks >= 50) {
        return "C";
    } else if (avgmarks >= 40) {
        return "P";
    } else {
        return "F";
    }
}

int main() {
    struct database student[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Enter the Name of Student: ");
        scanf("%s", student[i].Name);
        
        printf("Enter the Student ID: ");
        scanf("%d", &student[i].Student_ID);
        
        student[i].totalmarks = 0.0;
        
        for (int j = 0; j < 5; j++) {
            printf("Enter the marks of subject-%d: ", j + 1);
            scanf("%f", &student[i].Submarks[j]);
            student[i].totalmarks += student[i].Submarks[j];
        }
        student[i].avgmarks = student[i].totalmarks / 5.0;
    }

    // Diplaying the details  
    for (int i = 0; i < 5; i++) {
        printf("\nDetails of Student %d:\n", i + 1);
        printf("Name: %s\n", student[i].Name);
        printf("Student ID: %d\n", student[i].Student_ID);
        printf("Average Marks: %.2f\n", student[i].avgmarks);
        printf("Grade: %s\n", gradecal(student[i].avgmarks));
    }
    
    return 0;
}

