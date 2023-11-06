#include<iostream>

using namespace std;

int main()
{


	double a = 0;
	double b = 0;
	char islem = '+';
	char secenek= 'E';


	baslat:
	std::cout << "Birinci Deger: ";
	std::cin>> a ;
	std::cout << "Ikinci Deger: ";
	std::cin>> b ;

	std::cout << "Yapilacak Islem: ";
	std::cin>> islem ;

switch (islem) {
	case '+' :
		std::cout << "Sonuc: " << a+b;
		break;
	case '-' :
		std::cout << "Sonuc: " << a-b;
		break;
	case '*' :
		std::cout << "Sonuc: " << a*b;
		break;
	case '/' :
		std::cout << "Sonuc: " << a/b;
		break;
}
/*cout<<"Baska Islem Yapacaksanýz E Tuslayýn";
cin>>secenek;

if(secenek == "E")
{
	goto baslat;
}*/

}





