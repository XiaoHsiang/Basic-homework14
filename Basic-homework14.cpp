#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
	printf("三角形的三邊長一定滿足任兩邊邊長和大於第三邊。\n");
	printf("請輸入3個邊長的長度\n");
    while( cin >> x >> y >> z )
    {
        if( x+y>z && x+z>y && y+z>x )
        {
        printf("可以\n");
        }
        else
        {
        printf("不可以\n");
        }
        break;
    }
    system("pause");
	return 0;
}
