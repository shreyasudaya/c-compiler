#include <stdio.h>

struct person
{
    int id;
    int score;
};

int main()
{
    int x = 1, y = 0;
    struct person person1;
    person1.id = 1;
    person1.score = 90;

    if (x >= 1 && x <= 10)
    {
        y++;
    }
    else
    {
        y--;
    }
}
