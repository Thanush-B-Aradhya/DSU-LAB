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
    struct database *ptr = &student;

    printf("Enter the Name of Student: ");
    scanf("%s", ptr->Name);
    
    printf("Enter the Student ID: ");
    scanf("%d", &ptr->Student_ID);
    
    ptr->totalmarks = 0.0;

    for (int j = 0; j < 5; j++) {
        printf("Enter the marks of subject-%d: ", j + 1);
        scanf("%f", &ptr->Submarks[j]);
        ptr->totalmarks += ptr->Submarks[j];
    }

    ptr->avgmarks = ptr->totalmarks / 5.0;

    printf("\nDetails of Student:\n");
    printf("Name: %s\n", ptr->Name);
    printf("Student ID: %d\n", ptr->Student_ID);
    printf("Average Marks: %.2f\n", ptr->avgmarks);
    printf("Grade: %s\n", gradecal(ptr->avgmarks));
    
    return 0;
}

