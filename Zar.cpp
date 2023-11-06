#include <iostream>
#include <stdlib.h>
#include <ctime>


using namespace std;


int main()
{
	int zar11;
	int zar12;
	int zar22;
	int zar21;
	int result11;
	int result22;
	int i = 0;
    
    while(i<=2){
	
    
    srand(time(NULL));
    
    i = i + 1 ;

	if (i<=1)
	{
		zar11 = rand() % 6 + 1;
    	zar21 = rand() % 6 + 1;
		result11 = zar11 + zar21;
		cout<<"zar11: " << zar11 << endl;
		cout<<"zar21: " << zar21 << endl;
		cout<<"result:   " << result11 << endl ;
	}
	
	if (i<=2)
	{
		zar12 = rand() % 6 + 1;
    	zar22 = rand() % 6 + 1;
		result22 = zar12 + zar22;
		cout<<"zar12: " << zar12 << endl;
		cout<<"zar22: " << zar22 << endl;
		cout<<"result:   " << result22 << endl;
	}
	
	
	
	if(result11 > result22)
	{
		cout<<"Birinci oyuncu kazandi";
	}
	else if(result22 > result11)
	{
		cout<<"Ikinci oyuncu kazandi";
	}
	else 
	{
		cout<<"Berabere";
	}
	
	
	return 0;
	
	}

}
