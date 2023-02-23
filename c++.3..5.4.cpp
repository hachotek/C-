
#include <iostream>


using namespace std;



int main()
{
	double price,amount,total;
	
	cout << "Ingrese el precio del articulo" << endl;
	cin >> price;
		cout << "Ingrese la cantidad del articulo que lleva:" << endl;
	cin >> amount;
	
	total = price * amount;
	
	
	cout << "EL CLIENTE DEBE ABONAR : " << total << endl;
	 
		
	
	return 0;
}
