#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addBook();
void display();

int i = 0, j;

struct Library
{
    char title[30];
    char author[30];
    int price;
} b[30];

void addBook()
{
    printf("\nEnter your Title:");
    scanf("%s", &b[i].title);
    printf("\nEnter your Author:");
    scanf("%s", &b[i].author);
    printf("\nEnter your Price:");
    scanf("%d", &b[i].price);
    i++;
    printf("\nBook Successfully Added to Database....");
    printf("\n");
}

void display()
{
    printf("\nTitle\t\tAuthor\t\tPrice");
    for (j = 0; j < i; j++)
    {
        printf("\n%s\t\t%s\t\t%d", b[j].title, b[j].author, b[j].price);
    }
    printf("\n");
}

int main()
{
    int ch;
    do
    {
        printf("\n1.Add Book\n2.Display Books\n3.Exit\n\nSelect an operation:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            addBook();
            break;

        case 2:
            display();
            break;

        case 3:
            exit(1);
            break;

        default:
            break;
        }

    } while (ch != 3);
    return 0;
}