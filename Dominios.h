#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <stdexcept>


using namespace std;

/** CodigoDoProjeto
* strinng codigo
*função privada validar
*funçoes publicas: setCodigo e getCodigo
**/
class CodigoDoProjeto {
private:
		string codigo;

    	const static int LIMITE;

    	void validar(string) throw (invalid_argument);


public:
		void setCodigo(string) throw (invalid_argument);

        string getCodigo() {
            return codigo;
        }
};


/** EstadoDeProjeto
* strinng digito
*função privada validar
*funçoes publicas: setDigito e getDigito
**/
class EstadoDeProjeto {
private:
		string digito;

    	const static int LIMITE;

    	void validar(string) throw (invalid_argument);


public:
		void setDigito(string) throw (invalid_argument);

        string getDigito() {
            return digito;
        }
};




/** CodigoDeFaseDeProjeto
* strinng digito
*função privada validar
*funçoes publicas: setDigito e getDigito
**/
class CodigoDeFaseDeProjeto {
private:
		string digito;

    	const static int LIMITE;

    	void validar(string) throw (invalid_argument);


public:
		void setDigito(string) throw (invalid_argument);

        string getDigito() {
            return digito;
        }
};



/** Funcao
* strinng digito
*função privada validar
*funçoes publicas: setDigito e getDigito
**/
class Funcao {
private:
		string digito;

    	const static int LIMITE;

    	void validar(string) throw (invalid_argument);


public:
		void setDigito(string) throw (invalid_argument);

        string getDigito() {
            return digito;
        }
};


/** Data
* strinng data
*função privada validar
*funçoes publicas: setData e getData
**/
class Data {
private:
		string data;

    	const static int LIMITE;

    	void validar(string) throw (invalid_argument);


public:
		void setData(string) throw (invalid_argument);

        string getData() {
            return data;
        }
};



/** Nome
* strinng nome
*função privada validar
*funçoes publicas: setNome e getNome
**/
class Nome {
private:
		string nome;

    	const static int LIMITE;

    	void validar(string) throw (invalid_argument);


public:
		void setNome(string) throw (invalid_argument);

        string getNome() {
            return nome;
        }
};




/** Telefone
* strinng telefone
*função privada validar
*funçoes publicas: setTel e getTel
**/
class Telefone {
private:
		string telefone;

    	const static int LIMITE;

    	void validar(string) throw (invalid_argument);


public:
		void setTel(string) throw (invalid_argument);

        string getTel() {
            return telefone;
        }
};



/** Senha
* strinng senha
*função privada validar
*funçoes publicas: setSenha e getSenha
**/
class Senha {
private:
		string senha;

    	const static int LIMITE;

    	void validar(string) throw (invalid_argument);


public:
		void setSenha(string) throw (invalid_argument);

        string getSenha() {
            return senha;
        }
};




/** Matricula
* strinng matricula
*função privada validar
*funçoes publicas: setMat e getMat
**/
class Matricula {
private:
		string matricula;

    	const static int LIMITE;

    	void validar(string) throw (invalid_argument);


public:
		void setMat(string) throw (invalid_argument);

        string getMat() {
            return matricula;
        }
};


/** Email
* strinng email
*função privada validar
*funçoes publicas: setEmail e getEmail
**/
class Email {
private:
		string email;


    	void validar(string) throw (invalid_argument);


public:
		void setEmail(string) throw (invalid_argument);

        string getEmail() {
            return email;
        }
};


/** Custo
* strinng custo
*função privada validar
*funçoes publicas: setCusto e getCusto
**/
class Custo {
private:
		float custo;


    	void validar(float) throw (invalid_argument);


public:
		void setCusto(float) throw (invalid_argument);

		float getCusto() {
            return custo;
        }
};

#endif // DOMINIOS_H_INCLUDED

