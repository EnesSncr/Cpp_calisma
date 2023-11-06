#include<iostream>
using namespace std;

int main()
{

int a;
int i;
int toplam=1;

basla:
cout<<"Faktoriyel alýnacak sayý: ";
cin>>a;

if(a>=0)
for(i=1; i<=a ;i++)
{
toplam=toplam*i;
}
else
{
	cout<<"Negatif sayi girdiniz";
	goto basla;
}
cout<<a<<"!: "<<toplam;///ýyuyfj
 
   
}
