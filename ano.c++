#include <stdio.h>
int main()
{
    char names[100] [20];
    int rolls[20];
    int m1[20], m2[20], m3[20];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", names[i]);
        printf("Enter roll number: ");
        scanf("%d", &rolls[i]);
        printf("Enter marks of Enlish, Nepali and Math:");
        scanf("%d %d %d", &m1[i], &m2[i], &m3[i]);
    }
    printf("Name\tRoll.No\tEnglish\tNepali\tMath\n");
    for ( i = 0; i < 5; i++)
    {
        if (m1[i] >= 40 && m2[i] >= 40 && m3[i] >= 40)
        {
            printf("%s\t%d\t%d\t%d\t%d\n",names[i],rolls[i],m1[i],m2[i],m3[i]);
        }
    }
    
}