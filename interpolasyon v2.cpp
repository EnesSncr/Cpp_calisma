#include<iostream>
using namespace std;
double a, b;
double denklem(double x3) {
	return a*x3+b;

}

int main()
{
	double x1, x2, x3, y1, y2, y3, a, b;



	cout << "X1 degerini girin: ";
	cin >> x1;
	cout << "Y1 degerini girin: ";
	cin >> y1;
	cout << "X2 degerini girin: ";
	cin >> x2;
	cout << "Y2 degerini girin: ";
	cin >> y2;
	cout << "X3 degerini girin: ";
	cin >> x3;
	
	a = (y2 - y1) / (x2 - x1);
	b = y1 - a * x1;


	cout<< a * x3+b;;




	

}