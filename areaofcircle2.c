#include <stdio.h>
#include <math.h>

// for testing only - do not change
float getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
float areaOfCircle(float radius)
{
float area;
area=M_PI*radius*radius;
return area;
}


int main(int argc, char* argv[]) 
{
char input[256];
int high;
int low;
printf("Enter your start number\n");
fgets(input, 256, stdin);
sscanf(input, "%f", &low);
printf("Enter your end number\n");
fgets(input, 256, stdin);
sscanf(input, "%f", &high); 

if (high <= low) {
printf("Please enter a number greater than the first\n");
fgets(input, 256, stdin);
sscanf(input, "%f", &high);
}
else {
printf("Calculating are of circle starting at %f, and ending at %f\n", low, high);
for (float k = low; k <= high; k++) {
float a = areaOfCircle(k);
printf("The area of your circle with a radius %f is %f\n", k, a);
}
}

 // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  float start = 5.2;
  int reps = 3;
  
  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  // start and end

for (float i = start; i < reps; i++)
{
float r = areaOfCircle(i);
printf("The area of your circle with radius %f is %f\n", start,r);
}
}
