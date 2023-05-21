#include <stdlib.h>
#include <stdio.h>

struct IDCard
{
    int id;
    struct IDCard *next;
};

struct IDCard *addToList(struct IDCard *list)
{
    int identifier = 0;
    struct IDCard *cursor = list;
    struct IDCard *newElement = malloc(sizeof(struct IDCard));
    newElement->id = identifier++;
    newElement->next = NULL;

    if (list == NULL)
    {
        return (newElement);
    }
    else
    {
        while (cursor -> next != NULL){
            cursor = cursor -> next;
        }
        cursor ->next = newElement;
        return (list);
    }

}

int main()
{
    addToList(NULL);

    return 0;
}