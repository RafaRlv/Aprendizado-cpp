#include<iostream>

using namespace std;

int main (){
	
	int valor;
	
	cout << "Selecione um transporte:\n";
	cout << "[1]Moto\n" << "[2]Carro\n" << "[3]Aviao\n" << "[4]Helicoptero\n\n";
	
	cin >> valor;
	
	switch (valor){
		
		case 1:
		case 2:
			cout << "Transporte selecionado:\n";
			switch (valor){
				case 1:
					cout << "Moto\n";
					break;
				case 2:
					cout << "Carro\n";
					break;
			}
			break;
		case 3:
		case 4:
			cout << "Transporte selecionado:\n";
			switch (valor){
				case 3:
					cout << "Aviao\n";
					break;
					
				case 4:
					cout << "Helicoptero\n";
					break;
			}
			break;
		default:
		   	cout << "Valor selecionado invalido!\n";		
		
	}
	
	cout << "\n\nFinalizando programa....\n\n";
	
	
	return 0;
}
