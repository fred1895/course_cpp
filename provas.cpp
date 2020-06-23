#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	int ind, ind2, acertos=0, numAlunos, acerto=0, qntQuestoes;
	float notaProva, notaAluno;
	
	
	cout <<"Digite quantos alunos são: ";
	cin>>numAlunos;
	string aluno[numAlunos];
	
	cout <<"Digite quantas questões tem a prova: ";
	cin >> qntQuestoes;
	char gabaritoPort[qntQuestoes], gabaritoMat[qntQuestoes], gabaritoHis[qntQuestoes], 
	provaPort[qntQuestoes], provaMat[qntQuestoes], provaHis[qntQuestoes];
	
	cout <<"Digite quanto vale a prova: ";
	cin >> notaProva;
	
	//Gabarito
	for(ind=0; ind<=qntQuestoes-1; ind++){
		cout <<"\n" <<"Digite a resposta da " <<ind+1 <<"º questão de Português: ";
		cin >> gabaritoPort[ind];
		
		cout <<"Digite a resposta da " <<ind+1 <<"º questão de Matemática: ";
		cin >> gabaritoMat[ind];
		
		cout <<"Digite a resposta da " <<ind+1 <<"º questão de História: ";
		cin >> gabaritoHis[ind];
	}
	ind = 0;
	cout << "\n";
	//Nome dos alunos
	for (ind = 0; ind <= numAlunos-1; ind++){
		cout <<"Informe o nome do " <<ind+1 <<"º aluno(a): ";
		cin >> aluno[ind];
	}
	ind = 0;
	
	//Respostas das provas	
	for (ind = 0; ind <= numAlunos-1; ind++){
		cout << "\n** Português ** \n";
		
		for (ind2 = 0; ind2 <= qntQuestoes-1; ind2++){
			cout <<"Resposta do aluno " << aluno[ind] <<" para a ";
			cout <<"questão " <<ind2+1 <<": ";
			cin >> provaPort[ind2];
			
			if(gabaritoPort[ind2] == provaPort[ind2]){
				acerto++;
			}
			
		}
		
		notaAluno = acerto*notaProva/qntQuestoes;
		cout <<"\nO aluno " <<aluno[ind] << " acertou " <<acerto <<" questões em Português e tirou :" <<notaAluno <<"\n";
		
		notaAluno=0;
		acerto = 0;
		
		cout << "\n** Matemática ** \n";
		
		for (ind2 = 0; ind2 <= qntQuestoes-1; ind2++){
			cout <<"Resposta do aluno " << aluno[ind] <<" para a ";
			cout <<"questão " <<ind2+1 <<" : ";
			cin >> provaMat[ind2];
			
			if(gabaritoMat[ind2] == provaMat[ind2]){
				acerto++;
			}
			
		}
		
		notaAluno = acerto*notaProva/qntQuestoes;
		cout <<"\nO aluno " <<aluno[ind] << " acertou " <<acerto <<" questões em Matemática e tirou :" <<notaAluno <<"\n";
		
		notaAluno=0;
		acerto = 0;
		
		cout << "\n** História ** \n";
		
		for (ind2 = 0; ind2 <= qntQuestoes-1; ind2++){
			cout <<"Resposta do aluno " << aluno[ind] <<" para a ";
			cout <<"questão " <<ind2+1 <<" : ";
			cin >> provaHis[ind2];
			
			if(gabaritoHis[ind2] == provaHis[ind2]){
				acerto++;
			}
			
		}
		
		notaAluno = acerto*notaProva/qntQuestoes;
		cout <<"\nO aluno " <<aluno[ind] << " acertou " <<acerto <<" questões em História e tirou :" <<notaAluno <<"\n";
		notaAluno = 0;
		acerto = 0;
	}
}
