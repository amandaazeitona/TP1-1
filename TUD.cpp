#include "TUD.h"
#include <iostream>
#include <string>
#include "Dominios.h"

using namespace std;

/// Definição dos valores iniciais de sucesso, falha, valor valido e invalido.
const int TUCodigoDoProjeto::SUCESSO =  0;
const int TUCodigoDoProjeto::FALHA   = -1;
const string TUCodigoDoProjeto::VALOR_VALIDO   = "aoeRY";
const string TUCodigoDoProjeto::VALOR_INVALIDO = "aeE45";

const int TUEstadoDeProjeto::SUCESSO =  0;
const int TUEstadoDeProjeto::FALHA   = -1;
const string TUEstadoDeProjeto::VALOR_VALIDO   = "1";
const string TUEstadoDeProjeto::VALOR_INVALIDO = "11";

const int TUCodigoDeFaseDeProjeto::SUCESSO =  0;
const int TUCodigoDeFaseDeProjeto::FALHA   = -1;
const string TUCodigoDeFaseDeProjeto::VALOR_VALIDO   = "1";
const string TUCodigoDeFaseDeProjeto::VALOR_INVALIDO = "11";

const int TUFuncao::SUCESSO =  0;
const int TUFuncao::FALHA   = -1;
const string TUFuncao::VALOR_VALIDO   = "1";
const string TUFuncao::VALOR_INVALIDO = "11";

const int TUData::SUCESSO =  0;
const int TUData::FALHA   = -1;
const string TUData::VALOR_VALIDO   = "12/08/2025";
const string TUData::VALOR_INVALIDO = "11/33/2016";

const int TUNome::SUCESSO =  0;
const int TUNome::FALHA   = -1;
const string TUNome::VALOR_VALIDO   = "Frederico Pinheiro D";
const string TUNome::VALOR_INVALIDO = "Frederico Pi&heiro D";

const int TUTelefone::SUCESSO =  0;
const int TUTelefone::FALHA   = -1;
const string TUTelefone::VALOR_VALIDO   = "12345678";
const string TUTelefone::VALOR_INVALIDO = "12345f78";

const int TUSenha::SUCESSO =  0;
const int TUSenha::FALHA   = -1;
const string TUSenha::VALOR_VALIDO   = "asdfg";
const string TUSenha::VALOR_INVALIDO = "asddf";

const int TUMatricula::SUCESSO =  0;
const int TUMatricula::FALHA   = -1;
const string TUMatricula::VALOR_VALIDO   = "12345";
const string TUMatricula::VALOR_INVALIDO = "asddf";

const int TUEmail::SUCESSO =  0;
const int TUEmail::FALHA   = -1;
const string TUEmail::VALOR_VALIDO   = "asd3@ssd.com";
const string TUEmail::VALOR_INVALIDO = "aSd3@ssd.com";

const int TUCusto::SUCESSO =  0;
const int TUCusto::FALHA   = -1;
const int TUCusto::VALOR_VALIDO   = 50;
const int TUCusto::VALOR_INVALIDO = 0;



/** Class TUCodigoDoProjeto
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUCodigoDoProjeto::setUp(){
    codigo = new CodigoDoProjeto();
    estado = SUCESSO;
}

void TUCodigoDoProjeto::tearDown(){
    delete codigo;
}

void TUCodigoDoProjeto::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigoDoProjeto::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigoDoProjeto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


///////////////////////////////////////////////////////////////////////////////////////


/** Class TUEstadoDeProjeto
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUEstadoDeProjeto::setUp(){
    digito = new EstadoDeProjeto();
    estado = SUCESSO;
}

void TUEstadoDeProjeto::tearDown(){
    delete digito;
}

void TUEstadoDeProjeto::testarCenarioSucesso(){
    try{
    	digito->setDigito(VALOR_VALIDO);
        if (digito->getDigito() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUEstadoDeProjeto::testarCenarioFalha(){
    try{
    	digito->setDigito(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUEstadoDeProjeto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/** Class TUCodigoDeFaseDeProjeto
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUCodigoDeFaseDeProjeto::setUp(){
    digito = new CodigoDeFaseDeProjeto();
    estado = SUCESSO;
}

void TUCodigoDeFaseDeProjeto::tearDown(){
    delete digito;
}

void TUCodigoDeFaseDeProjeto::testarCenarioSucesso(){
    try{
    	digito->setDigito(VALOR_VALIDO);
        if (digito->getDigito() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigoDeFaseDeProjeto::testarCenarioFalha(){
    try{
    	digito->setDigito(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigoDeFaseDeProjeto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}



///////////////////////////////////////////////////////////////////////////////////////////


/** Class TUFuncao
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUFuncao::setUp(){
    digito = new Funcao();
    estado = SUCESSO;
}

void TUFuncao::tearDown(){
    delete digito;
}

void TUFuncao::testarCenarioSucesso(){
    try{
    	digito->setDigito(VALOR_VALIDO);
        if (digito->getDigito() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUFuncao::testarCenarioFalha(){
    try{
    	digito->setDigito(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUFuncao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}





/////////////////////////////////////////////////////////////////////////////

/** Class TUData
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
    	data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
    	data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////



/** Class TUNome
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
    	nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
    	nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}






//////////////////////////////////////////////////////////////////////////////////////////////


/** Class TUTelefone
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUTelefone::setUp(){
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
    	telefone->setTel(VALOR_VALIDO);
        if (telefone->getTel() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
    	telefone->setTel(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}






//////////////////////////////////////////////////////////////////////////////////////////////


/** Class TUSenha
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
    	senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
    	senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}







//////////////////////////////////////////////////////////////////////////////////////////////


/** Class TUMatricula
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUMatricula::setUp(){
    matricula = new Matricula();
    estado = SUCESSO;
}

void TUMatricula::tearDown(){
    delete matricula;
}

void TUMatricula::testarCenarioSucesso(){
    try{
    	matricula->setMat(VALOR_VALIDO);
        if (matricula->getMat() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUMatricula::testarCenarioFalha(){
    try{
    	matricula->setMat(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUMatricula::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}







//////////////////////////////////////////////////////////////////////////////////////////////


/** Class TUEmail
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
    	email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
    	email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}







//////////////////////////////////////////////////////////////////////////////////////////////


/** Class TUCusto
* setUp: cria o objeto e coloca o estado inicial como SUCESSO
* tearDown: deleta o objeto
* testarCenarioSucesso: testa os valores validos e corretos
* testarCenarioFalha: força o erro, se não der errado, a validação esta errada
* run: mtodo puublico que roda todos os outros metodos
**/
void TUCusto::setUp(){
    custo = new Custo();
    estado = SUCESSO;
}

void TUCusto::tearDown(){
    delete custo;
}

void TUCusto::testarCenarioSucesso(){
    try{
    	custo->setCusto(VALOR_VALIDO);
        if (custo->getCusto() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCusto::testarCenarioFalha(){
    try{
    	custo->setCusto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCusto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
