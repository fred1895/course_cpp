#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int numeros[9], numVetor=0, num, contador, numTentativas=1, numChute;
	
	cout <<"Informe o numero que voce deseja: \n";
	cin>>num;
	
	numeros[numVetor] = num;
	
	for(contador=1; contador <= 10; contador++){
		cout <<"Informe o numero que voce deseja: \n";
		cin>>num;
		
		numVetor++;
		numeros[numVetor] = num;
	}
	
	do {
		cout <<"Informe o numero que voce deseja chutar: \n";
		cin>>numChute;
		
		numTentativas++;
		
	} while(numTentativas<= 3);
			
	
}
