
#include <iostream>


using namespace std;



int main()
{
	int n1,n2,n3,n4,add,average;
	
	cout << "Ingrese el valor del numero 1:" << endl;
	cin >> n1;
		cout << "Ingrese el valor del numero 2:" << endl;
	cin >> n2;
		cout << "Ingrese el valor del numero 3:" << endl;
	cin >> n3;
		cout << "Ingrese el valor del numero 4:" << endl;
	cin >> n4;
	
	add = n1+n2+n3+n4;
	average = add/4;
	
	cout << "La suma de los numeros es : " << add << endl;
	cout << "El Promedio de los numeros es  : " << average << endl ;
	 
		
	
	return 0;
}
