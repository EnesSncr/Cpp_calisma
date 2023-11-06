#include<iostream>
using namespace std;

int main()
{
	double ifyt;
	double kdv;
	double sfyt;
	
	baslat:
	cout<<"Urun fiyatini girin: ";
	cin>>ifyt;
	
	if (ifyt > 0)
	{
	
	kdv= ifyt*0.2;
	sfyt=ifyt+kdv;
}
	else if (ifyt <= 0)
	{
		cout<<"Yanlis Fiyat Girdiniz"<<endl;
		goto baslat;
	}
	
	cout<<" KDV dahil fiyati: "<<sfyt<<endl;
	cout<<" KDV : "<<kdv;
	
	//std::this_thread::sleep_for(std::chrono::seconds(3))
	
	return 0;
	
}
	 
	
