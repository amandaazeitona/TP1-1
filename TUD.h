#ifndef TUD_H_
#define TUD_H_

#include <string>
#include <stdexcept>
#include "Dominios.h"


/** Teste para ver de a classe TUCodigoDoProjeto está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUCodigoDoProjeto {
private:


    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    CodigoDoProjeto *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO;
    const static int FALHA;

    int run();
};






/** Teste para ver de a classe TUEstadoDeProjeto está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUEstadoDeProjeto {
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

	const static string VALOR_VALIDO;
	const static string VALOR_INVALIDO;

    EstadoDeProjeto *digito;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO;
    const static int FALHA;

    int run();
};



/** Teste para ver de a classe TUCodigoDeFaseDeProjeto está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUCodigoDeFaseDeProjeto {
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    CodigoDeFaseDeProjeto *digito;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO;
    const static int FALHA;

    int run();
};




/** Teste para ver de a classe TUFuncao está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUFuncao {
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Funcao *digito;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO;
    const static int FALHA;

    int run();
};






/** Teste para ver de a classe TUData está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUData {
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Data *data;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO;
    const static int FALHA;

    int run();
};




/** Teste para ver de a classe TUNome está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUNome {
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Nome *nome;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO;
    const static int FALHA;

    int run();
};



/** Teste para ver de a classe TUTelefone está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUTelefone {
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Telefone *telefone;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO;
    const static int FALHA;

    int run();
};




/** Teste para ver de a classe TUSenha está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUSenha {
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Senha *senha;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO;
    const static int FALHA;

    int run();
};





/** Teste para ver de a classe TUMatricula está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUMatricula {
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Matricula *matricula;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO;
    const static int FALHA;

    int run();
};





/** Teste para ver de a classe TUEmail está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUEmail {
private:


    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Email *email;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:


    const static int SUCESSO;
    const static int FALHA;

    int run();
};




/** Teste para ver de a classe TUCusto está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUCusto {
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static int VALOR_VALIDO;
    const static int VALOR_INVALIDO;

    Custo *custo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO;
    const static int FALHA;

    int run();
};

#endif /* TUD_H_ */
