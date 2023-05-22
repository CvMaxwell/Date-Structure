#include <stdio.h>
#include <stdlib.h>

#include "./include/Stacklink.h"

Stack CreateEmpty(void){
    Stack S;
    S=(Stack)malloc(sizeof(struct SNode));
    S->Next=NULL;
    return S;
}
void Push(Stack S,DataType item){
    
}

void Delete(Stack S){
    Stack p;
 
    
}

int IsEmpty(Stack S){
    if (S->Next==NULL)
    {
        return 0;
    }
    else{
        return 1;
    }
}

