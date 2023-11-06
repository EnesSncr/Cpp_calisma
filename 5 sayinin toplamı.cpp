#include <iostream>
using namespace std;

int main()
{
	int toplam=0;
	int sayi;
	
  
   for(int i=1;i<=5;i++)
   {
   cout<<i<<" .Sayi Girin: ";
   cin>>sayi;
   	toplam=toplam+sayi;
   }
   cout<<"Girilen 5 sayinin toplami: "<<toplam;
}
