#include<iostream>
using namespace std;

int main()
{
	int a;
	
	basla:
	cout<<"Notunuzu Giriniz: "<<endl;
	cin>>a;
	
	if (a<0 || a>100)
	{
		cout<<"yanlis not girdiniz tekrar yazin";
		goto basla;
	}
	
	else if(a>=80)
	{
		cout<<"Harf Karsýlýgý: A";
	
	}
	else if (a>=60)
	{
		cout<<"Harf Karsýlýgý: B";
	
	}
		else if (a>=40)
	{
		cout<<"Harf Karsýlýgý: C";
	
	}
		else if (a>=20)
	{
		cout<<"Harf Karsýlýgý: D ";
	
	}
		else if (a>=0)
	{
		cout<<"Harf Karsýlýgý: F";
	
	}
	
	
	}

