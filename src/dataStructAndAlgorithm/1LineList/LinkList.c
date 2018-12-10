//
// Created by Administrator on 2018/12/9 0009.
//

//预定义常量类
//函数结果状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef int Status;
//Status是函数的类型，其值是函数结果状态代码



//定义 单向链表的数据结构体

#include <malloc.h>
#include <stdio.h>

typedef struct LNode{
    int data;  //数据域
    struct LNode * next; //指针域
}LNode,* LinkList;       //定义了结构类型LNode的指针类型为LinkList,

//指针变量LinkList 用于存放LNode结构类型变量的地址
//若L 是LinkList类型的变量，则L只能指向LNode结构类型的某一节点

//单链表的基本操作

//1、创建
void createList_L(LinkList L, int n ){
    //逆位序输入n个元素，简历带头节点的单链表L
    L = (LinkList)malloc(sizeof(LNode)); //生成头结点,分配内存空间和内存地址
    L->next = NULL;
    for(int i = n;i > 0; --i){
        LinkList p = (LinkList)malloc(sizeof(LNode)); // 生成新节点
        scanf((const char *) &p->data);                               // 输入元素值
        p->next = NULL;L->next = p;                   // 新生成的元素，插入到头节点之后
    }
}

//2、查找操作（找出链表中的第i（1<=i<=n）个节点，并返回该节点数据域的值）
//由于单链表是一种顺序存取结构，要找到第i个元素，则必须先找到地i-1个元素，因为单链表一般用头指针表示，所以必须从头结点开始搜索
Status getElem(LinkList L,int i,int data){
    LinkList p = L->next; //初始化p指向头结点，
    int j = 1 ;           //计数器j 置为1
    while(p && j < i ){
        p = p -> next;  // 顺指针向后查找，直到p指向第i个元素或p为空
        ++j;
    }
    if(!p || j > i){ // 当 i<0 或者 i>n 时，链表中无第i个节点
        return ERROR;
    }
    data = p->data; //获取第i个元素的值
    return OK;
}

//3、插入操作（将元素e 插入到单链表中的第i个元素之前，显然i的合法值是 1<= i <= n+1, n为插入表前 链表的长度）
Status ListInsert_L(LinkList L ,int i ,int data){
    LinkList  p = L;
    int j = 0;
    while (p && j < i-1){
        p = p->next;
        ++j;
    }
    if(!p || j > i-1) return ERROR;
    LinkList s = (LinkList)malloc(sizeof(LNode));
    s->data = data;
    s->next =  p->next;
    p->next = s;
    return OK;
}

//4、删除操作（删除第i个元素，i的合法值是 1<= i <= n）,注意头结点不能删除
Status listDelete_L(LinkList L ,int i,int data){
    LinkList p; int j = 0;
    while (p->next && j < i-1){  //找到i-1的节点
        p = p->next;
        ++ j;
    }
    if(!(p->next) || j > i-1) return ERROR;
    LinkList  q = p->next;  //找到第i个节点q,
    p->next = q->next;
    data = q->data;
    free(q);   //释放第i个节点的空间
    return OK;
}

//5、统计链表中,值为x的元素的个数
int count_L(LinkList L,int x){
    //书本上写法
    LinkList p = L->next;
    int count  = 0;
    while (p != NULL ){
        if(p->data == x){
            count ++;
        }
        p = p->next;
    }
    return count;

    //简便写法
    for(LinkList p = L->next; p != NULL;p = p->next){
        if(p->data == x){
            count++;
        }
    }
    return count;


}
