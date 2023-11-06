#include <iostream>

int main() {
    int sayi;

	basla:
    std::cout << "Bir sayi girin: ";
    std::cin >> sayi;

   	if (sayi < 0)
	{
        std::cout << "Pozitif sayi girin ";
       goto basla;
	   //return 1; 
    }

    std::cout << sayi << " ile 0 arasındaki cift sayilar:" <<std::endl ;

    for (int i= sayi; i>=0; i--)
	{
        if (i%2 == 0)
	{
        std::cout << i << " "<<std::endl;
    }
    }

    std::cout << std::endl;

    return 0;
}

