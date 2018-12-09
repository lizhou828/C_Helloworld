//
// Created by Administrator on 2018/12/9 0009.
//

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
        scanf(&p->data);                               // 输入元素值
        p->next = NULL;L->next = p;                   // 新生成的元素，插入到头节点之后
    }
}

