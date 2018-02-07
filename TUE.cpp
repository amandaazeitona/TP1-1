#include <iostream>
#include <string>
#include "Entidades.h"
#include "Dominios.h"
#include "TUE.h"

using namespace std;

/// Definição dos valores iniciais de sucesso, falha.
const int TUGerenteDeSistema::SUCESSO =  0;
const int TUGerenteDeSistema::FALHA   = -1;

const int TUGerenteDeProjeto::SUCESSO =  0;
const int TUGerenteDeProjeto::FALHA   = -1;

const int TUDesenvolvedor::SUCESSO =  0;
const int TUDesenvolvedor::FALHA   = -1;

const int TUFase::SUCESSO =  0;
const int TUFase::FALHA   = -1;

const int TUProjeto::SUCESSO =  0;
const int TUProjeto::FALHA   = -1;


//////////////////////////////////////////////////////////////////////////////////////////



/** Class TUGerenteDeSistema
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUGerenteDeSistema::setUp(){
    gerente = new GerenteDeSistema();
    estado = SUCESSO;
}

void TUGerenteDeSistema::tearDown(){
    delete gerente;
}

void TUGerenteDeSistema::testarCenarioSucesso(){
	const static string NOME_VALIDO = "Frederico Pinheiro D";
	const static string MATRICULA_VALIDA = "12345";
	const static string SENHA_VALIDA = "12345";
    try{
    	gerente->setNome(NOME_VALIDO);
    	gerente->setMat(MATRICULA_VALIDA);
    	gerente->setSenha(SENHA_VALIDA);
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUGerenteDeSistema::testarCenarioFalha(){
	const static string NOME_INVALIDO = "Frederico Pinhe4ro D";
	const static string MATRICULA_INVALIDA = "123o5";
	const static string SENHA_INVALIDA = "13345";
    try{
    	gerente->setNome(NOME_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
    	try{
    	    gerente->setMat(MATRICULA_INVALIDA);
    	    estado = FALHA;
    	}
    	catch(invalid_argument excecao){
    		try{
    		    gerente->setSenha(SENHA_INVALIDA);
    		    estado = FALHA;
    		}
    		catch(invalid_argument excecao){
    		    return;
    		}
    	}
    }
}

int TUGerenteDeSistema::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}



//////////////////////////////////////////////////////////////////////////////////////////



/** Class TUGerenteDeProjeto
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUGerenteDeProjeto::setUp(){
    gerente = new GerenteDeProjeto();
    estado = SUCESSO;
}

void TUGerenteDeProjeto::tearDown(){
    delete gerente;
}

void TUGerenteDeProjeto::testarCenarioSucesso(){
	const static string NOME_VALIDO = "Frederico Pinheiro D";
	const static string MATRICULA_VALIDA = "12345";
	const static string SENHA_VALIDA = "12345";
	const static string TELEFONE_VALIDO = "12345678";
    try{
    	gerente->setNome(NOME_VALIDO);
    	gerente->setMat(MATRICULA_VALIDA);
    	gerente->setSenha(SENHA_VALIDA);
    	gerente->setTel(TELEFONE_VALIDO);
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUGerenteDeProjeto::testarCenarioFalha(){
	const static string NOME_INVALIDO = "Frederico Pinhe4ro D";
	const static string MATRICULA_INVALIDA = "123o5";
	const static string SENHA_INVALIDA = "13345";
	const static string TELEFONE_INVALIDO = "12345p78";
    try{
    	gerente->setNome(NOME_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
    	try{
    	    gerente->setMat(MATRICULA_INVALIDA);
    	    estado = FALHA;
    	}
    	catch(invalid_argument excecao){
    		try{
    		    gerente->setSenha(SENHA_INVALIDA);
    		    estado = FALHA;
    		}
    		catch(invalid_argument excecao){
    			try{
    				gerente->setTel(TELEFONE_INVALIDO);
    			    estado = FALHA;
    			}
    			catch(invalid_argument excecao){
    	 		    return;
    	   		}
    		}
    	}
    }
}

int TUGerenteDeProjeto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}



//////////////////////////////////////////////////////////////////////////////////////////



/** Class TUDesenvolvedor
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUDesenvolvedor::setUp(){
    desenvolvedor = new Desenvolvedor();
    estado = SUCESSO;
}

void TUDesenvolvedor::tearDown(){
    delete desenvolvedor;
}

void TUDesenvolvedor::testarCenarioSucesso(){
	const static string NOME_VALIDO = "Frederico Pinheiro D";
	const static string MATRICULA_VALIDA = "12345";
	const static string SENHA_VALIDA = "12345";
	const static string EMAIL_VALIDO = "frederico@iii.com";
	const static string FUNCAO_VALIDA = "1";
    try{
    	desenvolvedor->setNome(NOME_VALIDO);
    	desenvolvedor->setMat(MATRICULA_VALIDA);
    	desenvolvedor->setSenha(SENHA_VALIDA);
    	desenvolvedor->setEmail(EMAIL_VALIDO);
    	desenvolvedor->setFuncao(FUNCAO_VALIDA);
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUDesenvolvedor::testarCenarioFalha(){
	const static string NOME_INVALIDO = "Frederico Pinhe4ro D";
	const static string MATRICULA_INVALIDA = "123o5";
	const static string SENHA_INVALIDA = "13345";
	const static string EMAIL_INVALIDO = "frEderico@iii.com";
	const static string FUNCAO_INVALIDA = "11";
    try{
    	desenvolvedor->setNome(NOME_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
    	try{
    		desenvolvedor->setMat(MATRICULA_INVALIDA);
    	    estado = FALHA;
    	}
    	catch(invalid_argument excecao){
    		try{
    			desenvolvedor->setSenha(SENHA_INVALIDA);
    		    estado = FALHA;
    		}
    		catch(invalid_argument excecao){
    			try{
    				desenvolvedor->setEmail(EMAIL_INVALIDO);
    			    estado = FALHA;
    			}
    			catch(invalid_argument excecao){
    				try{
    					desenvolvedor->setFuncao(FUNCAO_INVALIDA);
    					estado = FALHA;
    				}
    				catch(invalid_argument excecao){
    					return;
    				}
    	   		}
    		}
    	}
    }
}

int TUDesenvolvedor::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//////////////////////////////////////////////////////////////////////////////////////////



/** Class TUFase
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUFase::setUp(){
    fase = new Fase();
    estado = SUCESSO;
}

void TUFase::tearDown(){
    delete fase;
}

void TUFase::testarCenarioSucesso(){
	const static string DATA_VALIDA = "12/08/2025";
	const static string DIGITO_VALIDO = "1";
    try{
    	fase->setDataIni(DATA_VALIDA);
    	fase->setDataTer(DATA_VALIDA);
    	fase->setDigito(DIGITO_VALIDO);
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUFase::testarCenarioFalha(){
	const static string DATA_INVALIDA = "12/28/2025";
	const static string DIGITO_INVALIDO = "11";
    try{
    	fase->setDataIni(DATA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
    	try{
        	fase->setDataTer(DATA_INVALIDA);
    	    estado = FALHA;
    	}
    	catch(invalid_argument excecao){
    		try{
    			fase->setDigito(DIGITO_INVALIDO);
    		    estado = FALHA;
    		}
    		catch(invalid_argument excecao){
    		    return;
    		}
    	}
    }
}

int TUFase::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}




//////////////////////////////////////////////////////////////////////////////////////////



/** Class TUProjeto
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUProjeto::setUp(){
    projeto = new Projeto();
    estado = SUCESSO;
}

void TUProjeto::tearDown(){
    delete projeto;
}

void TUProjeto::testarCenarioSucesso(){
    const static string NOME_VALIDO = "Frederico Pinheiro D";
    const static string CODIGO_VALIDO = "aaaaa";
	const static string DATA_VALIDA = "12/08/2025";
	const static float CUSTO_VALIDO = 5;
	const static string DIGITO_VALIDO = "1";
	GerenteDeProjeto gerente;
	Desenvolvedor desenvolvedor1;
	Desenvolvedor desenvolvedor2;
	Desenvolvedor desenvolvedor3;
    try{
        projeto->setNome(NOME_VALIDO);
        projeto->setCodigo(CODIGO_VALIDO);
        projeto->setGerente(&gerente);
    	projeto->setDataIni(DATA_VALIDA);
    	projeto->setDataTer(DATA_VALIDA);
    	projeto->setCustoAtual(CUSTO_VALIDO);
    	projeto->setCustoPrev(CUSTO_VALIDO);
    	projeto->setDigito(DIGITO_VALIDO);
    	projeto->setDesenvolvedor(&desenvolvedor1);
    	projeto->setDesenvolvedor(&desenvolvedor2);
    	projeto->setDesenvolvedor(&desenvolvedor3);
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUProjeto::testarCenarioFalha(){
    const static string NOME_INVALIDO = "Frederico Pinhei&o D";
    const static string CODIGO_INVALIDO = "aa4aa";
	const static string DATA_INVALIDA = "12/44/2025";
	const static float CUSTO_INVALIDO = 0;
	const static string DIGITO_INVALIDO = "11";
    try{
    	projeto->setDataIni(DATA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
    	try{
        	projeto->setDataTer(DATA_INVALIDA);
    	    estado = FALHA;
    	}
    	catch(invalid_argument excecao){
    		try{
    			projeto->setDigito(DIGITO_INVALIDO);
    		    estado = FALHA;
    		}
    		catch(invalid_argument excecao){
    		    try{
                    projeto->setNome(NOME_INVALIDO);
                    estado = FALHA;
                }
                catch(invalid_argument excecao){
                    try{
                         projeto->setCodigo(CODIGO_INVALIDO);
                        estado = FALHA;
                    }
                    catch(invalid_argument excecao){
                        try{
                            projeto->setCustoAtual(CUSTO_INVALIDO);
                            estado = FALHA;
                        }
                        catch(invalid_argument excecao){
                            try{
                                projeto->setCustoPrev(CUSTO_INVALIDO);
                                estado = FALHA;
                            }
                            catch(invalid_argument excecao){
                                return;
                            }
                        }
                    }
                }
    		}
    	}
    }
}

int TUProjeto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


