#include <iostream>
#include <string>
#include "Dominios.h"
#include "TUD.h"
#include "Entidades.h"
#include "TUE.h"


using namespace std;





int main() {
    ///Criaçã dos objetos de testes
	TUCodigoDoProjeto codigo_projeto;
	TUEstadoDeProjeto estado_projeto;
	TUCodigoDeFaseDeProjeto codigo_fase;
	TUFuncao funcao;
	TUData data;
	TUNome nome;
	TUTelefone tel;
	TUSenha senha;
	TUMatricula mat;
	TUEmail email;
	TUCusto custo;
	TUGerenteDeSistema gerente_sistema;
	TUGerenteDeProjeto gerente_projeto;
	TUDesenvolvedor desenvolvedor;
	TUFase fase;
    TUProjeto projeto;
    ///Teste de codigo de projeto
	if (codigo_projeto.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    /// teste de estado de projeto
	if (estado_projeto.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de codigo de fase de projeto
	if (codigo_fase.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de função
	if (funcao.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de data
	if (data.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de nome
	if (nome.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de telefone
	if (tel.run() == 0) {
			cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de Senha
	if (senha.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de matricula
	if (mat.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de Email
	if (email.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de custo
	if (custo.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de Gerente de sistema
	if (gerente_sistema.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de Gerente de projeto
	if (gerente_projeto.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de desenvolvedor
	if (desenvolvedor.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ///Teste de Projeto
	if (projeto.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}


    ////Teste de Fase
	if (fase.run() == 0) {
		cout << "SUCESSO" << endl;
	}
	else {
		cout << "Falha" << endl;
	}

	return 0;

}
