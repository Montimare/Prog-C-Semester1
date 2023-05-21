#include "stdio.h"
#include "stdlib.h"

struct element
{
    int *a;
    struct element *next;
    int length;
};

void ausgabe(int *b, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", b[i]);
    }
}

void populateArray(int *array1, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Element %d: ", i);
        scanf(" %d", &array1[i]);
    }
}

int length;

int *arrayMaker()
{

    printf("gib array länge ");
    scanf("%d", &length);
    int *array1 = malloc(length * sizeof(int));
    populateArray(array1, length);
    return array1;
}

struct element *addToList(struct element *header)
{
    struct element *cursor = header;
    struct element *neuesElement = malloc(sizeof(struct element));
    neuesElement->next = NULL;
    neuesElement->a = arrayMaker();
    neuesElement->length = length;

    if (header == NULL)
    {
        return (neuesElement);
    }
    else
    {
        while (!(cursor->next == NULL))
        {
            cursor = cursor->next;
        }
        cursor->next = neuesElement;
        return header;
    }
}

struct element *removeFromList(struct element *header)
{
    struct element *cursor = header;
    struct element *cursor2 = NULL;
    while (!(cursor->next == NULL))
    {
        char found = 0;
        int arraylength = cursor->length;
        for (int i = 0; i < arraylength; i++)
        {
            if (cursor->a[i] == 5)
            {
                found = 1;
            }
        }
        if (found)
        {
            if (cursor2 == NULL)
            {
                header = cursor->next;
                free(cursor);
            }
            else
            {
                cursor2->next = cursor->next;
                free(cursor);
            }
        }

        cursor2 = cursor;
        cursor = cursor->next;
    }

    return header;
}

int main()
{
    struct element *header = addToList(NULL);
    for (int i = 0; i < 3; i++)
    {
        header = addToList(header);
    }
    struct element *cursor = header;
    while (!(cursor == NULL))
    {
        int arraylength = cursor->length;
        for (int i = 0; i < arraylength; i++)
        {
            printf("%d\n", cursor->a[i]);
        }
        cursor = cursor->next;
    }

    header = removeFromList(header);
    printf("HIER WIRD GELÖSCHT");
    cursor = header;
    while (!(cursor == NULL))
    {
        int arraylength = cursor->length;
        for (int i = 0; i < arraylength; i++)
        {
            printf("%d\n", cursor->a[i]);
        }
        cursor = cursor->next;
    }
    
}