#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	int ind, pos, qntAlunos, acertos=0;
	char gabarito[5], prova[5];
	
	for (ind=0; ind<=4; ind++){
		cout <<"Informe a resposta da " <<ind+1 <<"º questão";
		cin >> gabarito[ind];
	}
	
	cout <<"Informe a quantidade de alunos: ";
	cin>>qntAlunos;
	
	for (ind = 1; ind <= qntAlunos; ind++){
		
		cout << "Aluno " << ind;
		
		for(pos=0; pos<=4; pos++){
			cout <<"Informe a resposta da " <<pos+1 <<"º questão";
			cin >> prova[pos];
			
			if (prova[pos] == gabarito[pos]){
				acertos++;
			}
			
		}
		cout <<"Este aluno acertou: " <<acertos <<" vezes\n";
		acertos = 0;
	}
}
