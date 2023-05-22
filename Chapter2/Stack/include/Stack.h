#ifndef _STACK_H_
#define _STACK_H_

typedef int DateType;
typedef struct Stack *StackPrt;

struct Stack
{
    DateType date;
    StackPrt Next;
};



#endif