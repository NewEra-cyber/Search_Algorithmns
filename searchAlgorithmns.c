#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Array[100];
int hashArray[100];
int size, num;

void input();
void linearsearch(int key);
void sort();
void binarysearch(int key);
void hashfunction();
void hash_search(int key);

int main()
{
    int choice;
    clock_t t1, t2;
    double time_taken;

    printf("\nHow many numbers do you want to enter: ");
    scanf("%d", &size);

    input();

    do
    {
        printf("\n\n--- Menu ---");
        printf("\n1. Linear Search");
        printf("\n2. Binary Search");
        printf("\n3. Hashing");
        printf("\n0. Exit");
        printf("\nMake your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
            break;

        printf("Input search element: ");
        scanf("%d", &num);

        t1 = clock();

        if (choice == 1)
        {
            linearsearch(num);
        }
        else if (choice == 2)
        {
            binarysearch(num);
        }
        else if (choice == 3)
        {
            hashfunction();
            hash_search(num);
        }

        t2 = clock();

        time_taken = ((double)(t2 - t1)) / CLOCKS_PER_SEC;
        printf("\nTime taken for this algorithm: %f seconds", time_taken);

    } while (choice != 0);

    return 0;
}

void input()
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &Array[i]);
    }
}

void linearsearch(int key)
{
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (Array[i] == key)
        {
            printf("%d found at index %d.", key, i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("%d not found.", key);
}

void binarysearch(int key)
{
    printf("Not yet implemented");
}

void hash_search(int key)
{
    printf("Not yet implemented");
}