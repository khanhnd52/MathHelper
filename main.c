#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.14;

void printMenu();

void computeDiskArea();

int main(int argc, char const *argv[])
{
  int choice;

  //chua bang 5 thi chua cho thoat
  do{
    printMenu();
    printf("Choose 1..5: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      computeDiskArea();
      break;
    case 2:
      printf("You choose to compute the rectangle area\n");
      break;
    case 5:
      printf("Bye bye. See you next time\n");
      break;
    
    default:
      break;
    }

  }while (choice != 5);
 
  

  return 0;
}

void printMenu() {
  printf("\n============================\n");
  printf("Welcome to Math Helper program\n");
  printf("Choose the follwing functions to play with:\n");
  printf("1. Compute the disk area\n");
  printf("2. Compute the rectangle area\n");
  printf("3. Compute the triangle area\n");
  printf("4. Compute the ... area\n");
  printf("5. Quit\n");
}

void computeDiskArea() {
  float radius;
  printf("You choose to compute the disk area\n");
  printf("Please input a radius (>0): ");
  scanf("%f", &radius);
  //float area = PI * pow(radius, 2);
  printf("The disk with r = %.2f has the area of %.2f\n", radius, (PI * pow(radius,2 )));
}
