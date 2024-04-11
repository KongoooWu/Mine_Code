//list.c
#include "list.h"
void list_menu()
{
    printf("***list_menu***\n");
    list_create('m');
    /*
    list_insert();
    list_delete();
    list_traverse();
    list_search();
    list_getlength();
    list_reverse();
    list_sort();
    */
    printf("***************\n");
}
void list_create(char data)
{
    if(data == 'm')
    {
        printf("---list create\n");
        return;
    }
    struct sigle_node* head = NULL;
    
    head = (struct sigle_node*)malloc(sizeof(struct sigle_node));
    if(head == NULL)
    {
        printf("Malloc fail!\n");
        return;
    }
    head->data = data;
    head->next = NULL;

    printf("sigle list create success, data is < %c > ,point to NULL\n",head->data);
    return;
}
void list_insert()
{

}
void list_delete()
{

}
void list_traverse()
{

}
void list_search()
{

}
void list_getlength()
{

}
void list_reverse()
{

}
void list_sort()
{

}

