#include <stdio.h>

struct person
{
  int age;
  char name[20];
};

int main()
{
  int x = 42, y = 0;
  struct person person1;
  person1.age = 25;
  strcpy(person1.name, "John Doe");

  if (x > 0 && x < 100)
    y++;
  else
  {
    y--;
  }
}
