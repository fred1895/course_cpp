#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	int ind, ind2, acertos=0, numAlunos, acerto=0, qntQuestoes;
	float notaProva, notaAluno;
	
	
	cout <<"Digite quantos alunos s�o: ";
	cin>>numAlunos;
	string aluno[numAlunos];
	
	cout <<"Digite quantas quest�es tem a prova: ";
	cin >> qntQuestoes;
	char gabaritoPort[qntQuestoes], gabaritoMat[qntQuestoes], gabaritoHis[qntQuestoes], 
	provaPort[qntQuestoes], provaMat[qntQuestoes], provaHis[qntQuestoes];
	
	cout <<"Digite quanto vale a prova: ";
	cin >> notaProva;
	
	//Gabarito
	for(ind=0; ind<=qntQuestoes-1; ind++){
		cout <<"\n" <<"Digite a resposta da " <<ind+1 <<"� quest�o de Portugu�s: ";
		cin >> gabaritoPort[ind];
		
		cout <<"Digite a resposta da " <<ind+1 <<"� quest�o de Matem�tica: ";
		cin >> gabaritoMat[ind];
		
		cout <<"Digite a resposta da " <<ind+1 <<"� quest�o de Hist�ria: ";
		cin >> gabaritoHis[ind];
	}
	ind = 0;
	cout << "\n";
	//Nome dos alunos
	for (ind = 0; ind <= numAlunos-1; ind++){
		cout <<"Informe o nome do " <<ind+1 <<"� aluno(a): ";
		cin >> aluno[ind];
	}
	ind = 0;
	
	//Respostas das provas	
	for (ind = 0; ind <= numAlunos-1; ind++){
		cout << "\n** Portugu�s ** \n";
		
		for (ind2 = 0; ind2 <= qntQuestoes-1; ind2++){
			cout <<"Resposta do aluno " << aluno[ind] <<" para a ";
			cout <<"quest�o " <<ind2+1 <<": ";
			cin >> provaPort[ind2];
			
			if(gabaritoPort[ind2] == provaPort[ind2]){
				acerto++;
			}
			
		}
		
		notaAluno = acerto*notaProva/qntQuestoes;
		cout <<"\nO aluno " <<aluno[ind] << " acertou " <<acerto <<" quest�es em Portugu�s e tirou :" <<notaAluno <<"\n";
		
		notaAluno=0;
		acerto = 0;
		
		cout << "\n** Matem�tica ** \n";
		
		for (ind2 = 0; ind2 <= qntQuestoes-1; ind2++){
			cout <<"Resposta do aluno " << aluno[ind] <<" para a ";
			cout <<"quest�o " <<ind2+1 <<" : ";
			cin >> provaMat[ind2];
			
			if(gabaritoMat[ind2] == provaMat[ind2]){
				acerto++;
			}
			
		}
		
		notaAluno = acerto*notaProva/qntQuestoes;
		cout <<"\nO aluno " <<aluno[ind] << " acertou " <<acerto <<" quest�es em Matem�tica e tirou :" <<notaAluno <<"\n";
		
		notaAluno=0;
		acerto = 0;
		
		cout << "\n** Hist�ria ** \n";
		
		for (ind2 = 0; ind2 <= qntQuestoes-1; ind2++){
			cout <<"Resposta do aluno " << aluno[ind] <<" para a ";
			cout <<"quest�o " <<ind2+1 <<" : ";
			cin >> provaHis[ind2];
			
			if(gabaritoHis[ind2] == provaHis[ind2]){
				acerto++;
			}
			
		}
		
		notaAluno = acerto*notaProva/qntQuestoes;
		cout <<"\nO aluno " <<aluno[ind] << " acertou " <<acerto <<" quest�es em Hist�ria e tirou :" <<notaAluno <<"\n";
		notaAluno = 0;
		acerto = 0;
	}
}
