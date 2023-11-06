#include<iostream>
using namespace std;

int main()
{
	double x1, x2, x3, y1, y2, y3, a, b, c, d;
	
	
	baslat:
	cout<<"X1 degerini girin: ";
	cin>>x1;
	cout<<"Y1 degerini girin: ";
	cin>>y1;
	cout<<"X2 degerini girin: ";
	cin>>x2;
	cout<<"Y2 degerini girin: ";
	cin>>y2;
	cout<<"Y3 degerini girin: ";
	cin>>y3;
	
	
	{
	a=y2-y1;
	b=y3-y1;
	c=x1-x2;
	x3=c/(a/b);
	d=x2+x3;
}
if(d>x1 || d<x2 or y3>y2 || y3<y1 or  x2>x1 or y2<y1 )
{
	cout<<"Hatali deger girdiniz"<<endl;
	goto baslat;
}
	cout<<"Interpolasyon sanucu: "<<d;
	
}
