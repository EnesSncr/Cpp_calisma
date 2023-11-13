#include <iostream>
#include <stdlib.h>
#include <ctime>


using namespace std;


int main()//bakiye eklenecek
{
	int karta;
	int kartb;
	int kartc;
	int kartd;
	int kartx;
	int top1;
	int top2;
	int top3;
	int i = 0;
	char  oyun = 'u';
	

    
    while(i<=2){
	
    
    srand(time(NULL));
    
    i = i + 1 ;

	if (i<=1)
	{
		karta = rand() % 10 + 1;//dagitici karti diger kartlar ile ayni degerde bu deger degismeli (buraya bir süre eklenmeli)
    	kartb = rand() % 10 + 1;
    	kartc = rand() % 10 + 1;
		top1 = kartb + kartc;
		cout<<"Oyuncunun 1.karti: " << kartb << endl;
		cout<<"Oyuncunun 2.karti: " << kartc << endl;
		cout<<"Oyuncu Toplami: " << top1 << endl<< endl ;
		cout<<"Dagitici 1.Karti. " << top1 << endl ;
		
		if (top1>21)
		{
			cout<<"OYUNCU KAYBETTI";
			goto bitti;
		}
	}

	basla:
	cout<<"Tamam (t)----Devam (d)"<<endl;
	cin>> oyun ;
	
	
	
	switch (oyun) {
	case 'd' :
		kartd = rand() % 10 + 1;
		top2 = top1+kartd;
		cout<< "Yeni Kart :"<<kartd<<endl;
		cout<<"Oyuncunun Yeni Degeri : "<<top2<<endl;
		
		
		if (top2>21)
		{
			cout<<"OYUNCU KAYBETTI";
		}
		/*else if (top2<21) //burada donguuyu basstan almak yerine eski sayýya eklenerek devam etmeli
		{
		goto basla;*/
	}
		
		break;
	case 't' :  //karta degeri yukarda seçilen ile ayni gelmiyor top3 yanlis cikiyor
		kartx = rand() % 10 + 1;
		cout<<"Dagitici 2. karti: "<<kartx<<endl;
		top3 = karta + kartx;
		cout<<"Dagitici Toplam: "<<top3<<endl;
		
		if (top3>21)
		{
			cout<<"DAGITICI KAYBETTI";
		}
		else
		
		goto basla;
	
		
		break;
}
	
	bitti:
	
	return 0;	
	
	
	
	
	
	
	
}
}
