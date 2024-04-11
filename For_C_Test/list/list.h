//list.h
#include<stdio.h>
#include<malloc.h>

struct sigle_node
{
    char data;
    struct sigle_node *next;
};
void list_menu();
void list_create(char data);
void list_insert();
void list_delete();
void list_traverse();
void list_search();
void list_getlength();
void list_reverse();
void list_sort();
