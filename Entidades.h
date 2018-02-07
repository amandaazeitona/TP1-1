#ifndef ENTIDADES_H_
#define ENTIDADES_H_

#include "Dominios.h"
#include <string>
#include <stdexcept>


/** GerenteDeSistema
* Atributos: Nome nome, Matricula matricula e Senha senha
* função get e set para todos os atrubutos
**/
class GerenteDeSistema {
private:
		Nome nome;
		Matricula matricula;
		Senha senha;

public:

		void setNome(string) throw (invalid_argument);
		void setMat(string) throw (invalid_argument);
		void setSenha(string) throw (invalid_argument);

        string getNome() {
        	return nome.getNome();
        }
        string getMat() {
            return matricula.getMat();
        }
        string getSenha() {
        	return senha.getSenha();
        }
};




/** GerenteDeProjeto
* Atributos: Nome nome, Matricula matricula, Senha senha e Telefone telefone
* função get e set para todos os atrubutos
**/
class GerenteDeProjeto {
private:
		Nome nome;
		Matricula matricula;
		Senha senha;
		Telefone telefone;

public:

		void setNome(string) throw (invalid_argument);
		void setMat(string) throw (invalid_argument);
		void setSenha(string) throw (invalid_argument);
		void setTel(string) throw (invalid_argument);

        string getNome() {
        	return nome.getNome();
        }
        string getMat() {
            return matricula.getMat();
        }
        string getSenha() {
        	return senha.getSenha();
        }
        string getTel() {
           	return telefone.getTel();
        }
};




/** GerenteDeProjeto
* Atributos: Nome nome, Matricula matricula, Senha senha e Telefone telefone
* função get e set para todos os atrubutos
**/
class Desenvolvedor {
private:
		Nome nome;
		Matricula matricula;
		Senha senha;
		Email email;
		Funcao funcao;

public:

		void setNome(string) throw (invalid_argument);
		void setMat(string) throw (invalid_argument);
		void setSenha(string) throw (invalid_argument);
		void setEmail(string) throw (invalid_argument);
		void setFuncao(string) throw (invalid_argument);

        string getNome() {
        	return nome.getNome();
        }
        string getMat() {
            return matricula.getMat();
        }
        string getSenha() {
        	return senha.getSenha();
        }
        string getEmail() {
           	return email.getEmail();
        }
        string getFuncao() {
            return funcao.getDigito();
        }
};



/** Fase
* Atributos: Data data_de_inicio, Data data_de_termino e CodigoDeFaseDeProjeto codigo
* função get e set para todos os atrubutos
**/
class Fase {
private:
		Data data_de_inicio;
		Data data_de_termino;
		CodigoDeFaseDeProjeto codigo;

public:

		void setDataIni(string) throw (invalid_argument);
		void setDataTer(string) throw (invalid_argument);
		void setDigito(string) throw (invalid_argument);

        string getDataIni() {
        	return data_de_inicio.getData();
        }
        string getDataTer() {
            return data_de_termino.getData();
        }
        string getDigito() {
        	return codigo.getDigito();
        }
};





//// Lista de desenvolvedores
class DesenvolvedorLista{

    friend class Projeto;

private:
    const Desenvolvedor *desenvolvedor;

    DesenvolvedorLista *proximo;
};


/** Projeto
* Atributos: Nome nome, CodigoDoProjeto codigo_projeto, GerenteDeProjeto *gerente, Data data_de_inicio, Data data_de_termino, Custo custo_atual, Custo custo_previsto e CodigoDeFaseDeProjeto codigo_fase;
* Custo custo_atual, Custo custo_previsto e CodigoDeFaseDeProjeto codigo_fase
* lista de desenvolvedores:  DesenvolvedorLista *primeiroElemento
* função get e set para todos os atrubutos
**/
class Projeto {
private:
        Nome nome;
		CodigoDoProjeto codigo_projeto;
		GerenteDeProjeto *gerente;
		Data data_de_inicio;
		Data data_de_termino;
        Custo custo_atual;
        Custo custo_previsto;
        CodigoDeFaseDeProjeto codigo_fase;

        DesenvolvedorLista *primeiroElemento;

public:

        Projeto() {
            primeiroElemento = NULL;
        }

        void setNome(string) throw (invalid_argument);
        void setCodigo(string) throw (invalid_argument);
        void setGerente(GerenteDeProjeto*) throw (invalid_argument);
		void setDataIni(string) throw (invalid_argument);
		void setDataTer(string) throw (invalid_argument);
		void setCustoAtual(float) throw (invalid_argument);
		void setCustoPrev(float) throw (invalid_argument);
		void setDigito(string) throw (invalid_argument);

        void setDesenvolvedor(const Desenvolvedor *desenvolvedor);

        string getNome() {
        	return nome.getNome();
        }
        string getCodigo() {
        	return codigo_projeto.getCodigo();
        }
        GerenteDeProjeto *getGerente() {
        	return gerente;
        }
        string getDataIni() {
        	return data_de_inicio.getData();
        }
        string getDataTer() {
            return data_de_termino.getData();
        }
        float getCustoAtual() {
            return custo_atual.getCusto();
        }
        float getCustoPrev() {
            return custo_previsto.getCusto();
        }
        string getDigito() {
        	return codigo_fase.getDigito();
        }
};



#endif /* ENTIDADES_H_ */
