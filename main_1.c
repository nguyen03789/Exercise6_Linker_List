#include "Linker.c"
#include "Linker_Header.h"

int main(int argc, char const *argv[])
{
    List list_Pointer;
    Generate_list(&list_Pointer);
    Push_back(&list_Pointer,1);
    Push_back(&list_Pointer,3);
    Push_back(&list_Pointer,5);
    Push_back(&list_Pointer,7);
    Push_back(&list_Pointer,9);
    Push_back(&list_Pointer,11);
    Pop_back(&list_Pointer);
    Ease(&list_Pointer,4);
    Assign(&list_Pointer,50,2);
    Clear(&list_Pointer);
    Display_Node(&list_Pointer,2);
    Display_list(&list_Pointer);
    return 0;
}
