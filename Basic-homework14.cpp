#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
	printf("�T���Ϊ��T����@�w��������������M�j��ĤT��C\n");
	printf("�п�J3�����������\n");
    while( cin >> x >> y >> z )
    {
        if( x+y>z && x+z>y && y+z>x )
        {
        printf("�i�H\n");
        }
        else
        {
        printf("���i�H\n");
        }
        break;
    }
    system("pause");
	return 0;
}
