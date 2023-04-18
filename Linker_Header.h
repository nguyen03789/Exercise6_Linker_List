#ifndef Linker
#define Linker 

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h> 

// This Struct get data of the Node
typedef struct NODE
{
    uint8_t data;
    struct NODE *next;
} NODE;

// This Struct get data of the list
typedef struct {
    NODE *ls; // Fist Node
    NODE *Pointer;
    int Size;
}List;

NODE* fistNode;
NODE* currentNode;
NODE* lastNode;

// Create list of Node
void Generate_list(List *ptr);
// Create Node which add to list
NODE* NewNode(uint8_t data);
// Check Out of size
void Out_of_size(List *Node_Pointer, uint8_t Position);
// add New Node to the end of the list
void Push_back(List *Node_Pointer, uint8_t data);
// add New Node to Replace available Node from any Position of the list
void Assign(List *Node_Pointer, uint8_t data, uint8_t Position);
// Remove the Last Node of the list
void Popback(List *Node_Pointer);
// Remove Node from any Position of the list
void Ease(List *Node_Pointer, uint8_t Position);
// Remove all Node of list
void Clear(List *Node_Pointer);
// Display available Node from any Position
void Display_Node(List *Node_Pointer, uint8_t Position);
// Display list of Node
void Display_list(List *Node_Pointer);

#endif
