#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int soma(int qtddnum = 0);
int subt(int qtddnum = 0);
int divisao(int qtddnum = 0);
int mult(int qtddnum = 0);

int expoente(int a = 0, int exps = 0);
int square(int a = 0);

int first_grau_x(int b = 0, int c = 0, int a = 0);
int first_grau_a(int x = 0, int b = 0, int c = 0);
int first_grau_b(int a = 0, int c = 0, int x = 0);
int first_grau_c(int b = 0, int a = 0, int x = 0);

int second_grau_a(int b = 0, int c = 0, int d = 0, int x = 0);
int second_grau_b(int a = 0, int c = 0, int d = 0, int x = 0);
int second_grau_c(int a = 0, int b = 0, int d = 0, int x = 0);
int second_grau_d(int a = 0, int b = 0, int c = 0, int x = 0);
void second_grau_x(int a = 0, int b = 0, int c = 0, int d = 0);

int terc_grau_a(int b = 0, int c = 0, int d = 0, int e = 0, int x = 0);
int terc_grau_b(int a = 0, int c = 0, int d = 0, int e = 0, int x = 0);
int terc_grau_c(int a = 0, int b = 0, int d = 0, int e = 0, int x = 0);
int terc_grau_d(int a = 0, int b = 0, int c = 0, int e = 0, int x = 0);
int terc_grau_e(int a = 0, int b = 0, int c = 0, int d = 0, int x = 0);
void terc_grau_x(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0);

int main(){

cout << "Versao: BETA 1.0.9\n\n";
cout << "Autor: Pedro Augusto Barbosa Aparecido\nInstrucoes : \n";
cout << "*Coloque  0  na incognita que queira saber\nData de criacao: 23/09/2020\nCorporacao: nenhuma\n\n";
cout << "Objetivo do projeto: Criar uma ferramenta para facilitar o calculo de equacoes, \nmas tambem funcionando para outros tipos de contas\n";

int valoresRepitidos1[4] = {0, 0, 0, 0};
int valoresRepetidos2[5] = {0, 0, 0, 0, 0};
int valoresRepetidos3[6] = {0, 0, 0, 0, 0, 0};

int grau = 1, x = 0, a = 0, b = 0, c = 0, d = 0, e  = 0;
int resultado = 0, zero_um = 0, resultado2 = 0, resultado3 = 0;
int condicao1 = 0, condicao2 = 0, condicao3 = 0, condicao4 = 0;
int condicao5 = 0, condicao6 = 0, condicao7 = 0, condicao8 = 0, condicao9 = 0;
int condicao10 = 0, condicao11 = 0, condicao12 = 0, condicao13 = 0, condicao14 = 0, condicao15 = 0;

int esc = 0, t = 0, somat = 0, qtdnum = 2;

char ValoresRepitidos1[4] = {'a', 'b', 'c', 'x'};
char ValoresRepetidos2[5] = {'a', 'b', 'c', 'd', 'x'};
char ValoresRepetidos3[6] = {'a', 'b', 'c', 'd', 'e', 'x'};

char escolha1;

string sair;

char escolha[8] = {'+', '-', '/', 'x', '^', 'v', 'n', 'N'};

string formato = "ax3 + bx2 + cx + d = e";
string formato2 = "ax2 + bx + c = d";
string formato3 = "ax + b = c";

cout << "\nEscolha seu modo, '1' para equacao e '0' para normal: ";
cin >> esc;
cout << endl;

if(esc == 1){

    cout << "Digite o grau da equacao : ";
    cin >> grau;
    cout << "\n";

    if(grau > 0){
        if(grau == 3){
        cout << "Formato escolhido: " << formato << "\n";

        cout << "Digite o valor de x: ";
        cin >> x;
        cout << "\nDigite o valor de a: ";
        cin >> a;
        cout << "\nDigite o valor de b: ";
        cin >> b;
        cout << "\nDigite o valor de c: ";
        cin >> c;
        cout << "\nDigite o valor de d: ";
        cin >> d;
        cout << "\nDigite o valor que eh resultante do x: ";
        cin >> e;
        cout << "\n\n";

        if(((a == 0) && (b == 0)) || ((a == 0) && (c == 0)) || ((a == 0) && (d == 0)) || ((a == 0) && (e == 0)) || ((a == 0) && (x == 0)) || ((b == 0) && (c == 0)) || ((b == 0) && (d == 0))
            || ((b == 0) && (e == 0)) || ((b == 0) && (x == 0)) || ((c == 0) && (d == 0)) || ((c == 0) && (e == 0)) || ((c == 0) && (x == 0)) || ((d == 0) && (e == 0)) || ((d == 0) && (x == 0)) ||
            ((e == 0) && (x == 0))){

                for(int i = 0; i < 6; i++){

                    cout << "\nDigite para " << ValoresRepetidos3[i] << ": ";
                    cin >> zero_um;

                    valoresRepetidos3[i] = zero_um;

                }

                condicao10 = valoresRepetidos3[0];
                condicao11 = valoresRepetidos3[1];
                condicao12 = valoresRepetidos3[2];
                condicao13 = valoresRepetidos3[3];
                condicao14 = valoresRepetidos3[4];
                condicao15 = valoresRepetidos3[5];

                if((condicao10 == 0) && (condicao11 != 0) && (condicao12 != 0) && (condicao13 != 0) && (condicao14 != 0) && (condicao15 != 0)){

                    if(x == 0){

                        cout << "\nNao eh possivel divisao por zero... \n";

                    }else{

                        resultado3 = terc_grau_a(b, c, d, e, x);

                        cout << "\nSeu resultado foi a = " << resultado3 << endl;

                    }

                }else if((condicao10 != 0) && (condicao11 == 0) && (condicao12 != 0) && (condicao13 != 0) && (condicao14 != 0) && (condicao15 != 0)){

                    if(x == 0){

                        cout << "\nNao eh possivel divisao por zero... \n";

                    }else{

                        resultado3 = terc_grau_b(a, c, d, e, x);

                        cout << "\nSeu resultado foi b = " << resultado3 << endl;

                    }

                }else if((condicao10 != 0) && (condicao11 != 0) && (condicao12 == 0) && (condicao13 != 0) && (condicao14 != 0) && (condicao15 != 0)){

                    if(x == 0){

                        cout << "\nNao eh possivel divisao por zero... \n";

                    }else{

                        resultado3 = terc_grau_c(a, b, d, e, x);

                        cout << "\nSeu resultado foi c = " << resultado3 << endl;

                    }

                }else if((condicao10 != 0) && (condicao11 != 0) && (condicao12 != 0) && (condicao13 == 0) && (condicao14 != 0) && (condicao15 != 0)){

                    if(x == 0){

                        cout << "\nNao eh possivel divisao por zero... \n";

                    }else{

                        resultado3 = terc_grau_d(a, b, c, e, x);

                        cout << "\nSeu resultado foi d = " << resultado3 << endl;

                    }

                }else if((condicao10 != 0) && (condicao11 != 0) && (condicao12 != 0) && (condicao13 != 0) && (condicao14 == 0) && (condicao15 != 0)){

                    resultado3 = terc_grau_e(a, b, c, d, x);

                    cout << "\nSeu resultado foi e = " << resultado3 << endl;

                }else if((condicao10 != 0) && (condicao11 != 0) && (condicao12 != 0) && (condicao13 != 0) && (condicao14 != 0) && (condicao15 == 0)){

                    terc_grau_x(a, b, c, d, e);

                }else{

                    cout << "\nDesculpe ainda nao temos este recurso... \n";

                }

            }else{

                if((a == 0) && (b != 0) && (c != 0) && (d != 0) && (e != 0) && (x != 0)){

                    if(x == 0){

                        cout << "\nNao eh possivel divisao por zero... \n";

                    }else{

                        resultado3 = terc_grau_a(b, c, d, e, x);

                        cout << "\nSeu resultado foi a = " << resultado3 << endl;

                    }

                }else if((a != 0) && (b == 0) && (c != 0) && (d != 0) && (e != 0) && (x != 0)){

                    if(x == 0){

                        cout << "\nNao eh possivel divisao por zero... \n";

                    }else{

                        resultado3 = terc_grau_b(a, c, d, e, x);

                        cout << "\nSeu resultado foi b = " << resultado3 << endl;

                    }

                }else if((a != 0) && (b != 0) && (c == 0) && (d != 0) && (e != 0) && (x != 0)){

                    if(x == 0){

                    cout << "\nNao eh possivel divisao por zero... \n";

                    }else{

                        resultado3 = terc_grau_c(a, b, d, e, x);

                        cout << "\nSeu resultado foi c = " << resultado3 << endl;

                    }

                }else if((a != 0) && (b != 0) && (c != 0) && (d == 0) && (e != 0) && (x != 0)){

                    if(x == 0){

                        cout << "\nNao eh possivel divisao por zero... \n";

                    }else{

                        resultado3 = terc_grau_d(a, b, c, e, x);

                        cout << "\nSeu resultado foi d = " << resultado3 << endl;

                    }

                }else if((a != 0) && (b != 0) && (c != 0) && (d != 0) && (e == 0) && (x != 0)){

                    resultado3 = terc_grau_e(a, b, c, d, x);

                    cout << "\nSeu resultado foi e = " << resultado3 << endl;

                }else if((a != 0) && (b != 0) && (c != 0) && (d != 0) && (e != 0) && (x == 0)){

                    terc_grau_x(a, b, c, d, e);

                }else{

                    cout << "\nAinda nao temos este recurso... \n";

                }

        }

        }else if(grau == 2){
        cout << "Formato escolhido: " << formato2 << "\n";

        cout << "Digite o valor de x: ";
        cin >> x;
        cout << "\nDigite o valor de a: ";
        cin >> a;
        cout << "\nDigite o valor de b: ";
        cin >> b;
        cout << "\nDigite o valor de c: ";
        cin >> c;
        cout << "\nDigite o valor que eh resultante do x: ";
        cin >> d;
        cout << "\n\n";

        if(((a == 0) && (b == 0)) || ((a == 0) && (c == 0)) || ((a == 0) && (d == 0)) || ((a == 0) && (x == 0)) || ((b == 0) && (c == 0)) || ((b == 0) && (d == 0)) || ((b == 0) && (x == 0))
            || ((c == 0) && (d == 0)) || ((c == 0) && (x == 0)) || ((d == 0) && (x == 0))){

                cout << "\nDigite '0' para sua incognita e '1' para os valores: ";

                for(int i = 0; i < 5; i++){

                    cout << "\nDigite para " << ValoresRepetidos2[i] << ": ";
                    cin >> zero_um;

                    valoresRepetidos2[i] = zero_um;

                }

                condicao5 = valoresRepetidos2[0];
                condicao6 = valoresRepetidos2[1];
                condicao7 = valoresRepetidos2[2];
                condicao8 = valoresRepetidos2[3];
                condicao9 = valoresRepetidos2[4];

                if((condicao5 == 0) && (condicao6 != 0) && (condicao7 != 0) && (condicao8 != 0) && (condicao9 != 0)){

                if(x == 0){

                        cout << "\nNao eh permitido divisao por zero...\n";

                }else{

                        resultado2 = second_grau_a(b, c, d, x);
                        cout << "\nSeu resultado foi a = " << resultado2 << endl;

                }

                }else if((condicao5 != 0) && (condicao6 == 0) && (condicao7 != 0) && (condicao8 != 0) && (condicao9 != 0)){

                    if(x == 0){

                        cout << "\nNao eh permitido divisao por zero... \n";

                    }else{

                        resultado2 = second_grau_b(a, c, d, x);
                        cout << "\nSeu resultado foi b = " << resultado2 << endl;

                    }

                }else if((condicao5 != 0) && (condicao6 != 0) && (condicao7 == 0) && (condicao8 != 0) && (condicao9 != 0)){

                        resultado2 = second_grau_c(a, b, d, x);
                        cout << "\nSeu resultado foi c = " << resultado2 << endl;

                }else if((condicao5 != 0) && (condicao6 != 0) && (condicao7 != 0) && (condicao8 == 0) && (condicao9 != 0)){

                        resultado2 = second_grau_d(a, b, c, x);
                        cout << "\nSeu resultado foi d = " << resultado2 << endl;

                }else if((condicao5 != 0) && (condicao6 != 0) && (condicao7 != 0) && (condicao8 != 0) && (condicao9 == 0)){

                    if(a == 0){

                        cout << "\nNao eh permitido divisao por zero... \n";

                    }else{

                        second_grau_x(a, b, c, d);

                    }

                }else{

                    cout << "\nDesculpe ainda nao temos este recurso... \n";

                }

        }else{

                if((a == 0) && (b != 0) && (c != 0) && (d != 0) && (x != 0)){

                    if(x == 0){

                        cout << "\nNao eh permitido divisao por zero... \n";

                    }else{

                        resultado2 = second_grau_a(b, c, d, x);
                        cout << "\nSeu resultado foi a = " << resultado2 << endl;

                    }

                }else if((a != 0) && (b == 0) && (c != 0) && (d != 0) && (x != 0)){

                    if(x == 0){

                        cout << "\nNao eh permitido divisao por zero... \n";

                    }else{

                        resultado2 = second_grau_b(a, c, d, x);
                        cout << "\nSeu resultado foi a = " << resultado2 << endl;

                    }

                }else if((a != 0) && (b != 0) && (c == 0) && (d != 0) && (x != 0)){

                    resultado2 = second_grau_c(a, b, d, x);
                    cout << "\nSeu resultado foi c = " << resultado2 << endl;

                }else if((a != 0) && (b != 0) && (c != 0) && (d == 0) && (x != 0)){

                    resultado2 = second_grau_d(a, b, c, x);
                    cout << "\nSeu resultado foi d = " << resultado2 << endl;

                }else if((a != 0) && (b != 0) && (c != 0) && (d != 0) && (x == 0)){

                    if(a == 0){

                        cout << "\nNao eh permitido divisao por zero... \n";

                    }else{

                        second_grau_x(a, b, c, d);

                    }

                }else{

                    cout << "\nDesculpe, por enquanto nao temos este recurso ainda... \n";

                }
            }
        }else if(grau == 1){
        cout << "Formato escolhido: " << formato3 << "\n";

        cout << "Digite o valor de x: ";
        cin >> x;
        cout << "\nDigite o valor de a: ";
        cin >> a;
        cout << "\nDigite o valor de b: ";
        cin >> b;
        cout << "\nDigite o valor que eh resultante do x: ";
        cin >> c;
        cout << "\n\n";

        if(((a == 0) && (b == 0)) || ((a == 0) && (c == 0)) || ((a == 0) && (x == 0)) || ((b == 0) && (c == 0)) || ((b == 0) && (x == 0)) || ((c == 0) && (x == 0))){
            cout << "\nDigite '0' para sua incognita e '1' para os valores: ";
            for(int i = 0; i < 4; i++){

                cout << "\nDigite para " << ValoresRepitidos1[i] << ": ";
                cin >> zero_um;
                valoresRepitidos1[i] = zero_um;
                cout << endl;

            }

            condicao1 = valoresRepitidos1[0];
            condicao2 = valoresRepitidos1[1];
            condicao3 = valoresRepitidos1[2];
            condicao4 = valoresRepitidos1[3];

            if((condicao1 == 0) && (condicao2 != 0) && (condicao3 != 0) && (condicao4 != 0)){
                if(x == 0){

                    cout << "\nNao eh permitido divisao por 0\n";

                }else{

                resultado = first_grau_a(x, b, c);
                cout << "Seu resultado foi a = " << resultado << "\n";

                }
            }else if((condicao1 != 0) && (condicao2 == 0) && (condicao3 != 0) && (condicao4 != 0)){

                resultado = first_grau_b(a, c, x);
                cout << "Seu resultado foi b = " << resultado << "\n";

            }else if((condicao1 != 0) && (condicao2 != 0) && (condicao3 == 0) && (condicao4 != 0)){

                resultado = first_grau_c(b, a, x);
                cout << "Seu resultado foi c = " << resultado << "\n";

            }else if((condicao1 != 0) && (condicao2 != 0) && (condicao3 != 0) && (condicao4 == 0)){
                if(a == 0){

                    cout << "\nNao eh permitido divisao por 0\n";

                }else{

                resultado = first_grau_x(b, c, a);
                cout << "Seu resultado foi x = " << resultado << "\n";

                }
            }

        }else{

            if((a == 0) && (b != 0) && (c != 0) && (x != 0)){

                if(x == 0){

                    cout << "\nNao eh permitido divisao por 0\n";

                }else{

                resultado = first_grau_a(x, b, c);
                cout << "Seu resultado foi a = " << resultado << "\n";

                }

            }else if((a != 0) && (b == 0) && (c != 0) && (x != 0)){

                resultado = first_grau_b(a, c, x);
                cout << "Seu resultado foi b = " << resultado << "\n";

            }else if((a != 0) && (b != 0) && (c == 0) && (x != 0)){

                resultado = first_grau_c(b, a, x);
                cout << "Seu resultado foi c = " << resultado << "\n";

            }else if((a != 0) && (b != 0) && (c != 0) && (x == 0)){

                if(a == 0){

                    cout << "\nNao eh permitido divisao por 0\n";

                }else{

                resultado = first_grau_x(b, c, a);
                cout << "Seu resultado foi x = " << resultado << "\n";

                }

            }else{
                cout << "Desculpa, por equanto não temos este recurso... \n";
            }

        }
        }else if((grau != 3) || (grau != 2) || (grau != 1)){
        cout << "Formato escolhido invalido... \n";
        }

    }else{
        cout << "Grau de equação incorreto... \n";
    }

}else{

    cout << "\nescolha seu sinal de conta, quando quiser sair digite 'sair': \n";
    cin >> escolha1;

    while(sair != "sim"){

        if(t > 0){
            cout << "\nescolha seu sinal de conta, quando quiser sair digite 'sair': \n";
            cin >> escolha1;
        }else{
            t += 1;
        }

        switch (escolha1){

            case '+':
                cout << "Digite a quantidade de numeros a ser somados\n";
                cin >> qtdnum;
                somat = soma(qtdnum);
                cout << "Sua soma foi: " << somat << "\n";
                break;

            case '-':
                cout << "Digite a quantidade de numeros a ser subtraida\n";
                cin >> qtdnum;
                somat = subt(qtdnum);
                cout << "Sua subtracao foi: " << somat << "\n";
                break;

        }

        cout << "Deseja sair\n";
        cin >> sair;

    }

    cout << "Desligando sistema\n";

}

return 0;
}

int soma(int qtddnum){
    int vetor[qtddnum];

    for(int i = 0; i < qtddnum; i++){
        vetor[i] = 0;
    }

    int a = 0, tempo = 0, somas = 0;

    while(tempo == qtddnum){

        tempo+=1;

        cout << "Digite o numero a ser somado: ";
        cin >> a;
        cout << "\n";

        vetor[tempo - 1] = a;
    }

    for(int i = 0; i < qtddnum; i++){
        somas += vetor[i];
    }

    return somas;

}

int subt(int a){
    int vetor[qtddnum];

    for(int i = 0; i < qtddnum; i++){
        vetor[i] = 0;
    }

    int a = 0, tempo = 0, somas = 0;

    while(tempo == qtddnum){

        tempo+=1;

        cout << "Digite o numero a ser somado: ";
        cin >> a;
        cout << "\n";

        vetor[tempo - 1] = a;
    }

    for(int i = 0; i < qtddnum; i++){
        somas += vetor[i];
    }

    return somas;

}

int divisao(int a){
}

int mult(int a){
}

int expoente(int a, int exps){
}

int square(int a){
}

int first_grau_a(int x, int b, int c){

    int a_return = 0;

    a_return = (c - b)/x;

    return a_return;

}

int first_grau_b(int a, int c, int x){

    int breturn = 0;

    breturn = c - (a*x);

    return breturn;

}

int first_grau_c(int b, int a, int x){

    int creturn = 0;

    creturn = (a*x) + b;

    return creturn;

}

int first_grau_x(int b, int c, int a){

    int xreturn = 0;

    xreturn = (c - b)/a;

    return xreturn;

}

int second_grau_a(int b, int c, int d, int x){

    int areturn = 0;

    areturn = (d - (b * x) - c)/(x * x);

    return areturn;

}

int second_grau_b(int a, int c, int d, int x){

    int breturn = 0;

    breturn = (d - c - (a * (x * x)))/x;

    return breturn;

}

int second_grau_c(int a, int b, int d, int x){

    int creturn = 0;

    creturn = (d - (a * (x * x)) - (b * x));

    return creturn;

}

int second_grau_d(int a, int b, int c, int x){

    int dreturn = 0;

    dreturn = ((a * (x * x)) + (b * x) + c);

    return dreturn;

}

void second_grau_x(int a, int b, int c, int d){

    int delta = 0, cvdd = 0;
    float delta_raiz = 0.0, xuma = 0.0, xduas = 0.0;

    string resposta[2] = {"Seu resultado foi x' = ", "Seu resultado foi x'' = "};

    cvdd = c - d;
    delta = ((b * b) - (4 * a * cvdd));

    if(delta > 0){

        delta_raiz = sqrt(delta);

        xuma = ((-1 * b) + delta_raiz)/(2 * a);
        xduas = ((-1 * b) - delta_raiz)/(2 * a);

        cout << resposta[0] << xuma << endl;
        cout << resposta[1] << xduas << endl;

    }else{

        cout << "\nO delta foi negativo... \n";

    }

}

int terc_grau_a(int b, int c, int d, int e, int x){

    int areturn = 0;

    areturn = (e - (b * (x * x)) - (c * x) - d)/(x * x * x);

    return areturn;

}

int terc_grau_b(int a, int c, int d, int e, int x){

    int breturn = 0;

    breturn = (e - (a * (x * x * x)) - (c * x) - d)/(x * x);

    return breturn;

}

int terc_grau_c(int a, int b, int d, int e, int x){

    int creturn = 0;

    creturn = (e - (a * (x * x * x)) - (b * (x * x)) - d)/x;

    return creturn;

}

int terc_grau_d(int a, int b, int c, int e, int x){

    int dreturn = 0;

    dreturn = (e - (a * (x * x * x)) - (b * (x * x)) - (c * x));

    return dreturn;

}

int terc_grau_e(int a, int b, int c, int d, int x){

    int ereturn = 0;

    ereturn = ((a * (x * x * x)) + (b * (x * x)) + (c * x));

    return ereturn;

}

void terc_grau_x(int a, int b, int c, int d, int e){

    int primeira_raiz = 0;
    int valora = 0, valorb = 0, valorc = 0;
    int valor_pri_grau = 0;

    cout << "\nPor favor digite uma das raizes, ou se nao souber digite 0: ";
    cin >> primeira_raiz;
    cout << endl;

    if(primeira_raiz == 0){

        //cout << "\nAinda nao temos esse recurso... \n";

        valor_pri_grau = (-1 * d);

        valora = ((primeira_raiz * a) + b);
        valorb = ((valora * primeira_raiz) + c);
        valorc = ((primeira_raiz * valorb) + d);

        cout << "Seu resultado foi primeira raiz: " << valor_pri_grau << endl;

        second_grau_x(valora, valorb, valorc, 0);

    }else{

            valora = ((primeira_raiz * a) + b);
            valorb = ((valora * primeira_raiz) + c);
            valorc = ((primeira_raiz * valorb) + d);

            cout << "Seu resultado foi primeira raiz: " << primeira_raiz << endl;

            second_grau_x(valora, valorb, valorc, 0);

    }

}
