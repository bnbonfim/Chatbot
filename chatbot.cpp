#include <iostream>
#include <string>
#include <fstream>//Cria��o do arquivo txt para armazenar os logins
#include <locale.h>
#include <stdlib.h> //Para fazer o uso do rand e gerar numeros aleat�rios
#include <unistd.h> // para o uso do sleep
#include <time.h> //usado com o srand para obter uma semente baseada no tempo atual
using namespace std;
//variaveis globais
float saldo = 0, aposta = 0, soma = 0;
int jogos, times, jogar, menu = 1, placar[2];


void atualizarSaldo() { //fun��o para atualizar o saldo
    saldo += soma;
    sleep(2);
    cout << "Saldo atual: " << saldo;
}
void jogarFutebol() { //fun��o para o jogo de futebol
    cout << "\n==================================================="<<endl;
    cout << "Escolha o jogo que quer apostar: ";
    cout << "Jogos\n1 - Flamengo X Fluminense\n2 - Corinthians X S�o Paulo\n3 - Gremio X Inter\n0 - Voltar ao menu inicial\n";
    cin >> jogos;
    if (jogos == 0) {
        menu = 2;  // Retorna ao menu anterior
    }

    //
    srand(time(NULL));//usado para que o rand n�o repita os numeros, troca a semente padr�o do rand
    placar[0] = rand() % 5; //gera numeros pseudoaleat�rios
    placar[1] = rand() % 5;



    if (jogos == 1) {
        cout << "Escolha o time para apostar:\n1 - Flamengo\n2 - Fluminense\n0 - Voltar ao menu inicial\n";
        cin >> times;
        cout << "==================================================="<<endl;
        if(times == 0){
            menu = 2;
        }
        else{
            cout << "Digite o valor que quer apostar:\n";
            cin >> aposta;
            while (aposta <= 0 || aposta > saldo) {
                cout << "N�o h� dinheiro o suficiente!\nInforme outro valor: ";
                cin >> aposta;
            }
            saldo -= aposta;
            cout << "Valor aceito, aguarde o resultado da sua aposta.\n" << endl;
            sleep(2);
            if ((times == 1 && placar[0] > placar[1]) || (times == 2 && placar[0] < placar[1])) {
                cout << "O seu time venceu com " << placar[times-1] << " gols.\nVoc� ganhou a aposta!" << endl;
                soma += (aposta * 2);
                cout << "Flamengo " << placar[0] << "X" << placar[1] << " Fluminense" << endl;
            }
            else if (placar[0] == placar[1]) {
                cout << "EMPATE!" << endl;
                cout << "Flamengo " << placar[0] << "X" << placar[1] << " Fluminense" << endl;
            }
            else {
                cout << "PERDEU!" << endl;
                cout << "Flamengo " << placar[0] << "X" << placar[1] << " Fluminense" << endl;
            }
            atualizarSaldo();
            }
    }
    else if (jogos == 2) {
        cout << "Escolha o time para apostar:\n1 - Conrinthians\n2 - S�o Paulo\n";
        cin >> times;
        cout << "==================================================="<<endl;
         if(times == 0){
            menu = 2;
        }
        else{
            cout << "Digite o valor que quer apostar:\n";
            cin >> aposta;
            while (aposta <= 0 || aposta > saldo) {
                cout << "N�o h� dinheiro o suficiente!\nInforme outro valor: ";
                cin >> aposta;
            }
            saldo -= aposta;
            cout << "Valor aceito, aguarde o resultado da sua aposta.\n" << endl;
            sleep(2);
             if ((times == 1 && placar[0] > placar[1]) || (times == 2 && placar[0] < placar[1])) {
                cout << "O seu time venceu com " << placar[times-1] << " gols.\nVoc� ganhou a aposta!" << endl;
                soma += (aposta * 2);
                cout << "Corinthians " << placar[0] << "X" << placar[1] << " S�o Paulo" << endl;
            }
            else if (placar[0] == placar[1]) {
                cout << "EMPATE!" << endl;
                cout << "Corinthians " << placar[0] << "X" << placar[1] << " S�o Paulo" << endl;
            }
            else {
                cout << "PERDEU!" << endl;
                cout << "Corinthians " << placar[0] << "X" << placar[1] << " S�o Paulo" << endl;
        }
        atualizarSaldo();

        }

    }
    else if (jogos == 3) {
        cout << "Escolha o time para apostar:\n1 - Gr�mio\n2 - Internacional\n";
        cin >> times;
        if(times == 0){
            menu = 2;
        }
        else {
            cout << "==================================================="<<endl;
            cout << "Digite o valor que quer apostar:\n";
            cin >> aposta;
            while (aposta <= 0 || aposta > saldo) {
                cout << "N�o h� dinheiro o suficiente!\nInforme outro valor: ";
                cin >> aposta;
            }
            saldo -= aposta;
            cout << "Valor aceito, aguarde o resultado da sua aposta.\n" << endl;
            sleep(2);
            if ((times == 1 && placar[0] > placar[1]) || (times == 2 && placar[0] < placar[1])) {
                cout << "O seu time venceu com " << placar[times-1] << " gols.\nVoc� ganhou a aposta!" << endl;
                soma += (aposta * 2);
                cout << "Gr�mio " << placar[0] << "X" << placar[1] << " Internacional" << endl;
            }
            else if (placar[0] == placar[1]) {
                cout << "EMPATE!" << endl;
                cout << "Gr�mio " << placar[0] << "X" << placar[1] << " Internacional" << endl;
            }
            else {
                cout << "PERDEU!" << endl;
                cout << "Gr�mio " << placar[0] << "X" << placar[1] << " Internacional" << endl;
            }
            atualizarSaldo();
        }


    }
}
void jogarBasquete() { //fun��o para o jogo de basquete
    cout << "\n==================================================="<<endl;
    cout << "Escolha o jogo que quer apostar: ";
    cout << "Jogos\n1 - NY Knicks X Toronto Raptors\n2 - Boston Celtics X Brooklyn Nets\n3 - Nuggets X Cavaliers\n0 - Voltar ao menu inicial\n";
    cin >> jogos;
    if (jogos == 0) {
        menu = 2;  // Retorna ao menu anterior
    }

    srand(time(NULL));
    placar[0] = rand() % 5;
    placar[1] = rand() % 5;



    if (jogos == 1) {
        cout << "Escolha o time para apostar:\n1 - NY Knicks\n2 - Toronto Raptors\n0 - Voltar ao menu inicial\n";
        cin >> times;
        cout << "==================================================="<<endl;
        if(times == 0){
            menu = 2;
            }
        else{
            cout << "Digite o valor que quer apostar:\n";
            cin >> aposta;
            while (aposta <= 0 || aposta > saldo) {
                cout << "N�o h� dinheiro o suficiente!\nInforme outro valor: ";
                cin >> aposta;
            }
            saldo -= aposta;
            cout << "Valor aceito, aguarde o resultado da sua aposta." << endl;
            sleep(2);
            if ((times == 1 && placar[0] > placar[1]) || (times == 2 && placar[0] < placar[1])) {
            cout << "O seu time venceu com " << placar[times-1] << " gols.\nVoc� ganhou a aposta!" << endl;
            soma += (aposta * 2);
            cout << "NY Knicks " << placar[0] << "X" << placar[1] << " Toronto Raptors" << endl;
            }
            else if (placar[0] == placar[1]) {
                cout << "EMPATE!" << endl;
                cout << "NY Knicks " << placar[0] << "X" << placar[1] << " Toronto Raptors" << endl;
            }
            else {
                cout << "PERDEU!" << endl;
                cout << "NY Knicks " << placar[0] << "X" << placar[1] << " Toronto Raptors" << endl;
            }
            atualizarSaldo();
        }
    }
    else if (jogos == 2) {
        cout << "Escolha o time para apostar:\n1 - Boston Celtics\n2 - Brooklyn Nets\n";
        cin >> times;
        cout << "==================================================="<<endl;
        if(times == 0){
            menu = 2;
        }
        else{
            cout << "Digite o valor que quer apostar:\n";
            cin >> aposta;
             while (aposta <= 0 || aposta > saldo) {
                cout << "N�o h� dinheiro o suficiente!\nInforme outro valor: ";
                cin >> aposta;
            }
            saldo -= aposta;
            cout << "Valor aceito, aguarde o resultado da sua aposta." << endl;
            if ((times == 1 && placar[0] > placar[1]) || (times == 2 && placar[0] < placar[1])) {
            cout << "O seu time venceu com " << placar[times-1] << " gols.\nVoc� ganhou a aposta!" << endl;
            soma +=(aposta * 2);
            cout << "Boston Celtics " << placar[0] << "X" << placar[1] << " Brooklyn Nets" << endl;
            }
            else if (placar[0] == placar[1]) {
                cout << "EMPATE!" << endl;
                cout << "Boston Celtics " << placar[0] << "X" << placar[1] << " Brooklyn Nets" << endl;
            }
            else {
                cout << "PERDEU!" << endl;
                cout << "Boston Celtics " << placar[0] << "X" << placar[1] << " Brooklyn Nets" << endl;
            }
            atualizarSaldo();
        }
    }
    else if (jogos == 3) {
        cout << "==================================================="<<endl;
        cout << "Escolha o time para apostar:\n1 - Nuggets\n2 - Cavaliers\n";
        cin >> times;
        cout << "==================================================="<<endl;
        if(times == 0){
            menu = 2;
        }
        else{
            cout << "Digite o valor que quer apostar:\n";
            cin >> aposta;
            while (aposta <= 0 || aposta > saldo) {
                cout << "N�o h� dinheiro o suficiente!\nInforme outro valor: ";
                cin >> aposta;
            }
            saldo -= aposta;
            cout << "Valor aceito, aguarde o resultado da sua aposta." << endl;
            if ((times == 1 && placar[0] > placar[1]) || (times == 2 && placar[0] < placar[1])) {
                cout << "O seu time venceu com " << placar[times-1] << " gols.\nVoc� ganhou a aposta!" << endl;
                soma += (aposta * 2);
                cout << "Nuggets " << placar[0] << "X" << placar[1] << " Cavaliers" << endl;
            }
            else if (placar[0] == placar[1]) {
                cout << "EMPATE!" << endl;
                cout << "Nuggets " << placar[0] << "X" << placar[1] << " Cavaliers" << endl;
            }
            else {
                cout << "PERDEU!" << endl;
                cout << "Nuggets " << placar[0] << "X" << placar[1] << " Cavaliers" << endl;
            }
            atualizarSaldo();
        }
    }
}
void jogarHandball() { //fun��o para o jogo de handball
    cout << "\n==================================================="<<endl;
    cout << "Escolha o jogo que quer apostar:\n";
    cout << "Jogos\n1 - Uninassau X Itaja�\n2 - S�o Carlos X Cascavel\n3 - Corinthians X Londrina\n0 - Voltar ao menu inicial\n";
    cin >> jogos;
    cout << "==================================================="<<endl;
    if (jogos == 0) {
        menu = 2;  // Retorna ao menu anterior
    }


    srand(time(NULL));
    placar[0] = rand() % 5;
    placar[1] = rand() % 5;



    if (jogos == 1) {
        cout << "Escolha o time para apostar:\n1 - Uninassau\n2 - Itaja�\n0 - Voltar ao menu inicialn";
        cin >> times;
        cout << "==================================================="<< endl;
        if (times == 0) {
        menu = 2;  // Retorna ao menu anterior
        }
        else{
            cout << "Digite o valor que quer apostar:\n";
            cin >> aposta;
            while (aposta <= 0 || aposta > saldo) {
                cout << "Voc� n�o pode apostar este valor!\nInforme outro valor: ";
                cin >> aposta;
            }
            saldo -= aposta;
            cout << "Valor aceito, aguarde o resultado da sua aposta." << endl;
            sleep(2);
            if ((times == 1 && placar[0] > placar[1]) || (times == 2 && placar[0] < placar[1])) {
            cout << "O seu time venceu com " << placar[times-1] << " gols.\nVoc� ganhou a aposta!" << endl;
            soma += (aposta * 2);
            cout << "Uninassau: " << placar[0] << " X Itaja�: " << placar[1] << endl;
            }
            else if (placar[0] == placar[1]) {
                cout << "EMPATE!" << endl;
                cout << "Uninassau: " << placar[0] << " X Itaja�: " << placar[1] << endl;
            }
            else {
                cout << "PERDEU!" << endl;
                cout << "Uninassau: " << placar[0] << " X Itaja�: " << placar[1] << endl;
            }
            atualizarSaldo();

        }
    }
        else if (jogos == 2) {
            cout << "Escolha o time para apostar:\n1 - S�o Carlos\n2 - Cascavel\n";
            cin >> times;
            if (times == 0) {
                menu = 2;  // Retorna ao menu anterior
            }
            else{
                cout << "==================================================="<<endl;
                cout << "Digite o valor que quer apostar:\n";
                cin >> aposta;
                while (aposta <= 0 || aposta > saldo) {
                    cout << "Voc� n�o pode apostar este valor!\nInforme outro valor: ";
                    cin >> aposta;
                }
                saldo -= aposta;
                cout << "Valor aceito, aguarde o resultado da sua aposta." << endl;
                sleep(2);
                if ((times == 1 && placar[0] > placar[1]) || (times == 2 && placar[0] < placar[1])) {
                    cout << "O seu time venceu com " << placar[times-1] << " gols.\nVoc� ganhou a aposta!" << endl;
                    soma += (aposta * 2);
                    cout << "S�o Carlos: " << placar[0] << " X Cascavel: " << placar[1] << endl;
                }
                else if (placar[0] == placar[1]) {
                    cout << "EMPATE!" << endl;
                    cout << "S�o Carlos: " << placar[0] << " X Cascavel: " << placar[1] << endl;
                }
                else {
                    cout << "PERDEU!" << endl;
                   cout << "S�o Carlos: " << placar[0] << " X Cascavel: " << placar[1] << endl;
                }
                atualizarSaldo();
            }

    }
    else if (jogos == 3) {
        cout << "Escolha o time para apostar:\n1 - Corinthians\n2 - Londrina\n";
        cin >> times;
        if (times == 0) {
            menu = 2;  // Retorna ao menu anterior
        }
        else{
            cout << "==================================================="<<endl;
            cout << "Digite o valor que quer apostar:\n";
            cin >> aposta;
            while (aposta <= 0 || aposta > saldo) {
                cout << "Voc� n�o pode apostar este valor!\nInforme outro valor: ";
                cin >> aposta;
            }
            saldo -= aposta;
            cout << "Valor aceito, aguarde o resultado da sua aposta." << endl;
            sleep(2);
             if ((times == 1 && placar[0] > placar[1]) || (times == 2 && placar[0] < placar[1])) {
                cout << "O seu time venceu com " << placar[times-1] << " gols.\nVoc� ganhou a aposta!" << endl;
                soma = saldo + (aposta * 2);
                cout << "Corinthians: " << placar[0] << " X Londrina: " << placar[1] << endl;
            }
            else if (placar[0] == placar[1]) {
                cout << "EMPATE!" << endl;
                cout << "Corinthians: " << placar[0] << " X Londrina: " << placar[1] << endl;
            }
            else {
                cout << "PERDEU!" << endl;
                cout << "Corinthians: " << placar[0] << " X Londrina: " << placar[1] << endl;
            }
            atualizarSaldo();
        }

    }

}
int main() {
    setlocale(LC_ALL, "");

    // Declara��o das vari�veis utilizadas no programa
    string saudacao, nome, senha, linha;
    int opcao;

    // Solicita e armazena uma sauda��o do usu�rio
    cin.ignore();
    getline(cin, saudacao);

    cout << "==================================================="<<endl;
    cout << "Ol�, sou o Bot de aposta!\n" << endl;
    while (menu > 0) {
        if (menu == 1) {
            // Exibe o menu de op��es
            cout << "Escolha uma das op��es abaixo:\n1. Cadastro\n2. Login\n0. Sair\n";
            cin >> opcao;

            if (opcao == 1) {
                // Cadastro de usu�rio
                cout << "==================================================="<<endl;
                cout << "Bem-vindo � �rea de Cadastro:\n";

                // Abre o arquivo de login no modo de escrita, com a op��o de adicionar dados ao final do arquivo
                ofstream login("login.txt", ios::app);

                // Solicita e armazena o nome de usu�rio
                cout << "Digite um usu�rio: ";
                cin.ignore();
                getline(cin, nome);
                login << nome << endl; // Escreve o nome de usu�rio no arquivo, seguido de uma quebra de linha

                // Solicita e armazena a senha
                cout << "Digite uma senha: ";
                cin >> senha;
                login << senha << endl; // Escreve a senha no arquivo, seguida de uma quebra de linha

                // Fecha o arquivo
                login.close();

                sleep(2);
                cout << "Voc� foi cadastrado. Bem-vindo ao clube!\n";
                cout << "==================================================="<<endl;
                menu = 2;
            }
            else if (opcao == 2) {
                // Login do usu�rio
                cout << "==================================================="<<endl;
                cout << "Bem-vindo � �rea de Login:\n";

                // Abre o arquivo de login no modo de leitura
                ifstream login("login.txt");

                // Solicita o nome de usu�rio e senha
                cout << "Digite um usu�rio: ";
                cin >> nome;
                cout << "Digite uma senha: ";
                cin >> senha;

                //bool usada para indicar se um determinado usu�rio foi encontrado durante a verifica��o de login.
                bool encontrado = false;
                if (login.is_open()) {
                    // Loop para ler as linhas do arquivo
                    while (getline(login, linha)) {
                        if (nome == linha) {
                            getline(login, linha); // L� a pr�xima linha que corresponde � senha

                            if (senha == linha) {
                                encontrado = true;
                                break;
                            }
                        }
                    }

                    // Fecha o arquivo
                    login.close();
                }

                if (encontrado) {
                    sleep(2);
                    cout << "Voc� est� logado\n";
                    menu = 2;
                }
                else {
                    cout << "Usu�rio n�o cadastrado. Deseja se cadastrar? (S/N) ";
                    char opcaoCadastro;
                    cin >> opcaoCadastro;

                    if (opcaoCadastro == 'S' || opcaoCadastro == 's') {
                        ofstream cadastro("login.txt", ios::app);
                        cadastro << nome << endl;
                        cadastro << senha << endl;
                        cadastro.close();
                        cout << "aguarde...";
                        sleep(2);
                        cout << "Cadastro realizado com sucesso!\n";
                    }
                    else {
                        cout << "� uma pena!";
                        break;
                    }
                }
            menu = 2;
            }
            else if (opcao == 0) {
                break;
            }
            else {
                cout << "Op��o inv�lida.";
            }
        cout << "Deposite um saldo para come�ar a apostar: ";
        cin >> saldo;
        }
        else if (menu == 2) {
            int esporte;
            char jogar;

            cout << "\n==================================================="<<endl;
            cout << "Escolha em qual esporte quer apostar:\n1 - Futebol\n2 - Basquete\n3 - Handbol\n0 - sair\n";
            cin >> esporte;

            if (esporte == 1) {
                jogarFutebol();

            }
            else if (esporte == 2) {
                jogarBasquete();

            }
            else if (esporte == 3) {
                jogarHandball();

            }
            else if (esporte == 0){
                exit(0);
            }

        }

    }
    return 0;
}
