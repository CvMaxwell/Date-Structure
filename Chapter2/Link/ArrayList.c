//顺序存储线性表的一般表示方法
//操作集 1.建立空表 2.查找某个元素 3.第i个位置插入元素 4.第i个元素删除元素
#include <stdio.h>
#define MAXSIZE 1000

List MakeEmpty(void);

typedef int ElementType;
typedef struct LNode *List;

struct LNode
{
    ElementType a[MAXSIZE];      //顺序存储
    int Last;                    //最后一个元素的位置(数组下标)  存储长度=Last+1
};

struct LNode L;
List PTrL;

int main()
{


    return 0;
}


List MakeEmpty(void)
{
    List PTrL;
    PTrL=(List)malloc(sizeof(struct LNode));
    PTrL->Last=-1;
    return PTrL;
}



















