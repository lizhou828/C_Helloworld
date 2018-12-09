//
// Created by Administrator on 2018/5/6 0006.
//

#include <stdio.h>

void calc(){
    int a ,b = 100 ,c,x=10,y=9;
    a = (--x == y++) ? --x :++y;
    if( x < 9 ){
        b = x++;
        c = y;
    }
    printf("\n a = %d ,b = %d ,c = %d ,x = %d ,y = %d",a,b,c,x,y);
}

void calcChar(){
    int a =14,b=15,x;
    char c = 'A';
    x = ( ( a & b) && (c <'a') ); // 'A' < 'a' 两个char类型比较，是以他们的ASCII码值参与运算的，结果为1（表示真）
    printf("\n a = %d ,b = %d ,c = %d ,x = %d ",a,b,c,x);

}