//
// student.c
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"
#include "encrypt.h"


const char* STUFILE = "studentdata.txt";

// keeps track of the number of students in the students array
int numStudents = 0;

// holds the student pointer array
Student* students[100] = {0};

void createStudent(char* fname, char* lname, int age, int id)
{
  // createStudent dynamically creates a Student on the heap and adds that
  // student to the student array
  //  - the firstName and lastName strings should be dynamically created
  //    based on the size of the fname and lname args
  struct st {
  char fname[100];
  char lname[100];
  int age;
  long id;
  }


Student* st = (students*)malloc(sizeof(student));
  st->fname = (char)malloc((strlen(fname)+1)*sizeof(char));
  st->lname = (char)malloc((strlen(lname)+1)*sizeof(char));
  strcpy(st->fname, fname);
  strcpy(st->lname, lname);
  st->age = age;
  st->id = id;
  students[numStudents] = st;  
  numStudents++;
}


void deleteStudent(Student* student)
{
  // free the memory associated with a student including the strings
  free(st->fname);
  free(st->lname);  
  free(student);
}


void deleteStudents()
{
  // iterate over the students array deleting every student and setting te pointer
  // values to 0 and adjusting the numStudents to 0
  for (int i = 0; i < numStudents; i++) {
   deleteStudent(students[i]);
   students[i]=0;
 }
  numStudents = 0;
}


void saveStudents(int key)
{
  // save all students in the student array to a file 'studentdata.txt' overwriting
  // any existing file
  //   - the format of the file is one line per student as follows fname lname age id:
  //       tom thumb 15 1234 
  //       james dean 21 2345 
  //       katy jones 18 4532 
  char buff[256];
  FILE* fp;  
  fp=fopen("studentdata.txt", "w");
  for (int i = 0; i < numStudents; i++) {
   Student* st = students[i];
   sprintf(buff, "%s %s %d %ld", st->fname, st->lname, st->age, st->id);
   if (key != 0) {
   caesarEncrypt(buff, key);
  }
  fprintf(fp, "%s\n", buff);
 }
fclose(fp);
}


void loadStudents(int key)
{

  // load the students from the data file overwriting all exisiting students in memory

  if (numStudents > 0) {
   deleteStudents();
 }

  char fbuff[256];
  char lbuff[256];
  char abuff[256];
  char idbuff[256];
  
  fp = fopen("studentdata.txt", "r");
if (fp) {
 int match = fscanf("%s %s %s %s", fbuff, lbuff, abuff, idbuff);
if (match == 4) {  
if (key != 0) {
  caesarDecrypt(fbuff, key);
  caesarDecrypt(lbuff, key); 
  caesarDecrypt(abuff, key);
  caesarDecrypt(idbuff, key);
  }

  int age;
  sscanf(abuff, "%d", &age);
  long id;
  sscanf(idbuff, "%ld", &id);
  createStudent(fbuff, lbuff, age, id);
 }
}

void printStudent(Student* student)
{
  printf("  Student: %s %s\n", student->firstName, student->lastName);
  printf("    age: %d\n", student->age);
  printf("    id: %ld\n", student->id); 
}


void printStudents()
{
   for (int i = 0; i < numStudents; i++) {
    printf("\n----- student %d ------\n", i);
    printStudent(students[i]);
  }
}




