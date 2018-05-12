#include "Menu.hpp"

using namespace std;

float commodity_price[10];
int commodity_number[10];
int main()
{
    init(commodity_price, commodity_number);
    display_menu();
    char str[5],choice[5];
    int number, flag=1;//商品数量 和 继续点餐与否
    while(flag)
    {
        cout<<"请输入商品代码:";
        cin>>str;
        cout<<"该商品的数量:";
        cin>>number;
        cout<<"是否继续点餐(Y/N):";
        cin>>choice;
        if( toupper(choice[0]) == 'N')
        {
            flag = false;
        }
        int food_idex = toupper(str[0]) - 'A' + 1;
        commodity_number[food_idex] += number;

    }
    display_result(commodity_price, commodity_number);
    return 0;
}
