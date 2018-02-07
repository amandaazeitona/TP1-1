#include <iostream>
#include <string>
#include "Dominios.h"

using namespace std;

///Definição dos limites
const int CodigoDoProjeto::LIMITE = 5;
const int EstadoDeProjeto::LIMITE = 1;
const int CodigoDeFaseDeProjeto::LIMITE = 1;
const int Funcao::LIMITE = 1;
const int Data::LIMITE = 10;
const int Nome::LIMITE = 20;
const int Telefone::LIMITE = 8;
const int Senha::LIMITE = 5;
const int Matricula::LIMITE = 5;



/** class CodigoDoProjeto
* funço validar
* função setCodigo
**/
void CodigoDoProjeto::validar(string codigo) throw (invalid_argument){
	int i;
    if (codigo.length() != LIMITE) {
        throw invalid_argument("Argumento invalido.");
    }
    for (i=0;i<codigo.length();i++) {
    	if ((codigo[i] < 'a' || codigo[i] > 'z') && (codigo[i] < 'A' || codigo[i] > 'Z')) {
    		throw invalid_argument("Argumento invalido.");
    	}
    }
}

void CodigoDoProjeto::setCodigo(string codigo) throw (invalid_argument){
    validar(codigo);
    this->codigo = codigo;
}









/** class EstadoDeProjeto
* funço validar
* função setDigito
**/
void EstadoDeProjeto::validar(string digito) throw (invalid_argument){
    if (digito.length() != LIMITE) {
        throw invalid_argument("Argumento invalido.");
    }
    if (digito < "1" || digito > "2") {
    	throw invalid_argument("Argumento invalido.");
    }
}

void EstadoDeProjeto::setDigito(string digito) throw (invalid_argument){
    validar(digito);
    this->digito = digito;
}




/** class CodigoDeFaseDeProjeto
* funço validar
* função setDigito
**/
void CodigoDeFaseDeProjeto::validar(string digito) throw (invalid_argument){
    if (digito.length() != LIMITE) {
        throw invalid_argument("Argumento invalido.");
    }
    if (digito < "1" || digito > "4") {
    	throw invalid_argument("Argumento invalido.");
    }
}

void CodigoDeFaseDeProjeto::setDigito(string digito) throw (invalid_argument){
    validar(digito);
    this->digito = digito;
}







/** class Funcao
* funço validar
* função setDigito
**/
void Funcao::validar(string digito) throw (invalid_argument){
    if (digito.length() != LIMITE) {
        throw invalid_argument("Argumento invalido.");
    }
    if (digito < "1" || digito > "3") {
    	throw invalid_argument("Argumento invalido.");
    }
}

void Funcao::setDigito(string digito) throw (invalid_argument){
    validar(digito);
    this->digito = digito;
}




/** class Data
* funço validar
* função setData
**/
void Data::validar(string data) throw (invalid_argument){
    if (data.length() != LIMITE) {
        throw invalid_argument("Argumento invalido.");
    }
    string dia = data.substr (0,2);
    char barra1 = data[2];
    string mes = data.substr (3,2);
    char barra2 = data[5];
    string ano = data.substr (6,9);
    if (barra1 != '/') {
    	throw invalid_argument("Argumento invalido.");
    }
    if (barra2 != '/') {
        throw invalid_argument("Argumento invalido.");
    }
    if (dia < "01" || dia > "31") {
    	throw invalid_argument("Argumento invalido.");
    }
    if (mes < "01" || mes > "12") {
        throw invalid_argument("Argumento invalido.");
    }
    if (ano < "2016" || ano > "2050") {
        throw invalid_argument("Argumento invalido.");
    }
}

void Data::setData(string data) throw (invalid_argument){
    validar(data);
    this->data = data;
}






/** class Nome
* funço validar
* função setNome
**/
void Nome::validar(string nome) throw (invalid_argument){
	int i;
    if (nome.length() != LIMITE) {
        throw invalid_argument("Argumento invalido.");
    }
    for (i=0;i<nome.length();i++) {
    	if ((nome[i] < 'a' || nome[i] > 'z') && (nome[i] < 'A' || nome[i] > 'Z') && (nome[i] != ' ')) {
    		throw invalid_argument("Argumento invalido.");
    	}
    }
}

void Nome::setNome(string nome) throw (invalid_argument){
    validar(nome);
    this->nome = nome;
}







/** class Telefone
* funço validar
* função setTel
**/
void Telefone::validar(string telefone) throw (invalid_argument){
	int i;
    if (telefone.length() != LIMITE) {
        throw invalid_argument("Argumento invalido.");
    }
    for (i=0;i<telefone.length();i++) {
       	if (telefone[i] < '0' || telefone[i] > '9') {
       		throw invalid_argument("Argumento invalido.");
        }
    }
}

void Telefone::setTel(string telefone) throw (invalid_argument){
    validar(telefone);
    this->telefone = telefone;
}






/** class Senha
* funço validar
* função setSenha
**/
void Senha::validar(string senha) throw (invalid_argument){
	int i;
	int j;
    if (senha.length() != LIMITE) {
        throw invalid_argument("Argumento invalido.");
    }
    for (i=0;i<senha.length();i++) {
    	for (j=i+1;j<senha.length();j++) {
    		if (senha[i] == senha[j]) {
    			throw invalid_argument("Argumento invalido.");
    		}
    	}
    }
}

void Senha::setSenha(string senha) throw (invalid_argument){
    validar(senha);
    this->senha = senha;
}





/** class Matricula
* funço validar
* função setMat
**/
void Matricula::validar(string matricula) throw (invalid_argument){
	int i;
    if (matricula.length() != LIMITE) {
        throw invalid_argument("Argumento invalido.");
    }
    for (i=0;i<matricula.length();i++) {
       	if (matricula[i] < '0' || matricula[i] > '9') {
       		throw invalid_argument("Argumento invalido.");
        }
    }
}

void Matricula::setMat(string matricula) throw (invalid_argument){
    validar(matricula);
    this->matricula = matricula;
}







/** class Email
* funço validar
* função setEmail
**/
void Email::validar(string email) throw (invalid_argument){
	int i;
	int cont=0;
	for (i=0;i<email.length();i++) {
	   	if (email[i] == '@') {
	   		cont++;
	   	}
	}
    if (cont != 1) {
        throw invalid_argument("Argumento invalido.");
    }
    for (i=0;i<email.length();i++) {
    	if (email[i] == '!' || email[i] == '#' || email[i] == '$' || email[i] == '%' || email[i] == '&' || (email[i] >= 'A' && email[i] <= 'Z')) {
    		throw invalid_argument("Argumento invalido.");
    	}
    }
}

void Email::setEmail(string email) throw (invalid_argument){
    validar(email);
    this->email = email;
}





/** class Custo
* funço validar
* função setCusto
**/
void Custo::validar(float custo) throw (invalid_argument){
    if (custo <= 0) {
        throw invalid_argument("Argumento invalido.");
    }
}

void Custo::setCusto(float custo) throw (invalid_argument){
    validar(custo);
    this->custo = custo;
}

