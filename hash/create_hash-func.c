#include "main.h"

//* Functin to create a new Hash table into memory and also create it's items

// create item first...
Ht_item* create_item(char* key, char* value)
{   
    // create a pointer to a new hash table item
    Ht_item* item = (Ht_item*) malloc(sizeof(Ht_item));
    item->key = (char*) malloc(strlen(key) + 1);
    item->value = (char*) malloc(strlen(value) + 1);

    strcpy(item->key, key);
    strcpy(item->value, value);

    return item;
}

// create table
HashTable* create_table(int size)
{
    HashTable* table = (HashTable*) malloc(sizeof(HashTable));
    table->size = size;
    table->count = 0;
    table->items = (Ht_item**) calloc(table->size, sizeof(Ht_item*));

    for (int i = 0; i < table->size; i++)
    {
        table->items[i] = NULL;
    }
    
    return table;
}