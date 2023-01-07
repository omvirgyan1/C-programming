// 19.	Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage < 40% : Grade F

#include <stdio.h>
int main() {
  int physics, chemistry, biology, math, computer;
  double percentage;

  printf("Enter marks for Physics: ");
  scanf("%d", &physics);
  printf("Enter marks for Chemistry: ");
  scanf("%d", &chemistry);
  printf("Enter marks for Biology: ");
  scanf("%d", &biology);
  printf("Enter marks for Mathematics: ");
  scanf("%d", &math);
  printf("Enter marks for Computer: ");
  scanf("%d", &computer);
  percentage = (physics + chemistry + biology + math + computer) / 5.0;

  if (percentage >= 90) {
    printf("Grade: A\n");
  } else if (percentage >= 80) {
    printf("Grade: B\n");
  } else if (percentage >= 70) {
    printf("Grade: C\n");
  } else if (percentage >= 60) {
    printf("Grade: D\n");
  } else if (percentage >= 40) {
    printf("Grade: E\n");
  } else {
    printf("Grade: F\n");
  }
  return 0;
}
