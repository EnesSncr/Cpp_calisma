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
		cout<<"Harf Kars�l�g�: A";
	
	}
	else if (a>=60)
	{
		cout<<"Harf Kars�l�g�: B";
	
	}
		else if (a>=40)
	{
		cout<<"Harf Kars�l�g�: C";
	
	}
		else if (a>=20)
	{
		cout<<"Harf Kars�l�g�: D ";
	
	}
		else if (a>=0)
	{
		cout<<"Harf Kars�l�g�: F";
	
	}
	
	
	}

