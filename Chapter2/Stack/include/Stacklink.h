#ifndef _STACK_H_
#define _STACK_H_

typedef int DataType;
typedef struct SNode *Stack;
struct SNode
{
    DataType Data;
    Stack Next;
};
Stack CreateEmpty(void);        //建立空栈
int IsEmpty(Stack S); 
void Push(Stack S,DataType item); //进栈
DataType Pop(Stack S);            //出栈
void Delete(Stack S);             //删除栈

#endif