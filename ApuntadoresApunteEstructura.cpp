#include <iostream> 
using namespace std; 
struct dato{
	int dato1;
	char dato2[20];
};
int main(){
	struct dato valor1;
	struct dato *ptr;
	ptr= &valor1; 
	cout<< "Punteros: "<<&ptr<<endl; 
	//Imprime el vlor del puntero 
	cout<< "Direccion de puntero: "<<ptr<<endl;
	//imprime la direccion del puntero
	cin>> (ptr->dato1); 
	cin>> (ptr->dato1); 
	cout<<"Punteros: "<<ptr->dato1<<endl<<endl; 
	cout<<"Punteros: "<<ptr->dato2<<endl<<endl; 
	return 0;
}
# ApuntesEstructura
