#include "Linker_Header.h"
// /*
// Function: Genrate_list
// Description: Generate linker list
// Input: Pointer of List
// Output: Linker list
// */
void Generate_list(List *ptr){
    ptr->ls = NULL;
    ptr->Pointer = NULL;
    ptr->Size = 0;
}

/*
Function: NewNode
Description: Generate New Node 
Input: data of Node
Output: New Node
*/
NODE *New_Node(uint8_t data){
    NODE *NewNode = (NODE *)malloc(sizeof(NODE)); // Create Memory Size to put Node into
    NewNode->data = data;
    NewNode->next = NULL;
    return NewNode;
}

/*
Function: Pushback
Description: Add New Node to the end of list  
Input:
+ Node_Pointer: Point the Position that put New Node 
+ Data of Node
Output: New Node
*/
void Out_of_size(List * Node_Pointer,uint8_t Position){
    int check = 0;
    if(Node_Pointer->Size < Position) check = 1;
}

/*
Function: Pushback
Description: Add New Node to the end of list  
Input:
+ Node_Pointer: Point the Position that put New Node 
+ Data of Node
Output: New Node
*/
void Push_back(List *Node_Pointer, uint8_t data){
    NODE* addNode = New_Node(data);
    lastNode = Node_Pointer->Pointer;
    // Check_list();  
    if(Node_Pointer->Size == 0 ){
    Node_Pointer->ls = addNode; // Fist Node
    fistNode = addNode;
    }
    else                            Node_Pointer->Pointer->next = addNode; //After fist Node, Pointer of list which alway Point to Pevious addNode will get New Node after Pevious Node
   Node_Pointer->Pointer = addNode;// Pointer of List will Alway Point to Pevious addNode
   Node_Pointer->Size++; // Icrease Size for each Node available in list
}

/*
Function: Pop_Back
Description: Remove the Last Node of the list
Input:
+ Node_Pointer: Point the Position that put New Node 
Output: None
*/
void Pop_back(List *Node_Pointer){
    Node_Pointer->Pointer = lastNode;
    Node_Pointer->Pointer->next = NULL;
    Node_Pointer->Size --; 
}

/*
Function: Ease
Description: Remove Node from any Position of the list
Input:
+ Node_Pointer: Point the Position that put New Node 
+ Position
Output: None
*/
void Ease(List *Node_Pointer, uint8_t Position){ // nên thêm option xóa Node trong khoảng
    NODE *a;
    for(int i = 1 ; i <= Position ; i++){
        if(i == 1) currentNode = fistNode;
        else{
            Node_Pointer->Pointer = currentNode;
            currentNode = Node_Pointer->Pointer->next;
        }
    }
    a = currentNode;
    Node_Pointer->Pointer->next = currentNode->next;
    free(a);
    Node_Pointer->Size --;
}

/*
Function: Assign
Description: Radd New Node to Replace available Node from any Position of the list
Input:
+ Node_Pointer: Point the Position that put New Node 
+ Data of Node
+ Position
Output: None
*/
void Assign(List *Node_Pointer, uint8_t data, uint8_t Position){
    for(int i = 1 ; i <= Position ; i++){
        if(i == 1) currentNode = fistNode;
        else{
            Node_Pointer->Pointer = currentNode;
            currentNode = Node_Pointer->Pointer->next;
        }
    }
    currentNode->data = data;
}

/*
Function: Clear
Description: Remove all Node of list
Input:
+ Node_Pointer
Output: None
*/
void Clear(List *Node_Pointer){
    Node_Pointer->ls = NULL;
    Node_Pointer->Size = 0;
}

/*
Function: Display_Node
Description: Display available Node from any Position
Input:
+ Node_Pointer
+ Position
Output: Data of Node
*/
void Display_Node(List *Node_Pointer, uint8_t Position){
    for(int i = 1 ; i <= Position ; i++){
        if(i == 1) currentNode = fistNode;
        else{
            Node_Pointer->Pointer = currentNode;
            currentNode = Node_Pointer->Pointer->next;
        }
    }
    printf("Data of Node at Position %d is %d\n", Position,currentNode->data);
}

/*
Function: Display_list
Description: Display list of Node
Input:
+ Node_Pointer
+ Position
Output: Data of each Node from the list
*/
void Display_list(List *Node_Pointer){
    printf("Position     Data\n");
    for(int i = 1 ; i <= Node_Pointer->Size + 1 ; i++){
        if(i == 1) {
            currentNode = fistNode;
            printf("   %d          %d\n",i,currentNode->data);
        }
        else{
            Node_Pointer->Pointer = currentNode;
            currentNode = Node_Pointer->Pointer->next;
            printf("   %d          %d\n",i,currentNode->data);
        }
    }
}
