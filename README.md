# C_Helloworld
    
![C语言代码执行的流程图](https://github.com/lizhou828/C_Helloworld/blob/master/data/C%E8%AF%AD%E8%A8%80%E4%BB%A3%E7%A0%81%E6%89%A7%E8%A1%8C%E6%B5%81%E7%A8%8B.png "C语言代码执行流程图")


## 一、C语言是啥？能干啥？

    0、C语言是一种通用性的编程语言，它既具有高级语言的特点，又具有汇编语言的特点

    1、C语言非常简洁，只有32个关键字，9种控制语句，34种运算符。
    
    2、C语言是一个结构化语言，重点在于数据结构和算法的实现
    
    3、C语言可以做任何用处，但最大的用处还是写写操作系统和编译器之类的。
    
    4、C 语言是非常有效率的，很多时候你都需要考虑内存的管理等底层的东西
    
    5、很多语言都是用 C 来设计的， 比如 perl , java, python。
    
    6、它的应用范围广泛，具备很强的数据处理能力，不仅仅是在软件开发上，而且各类科研都需要用到C语言，适于编写系统软件，三维，二维图形和动画，具体应用比如单片机以及嵌入式系统开发


## 二、 C和C++的联系与区别

    面向过程的思路：分析解决问题所需的步骤，用函数把这些步骤依次实现。

    面向对象的思路：把构成问题的事务分解为各个对象，建立对象的目的，不是完成一个步骤，而是描述某个事务在解决整个问题步骤中的行为。

    从上述描述可以看出，其实面向对象和面向过程是两种思考解决问题的方式，其差异主要在于思考的角度。

    C语言是面向过程的编程，它最重要的特点是函数，通过main函数来调用各个子函数。程序运行的顺序都是程序员事先决定好的。

    C++是面向对象的编程，类是它的主要特点，在程序执行过程中，先由主main函数进入，定义一些类，根据需要执行类的成员函数，过程的概念被淡化了（实际上过程还是有的，就是主函数的哪些语句），以类驱动程序运行，类就是对象，所以我们称之为面向对象程序设计。面向对象在分析和解决问题的时候，将涉及到的数据和数据的操作封装在类中，通过类可以创建对象，以事件或消息来驱动对象执行处理。

    C语言和C++的最大区别在于它们解决问题的思想方法不一样。C语言主要用于嵌入式领域，驱动开发等与硬件直接打交道的领域， C++可以用于应用层开发，用户界面开发等于操作系统打交道的领域。

    C++既继承了C强大的底层操作特性，又被赋予了教科书式的面向对象机制。它特性繁多，有其他面向对象语言鲜见的多继承，有耐人寻味的对值传递与引用传递入木三分的区分以及const关键字，等等。C++就像是一把瑞士军刀，或者像是一个工具箱，它为你提供尽可能多的工具，多到让不熟悉它的人无所适从，让懂得如何使用它的人如鱼得水。C++的种种特性使得它非常适合用来编写底层数据结构，算法，库等，是系统软件开发以及数学模型构建等的强大武器库，被誉为工业级编程语言。

    C++对C的“增强”，表现在以下几个方面：

    类型检查更为严格。增加了面向对象的机制。增加了泛型编程的机制（Template）。增加了异常处理。增加了运算符重载。增加了标准模板库（STL）。增加了命名空间，避免全局命名冲突。
    
    
## 三、 C++与C不兼容之处
    C的大部分代码在C++上都能应用，而C++的代码在C上不能应用。（记住是大部分，不是所有）

    C++是C语言的超集，虽然C++兼容C，但是C++中也有与Ｃ语言中不兼容的地方。

### 1、 变量声明的位置

    C中变量声明和代码是分开的，必须在函数开始处声明；

    C++中，变量可以在任意处声明，只要保证先声名后使用的原则就可以。

### 2、 struct结构体方面
    
    用struct定义变量
    
    struct mystruct{ 
        int i;float x;
    
    在c中声明struct变量要这么写：struct mystruct a;

    在C++中前面不用加struct：mystruct a;

    一种兼容的用法是：

    typedef struct _mystructint i;float x;
    } mystruct;

    然后用mystruct 定义变量。枚举型(enum),联合体类型(union)也是同样。

    在C++中，struct结构体支持成员函数的定义，C中不行。另外要注意的是，C++中成员函数的默认访问说明符为public,这一点和类不同，类的默认访问说明符为private.

### 3 bool类型值

    C++中有bool(或boolean类型);C中可没有这样的bool类型，均为数值类型！需要注意的是真为非零(如：１，５２，-５，-２等)，假的数值为０。

### 4 注释的不同
    C中的注释只有一种   /*......*/;

    C++中的注释包含两种 /*......*/ 和  //。

### 5 强制数据类型装换
    C中的强制转化形式为：(类型)变量；

    C++中还可以使用:类型(变量)的形式。

### 6 赋值
    C语言中的赋值只有一种即：   =    ;

    C++中除了使用=外，还可以使用()。例如：int x(5)；就等于: int x=5;我想这种写法是给C++中对象初始化时初始化属性是对象时使用的，那么对于基本类型也可以使用了。

###7 函数
    C语言中函数没有参数默认值，在C++中函数有参数默认值的概念，注意参数默认值与函数重载的区别。

    C语言中函数的定义又两种形式，经典形式和标准形式，C++中只支持标准形式。

    标准形式：
        int string(int x,float y){
            ......
        }

    经典形式: 
    int string(x,y)int x;float y;{
        ......
    }

    C++的函数必须先声名原型或定义才能使用,因为C++是强数据类型语言,在C语言中,未声名和定义函数之前调用函数是允许的.

### 8 运算符 & 和关键字 const
    &运算符最基本的含义是取地址，C和Ｃ++中都支持这一语法。
    但在C++中&还可以表示引用。有了引用的概念后函数调用可以作为左值。例如：

    int &rtux()......rtux()=5;

    以上表达式在C++中完全正确，但在C语言中是非法的。

    const关键字要注意一点不同的就是在C++的类函数中，函数可以声明是可以用const，表示这个函数没有改变类中的任何属性。
    如：void unchange()const;C不能有这样的声明。

### 9 extern说明符
    在C语言的某些版本中，可以在程序中多次使用一个全局变量而无需使用extern说明符。
    但在C++中除定义全局变量外，在其他模块使用应先用extern声明。

### 10 void指针
    在C语言中void指针可以赋给任何类型的指针，但在C++中，却不行，但可以先进行强制数据类型转换，再赋值。    