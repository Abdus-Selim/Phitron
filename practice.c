#include <stdio.h>

struct students
{
    int id;
    char name[20];
};

int main()
{
    struct students s1;
    scanf("%d %s\n", &s1.id, &s1.name);
    struct students s2;
    scanf("%d %s\n", &s2.id, &s2.name);

    printf("%d %s\n", s1.id, s1.name);
    printf("%d %s\n", s2.id, s2.name);
}
