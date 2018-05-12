#include <iostream>
#include <cstdio>
#include "Menu.hpp"
#include <cstdlib>
#include <algorithm>
using namespace std;


void init(float commodity_price[], int commodity_number[])
{
    int i;
    for(i=0;i<10;i++)
    {
       commodity_price[i] = 0;
       commodity_number[i]=0;
    }
    commodity_price[0] = 4;//数量
    commodity_price[1] = 5;
    commodity_price[2] = 1.5;
    commodity_price[3] = 3;
    commodity_price[4] = 4;
}

void display_menu()
{
    cout<<"****欢迎使用本点餐系统****"<<endl;
    cout<<"A:康师傅方便面 5元"<<endl;
    cout<<"B:鸡蛋 1.5元"<<endl;
    cout<<"C:红茶 3元"<<endl;
    cout<<"D:蒸饺 4元"<<endl;
    cout<<"请选择餐品编号加数量"<<endl;
}

float display_result(float commodity_price[], int commodity_number[])
{
    float total_price = 0;
    for(int i=1;i<=4;i++)
    {
        if(commodity_number[i]==0)
        {
            continue;
        }
        else
        {
            char a;
            a = 'A' + i -1;
            printf("商品%c的数量为%d, 金额为%.2f\n",a,commodity_number[i],commodity_number[i]*commodity_price[i]);
            total_price += commodity_number[i]*commodity_price[i];
        }
    }
    printf("总计%.2f\n",total_price);
}
