//秦九韶算法 计算多项式的值
//每秒走过的时钟打点数 CLK_TCK

#define MAXK 1e7
#include <stdio.h>
#include <time.h>
#include <math.h>

clock_t start,stop;
double duration;


int func1(int n,double a[],double x);
int func2(int n,double a[],double x);
int func3(int n,double a[],double x);


int main()
{   

    double a[4]={1,1,1,1};
    double x=2.0;
    int n=3;
    double result;

    result=func1(n,a,x);

    printf("result=%lf\n",result);


    // start=clock();
    // for(int i = 0;i<MAXK;i++)
    // {
    //     func1();
    // }
    

    // stop=clock();
    // duration=((double)(stop-start))/CLK_TCK/1e7;                                  //运行时间统计模块
    // printf("tick1=%lf\nduration=%.9lf",(double)(stop-start)/1e7,duration);

    return 0;
}


int func1(int n,double a[],double x)
{
    double p=a[n]*x;

    for (int i = n; i > 1; i--)
    {
        p=(a[n-1]+p)*x; //第一种写法

    }
    
    return (p+a[0]);
}

int func2(int n,double a[],double x)
{
    double p=a[n];

    for (int i = n; i > 0; i--)
    {
       p=a[n-1]+p*x; //第二种写法  很明显第二种写法更直观

    }
    
    return (p+a[0]);
}










