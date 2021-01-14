#include <stdio.h>



// student structure
//struct Student...
struct Student {
char firstName[50];
char lastName[50];
int age[100];
};

void printStudent(struct Student* student)
{
printf("Student: %s %s\n", student->firstName, student->lastName);
printf("Age: %d\n", student->age);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
for (int i = 0; i < num; i++) {
printStudent(students);
}
}


int main()
{
char input[256];

  // an array of students
  //xxx students;

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
printf("First name: ");
fgets(input, 50, stdin);
sscanf(input, "%s", students[numStudents].firstName);

printf("Last name: ");
fgets(input, 50, stdin);
sscanf(input, "%s", students[numStudents].lastName);

printf("Age: ");
fgets(input, 100, stdin);
students[numStudents].age = getInputNumber();

      numStudents++;
    ;}
  }
  
  printf("\nGoodbye!\n");
}
