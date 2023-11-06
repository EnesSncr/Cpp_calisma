#include <iostream>
using namespace std;

int main()
{

int sayi;
double ort;
int toplam;

for(int i=1; i<=5; i++)
{

cout<<i<<" .Sayi Girin: ";
   cin>>sayi;
   	toplam=toplam+sayi;
   }
   ort=toplam/5;
   cout<<"5 sayinin ortalamasi: "<<ort;
}
