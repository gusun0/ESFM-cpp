#include <iostream>
using namespace std;

int main(){
	int a;
	cout << "digite un numero de 1 al 5:" << endl;
	
	cin >> a;

	switch(a){

		case 1: cout << "insertaste 1"; break;
		case 2: cout << "insertaste 2"; break;
		case 3: cout << "insertaste 3"; break;
		case 4: cout << "insertaste 4"; break;
		case 5: cout << "insertaste 5"; break;
		default: cout << "no esta en el rango"; break;
	}
	return 0;
}
