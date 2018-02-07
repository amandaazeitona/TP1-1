#ifndef TUE_H_
#define TUE_H_

#include <iostream>
#include <string>
#include "Entidades.h"
#include "Dominios.h"


/** Teste para ver de a classe TUGerenteDeSistema está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUGerenteDeSistema {
private:


    GerenteDeSistema *gerente;

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



/** Teste para ver de a classe TUGerenteDeProjeto está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUGerenteDeProjeto {
private:


    GerenteDeProjeto *gerente;

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



/** Teste para ver de a classe TUDesenvolvedor está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUDesenvolvedor {
private:

    Desenvolvedor *desenvolvedor;

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




/** Teste para ver de a classe TUFase está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUFase {
private:

    Fase *fase;

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




/** Teste para ver de a classe TUProjeto está funcionanco corretamente
* O teste possui as funçes privadas setUp, tearDown, testarCenarioSucesso e testarCenarioFalha
* E um metudo publico run, que chama todos os outros
**/
class TUProjeto {
private:

    Projeto *projeto;

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

#endif /* TUE_H_ */
