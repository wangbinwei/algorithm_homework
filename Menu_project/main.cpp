#include "Menu.hpp"

using namespace std;

float commodity_price[10];
int commodity_number[10];
int main()
{
    init(commodity_price, commodity_number);
    display_menu();
    char str[5],choice[5];
    int number, flag=1;//��Ʒ���� �� ����������
    while(flag)
    {
        cout<<"��������Ʒ����:";
        cin>>str;
        cout<<"����Ʒ������:";
        cin>>number;
        cout<<"�Ƿ�������(Y/N):";
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
