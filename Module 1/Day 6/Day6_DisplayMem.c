#include <stdio.h>

struct Student {
    char StudentName[20];
    int StudentId;
    float StudentMarks;
};

void displayStudents(const struct Student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1); 
        printf("Name: %s\n", students[i].StudentName);
        printf("ID: %d\n", students[i].StudentId);
        printf("Marks: %.2f\n", students[i].StudentMarks);
        printf("\n");
    }
}
int main() {
  struct Student students[3];
  strcpy( students[0].StudentName, "Jack "); 
  students[0].StudentId = 12345;
  students[0].StudentMarks = 33.5;
  strcpy( students[1].StudentName, "Elizbeth ");
  students[1].StudentId = 67890;
  students[1].StudentMarks = 89.2;
  strcpy(students[2].StudentName, "Michael "); 
  students[2].StudentId = 34567;
  students[2].StudentMarks = 75.1;

  displayStudents(students, 3);

  return 0;
}

