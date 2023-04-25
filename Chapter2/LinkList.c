//链表的实现
//实现功能：1.求表长2.查找(1)序号查找(2)按值查找 3.整表创建（读取）4.整表删除

#include <stdio.h>
#include <stdlib.h>
#define ERROR -1

typedef int ElementType;
typedef struct LNode *List;
struct LNode 
{
    ElementType Date;
    List Next;
}; 
List PtrL;  //头指针
//以下为实现的一些基本操作
int Length(List PtrL);//求表长
List Read(); //链表读取
void Print( List L ); // 顺序打印链表 
int MakeList(List);      //整表创建             
int ClearList(List PtrL);//整表删除  1
ElementType Findit1(List PtrL,int n); //序号查找
int Findit2(List Ptrl,ElementType i);//元素查找
List insert(List L,int i,ElementType num);//第i个位置插入数字num
List Delete(List L,int i);//第i个位置删除结点
//


int main()
{ 
    PtrL=Read();
    printf("%d",Length(PtrL));
    ClearList(PtrL);

    return 0;
}

//

int Length(List PtrL)  //求表长           
{
    List p;
    int i=0;
    p=PtrL;

    while (p!=NULL)
    {
        i++;
        p=p->Next;
    }

    return i;
}

List Read()
{
    int a,i=0;       //a 记录链表长度 i 记录读取进程
    List PtrL,p;     //头指针
    scanf("%d",&a);
    
    PtrL=(List)malloc(sizeof(struct LNode));
    p=PtrL;
    scanf("%d",&(p->Date));

    while (p!=NULL)
    {   
        p->Next=(List)malloc(sizeof(struct LNode));
        p=p->Next;
        scanf("%d",&p->Date);
        if(i==a-2){
            p->Next=NULL;
            return PtrL;
        }
        i++;
      
    }
    
    return PtrL;

}

void Print( List L )   
{
    List p=L;
    
    while (p!=NULL)
    {
        printf("%d  ",p->Date);
        p=p->Next;
    }
    
    return;
} 


int ClearList(List PtrL)//整表删除
{
    List p,q;
    p=PtrL;
    while (p!=NULL)
    {
        q=p->Next;
        free(p);
        p=q;
    }
    PtrL=NULL;
    
    return 1;

}

ElementType Findit1(List PtrL,int n)
{   
    List p;
    int i;
    p=PtrL;
    while (p!=NULL && i<n)
    {
        /* code */
    }
    
    















}