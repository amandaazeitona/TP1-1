#include <iostream>
#include <string>
#include "Entidades.h"
#include "Dominios.h"

using namespace std;



/** class GerenteDeSistema
* funço setNome
* função setMat
* função setSenha
**/
void GerenteDeSistema::setNome(string nome) throw (invalid_argument) {
	this->nome.setNome(nome);
}

void GerenteDeSistema::setMat(string matricula) throw (invalid_argument) {
	this->matricula.setMat(matricula);
}

void GerenteDeSistema::setSenha(string senha) throw (invalid_argument) {
	this->senha.setSenha(senha);
}




/** class GerenteDeProjeto
* funço setNome
* função setMat
* função setSenha
* função setTel
**/
void GerenteDeProjeto::setNome(string nome) throw (invalid_argument) {
	this->nome.setNome(nome);
}

void GerenteDeProjeto::setMat(string matricula) throw (invalid_argument) {
	this->matricula.setMat(matricula);
}

void GerenteDeProjeto::setSenha(string senha) throw (invalid_argument) {
	this->senha.setSenha(senha);
}

void GerenteDeProjeto::setTel(string telefone) throw (invalid_argument) {
	this->telefone.setTel(telefone);
}







/** class Desenvolvedor
* funço setNome
* função setMat
* função setSenha
* função setEmail
* função setFuncao
**/
void Desenvolvedor::setNome(string nome) throw (invalid_argument) {
	this->nome.setNome(nome);
}

void Desenvolvedor::setMat(string matricula) throw (invalid_argument) {
	this->matricula.setMat(matricula);
}

void Desenvolvedor::setSenha(string senha) throw (invalid_argument) {
	this->senha.setSenha(senha);
}

void Desenvolvedor::setEmail(string email) throw (invalid_argument) {
	this->email.setEmail(email);
}

void Desenvolvedor::setFuncao(string funcao) throw (invalid_argument) {
	this->funcao.setDigito(funcao);
}






/** class Fase
* função setDataIni
* função setDataTer
* função setDigito
**/
void Fase::setDataIni(string data_de_inicio) throw (invalid_argument) {
	this->data_de_inicio.setData(data_de_inicio);
}

void Fase::setDataTer(string data_de_termino) throw (invalid_argument) {
	this->data_de_termino.setData(data_de_termino);
}

void Fase::setDigito(string codigo) throw (invalid_argument) {
	this->codigo.setDigito(codigo);
}







/** class GerenteDeSistema
* funço setNome
* função setCodigo
* função setGerente
* função setDataIni
* função setDataTer
* função setCustoAtual
* função setCustoPrev
* função setDigito
**/
void Projeto::setNome(string nome) throw (invalid_argument) {
	this->nome.setNome(nome);
}

void Projeto::setCodigo(string codigo_projeto) throw (invalid_argument) {
	this->codigo_projeto.setCodigo(codigo_projeto);
}

void Projeto::setGerente(GerenteDeProjeto *gerente) throw (invalid_argument) {
	this->gerente = gerente;
}

void Projeto::setDataIni(string data_de_inicio) throw (invalid_argument) {
	this->data_de_inicio.setData(data_de_inicio);
}

void Projeto::setDataTer(string data_de_termino) throw (invalid_argument) {
	this->data_de_termino.setData(data_de_termino);
}

void Projeto::setCustoAtual(float custo) throw (invalid_argument) {
	this->custo_atual.setCusto(custo);
}

void Projeto::setCustoPrev(float custo) throw (invalid_argument) {
	this->custo_previsto.setCusto(custo);
}

void Projeto::setDigito(string codigo) throw (invalid_argument) {
	this->codigo_fase.setDigito(codigo);
}


/** class GerenteDeSistema
* funço setDesenvolvedor, utiliza uma lista de desenvolvedores, DesenvolvedorLista
**/
void Projeto::setDesenvolvedor(const Desenvolvedor *desenvolvedor) {
    DesenvolvedorLista *ptr = new DesenvolvedorLista();
    ptr->desenvolvedor = desenvolvedor;
    ptr->proximo = primeiroElemento;
    primeiroElemento = ptr;
}
