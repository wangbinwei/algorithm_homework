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
    commodity_price[0] = 4;//����
    commodity_price[1] = 5;
    commodity_price[2] = 1.5;
    commodity_price[3] = 3;
    commodity_price[4] = 4;
}

void display_menu()
{
    cout<<"****��ӭʹ�ñ����ϵͳ****"<<endl;
    cout<<"A:��ʦ�������� 5Ԫ"<<endl;
    cout<<"B:���� 1.5Ԫ"<<endl;
    cout<<"C:��� 3Ԫ"<<endl;
    cout<<"D:���� 4Ԫ"<<endl;
    cout<<"��ѡ���Ʒ��ż�����"<<endl;
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
            printf("��Ʒ%c������Ϊ%d, ���Ϊ%.2f\n",a,commodity_number[i],commodity_number[i]*commodity_price[i]);
            total_price += commodity_number[i]*commodity_price[i];
        }
    }
    printf("�ܼ�%.2f\n",total_price);
}
