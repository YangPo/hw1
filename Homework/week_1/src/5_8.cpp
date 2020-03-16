#include <iostream>
#include<cstdlib>
using namespace std;
int main(void)
{ int i;
	for(i=1;i<=10;i++)
	{
		if(i%4==0)
			break;
		cout<<"i="<<i<<endl;
	}
	cout<<"When loop 打斷,i="<<i<<endl;
	system("pause");
	return 0;
}