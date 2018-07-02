#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
//#include <test1.c>

extern int sum(int a ,int b);
extern void calc();
extern void calcChar();


void func(int a,int b){
    static  int m =0,i=2;
    i += m+1;m=i+a+b;
    printf(",%d,%d",i,m);
}

void f(int* v ,int* w){
    int t; t=*v; *v=*w ;*w =t;
}

#define NUM 35
int main() {
//    int a ,b ,sum; /*  声明3个变量*/
//    a = 1 ;
//    b = 2;
//    sum = a + b;
//    printf(" a add b is : %d \n",sum);

    int a,b,c;//代码块里面的变量必须先声明
    float total;


    int x=1,y=3,z= 2;
    if(x>y) f(&x,&y);
    else if(y>z)f(&y,&z);
    else f(&x,&z);
    printf("%d,%d,%d\n",x,y,z);


//    int k = 4,m=1;
//    func(k,m);func(k,m);



//   int x=3,y=6;a=0;
//   while (x++!=(y-=1)){
//       a+=1;
//       if(y<x) break;
//   }
//   printf("x=%d,and a = %d",x,a);



//    char c[] = "xyz", cc[] = {'x','y','z'};
//    printf("c sizeof=%d,strlen(c)=%d", sizeof(c),strlen(c)); //sizeof是求数据类型所占的空间大小,是C语言中的一个单目运算符
//    printf(",cc sizeof=%d,strlen(cc)=%d", sizeof(cc),strlen(cc));//strlen是一个函数，strlen是求字符串的长度，字符串以\0结尾



//    for(int i = 1 ;i<6 ;i++){
//        if(!(i%2)){
//            printf("#");
//            continue;
//        }
//        printf("*");
//    }


//    char s1[15]="Hello",s2[10]="Jack";
//    printf("%s",strcpy(s1,s2)); //把s2复制到s1中，s1就被清掉了
//    printf("%d",strlen(strcpy(s1,s2)));



//    int aa[] ={1,2,3,4,5,6,7,8,9,0},*pp;
//    pp=aa;printf("%d",*(pp+9));



//    struct {int x ; int y;}d[2] = {{1,3},{2,7}};
//    printf("%d",d[0].y*d[1].y/d[0].x);



//    char str[] = "ab*AB%cd#CD$";
//    int i ;
//    for(i = 0;str[i] != '\0' ;i++){
//        if('A' <= str[i] && str[i] <= 'Z'){
//            putchar(str[i]);
//        }else if ('a' <= str[i] && str[i] <= 'z'){
//            putchar(str[i]-32);
//        }
//    }

//    char arr[][5] = {{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
//    int i,j;
//    for(i = 0 ;i <5 ;i++){
//        for(j = 0 ;j<5;j++)printf("%c",arr[i][j]);
//        printf("\n");
//    }


//    int aa[] ={1,2,3,4,5,6},x,y,*p;
//    p=&aa[0];x=*(p+2);y=*(p+4);
//    printf("%d,%d,%d,%d\n",aa[0],*p,x,y);






    //scanf为获取控制台输入的函数
//    scanf("%f" ,&p);//&为取地址运算符
//    total = p * NUM;
//    printf("p * NUM =  %f   \n",total);
//    printf("total所占字节是:%d ,一个实数数据一般在内存中占4个字节（32位）\n",sizeof(total));//sizeof()用于测试数据类型所占存储空间大小的运算符


//     *   &
//    先要理解地址和数据，你可以想象有很多盒子，每个盒子有对应的号码，那个号码叫做“地址”，而盒子里放的东西叫做“数据”。
//    上面就段理解了，*p和p的区别就不难解释了。
//    p是指针变量，用来存放地址，你可以认为是上面所说的盒子的号码，“*”是解引用操作符，你可以把它理解成打开盒子，*p就是打开p号盒子，取出里面的数据。
//
//    简单来说，你记住，p存放的是地址，而*p是让程序去那个地址取出数据。



//    int a = 3; ///a是一个整型变量,值为3
//    int *p = &a;// p是一个指针,指向a的地址
//
//    说p,就是指针, *p 是指针指向的内容,即a地址中的内容
//    实际上*p 和a 这个应该是一个意思了


//    C 语言指针怎么理解？
    https://www.zhihu.com/question/24466000

//    举个例子：
//    unsigned char a = 1; // unsigned char 类型占一个字节
//    unsigned char* b = &a; // &a 代表的就是得到变量a所存储的那个小格子的编号。
//    // 赋值给变量b后，b格子里存的就是a格子的编号。
//    printf("%d", *b); //输出1，*b代表的是看看b格子里存储的编号所代表的格子里存的数是什么

//    个人理解 :  （内存中数据展现形式：数据+地址）
//    & + 变量名   ，表示为取出变量的地址值，“取址”
//    * + 变量名   ，表示为解析出变量的地址值的内容(数据)，“解址”、“解址值”；



    a=10;
    b = 5;
    printf("\n %d ,%d \n" ,a,b);
    a = a + b;
    b = a - b;
    a = a-b;
    printf("a=%d,b=%d \n" ,a,b);



    //调用test1.c源文件中的函数，必须要先声明：extern int sum(int a ,int b);
    int resultSum = sum(2,3);
    printf("result of sum() = %d \n",resultSum);


    calc();
    calcChar();

//    struct student{
//        int num;
//        int age;
//    }stu[3]={{1001,20},{1002,19},{1003,21}},*p=stu;
//    printf("%d",(*++p).num);


    return 0;















}