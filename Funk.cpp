//trolo
#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;
bool funk_c(float ,float );
bool funk_a(float ,float );
bool funk_b(float ,float );
int input (int&);
int main()
{	
	float x,y;
	int pr;
	int k;
	SetConsoleOutputCP(1251);
	do
	{
	   cout<<"Введите x---> ";
	    while (input (k));
		cout<<"Ввод произведен правильно, повторите ввод"<<endl;
		cout<<"Введите x---> ";
        cin>>x;
	    cout<<"Введите y---> ";
		while (input (k));
		cout<<"Ввод произведен правильно, повторите ввод"<<endl;
		cout<<"Введите y---> ";
	    cin>>y;
		if(funk_c(x,y)==true||funk_b(x,y)==true||funk_a(x,y)==true)
		cout<<"Входит"<<endl;
		else cout<<"Не входит"<<endl;
	    pr=true;
	    cout<<"Повтроить ещё раз? 0-нет, 1-да"<<endl;
	    cin>>pr;
	}
	while(pr==1);
    return 0;
}
bool funk_c(float x,float y)
{
	if((y<=3*x+3)&&(y<=-3*x+3)&&(y>=-1)&&(x*x+y*y>=1))
		return true;
	else return false;

}
bool funk_a(float x,float y)
{
	if((y<=-1)&&(y>=-3*x+3))
		return true;
	else return false;
}
bool funk_b(float x,float y)
{
	if((y<=-1)&&(y>=3*x+3))
		return true;
	else return false;
}
int input (int&k)
{
	cin>>k;
	if(cin.fail()||cin.bad())
	{
		cout<<"Ошибка ввода, только числовые значения!!!"<<endl;
		cin.clear();
		while (cin.get()!='\n')continue;
		cout<<"Попробуйте ещё раз!--->";
		return 1;
	}
	return 0;
}