#ifndef OTHER_H
#define OTHER_H



typedef struct{
 int frequencia;//quantidade de vezes na semana pratica ativiade fisica
 int duracao;//min
 int intensidade;//sedentário, levemente ativo, moderadamete ativo, muito ativo, extremamente ativo                 
} ativ_fisica; 

typedef struct{
char alimentos_escolhidos[4][100];
}select_alimento;
/**************funções genéricas****************/

//seleciona o fator de ativiadade
void definir_fator_atividade_ativo(ativ_fisica *at);
//seleciona o fator de atividade para usuários menos ativos
void definir_fator_atividade_MenosAtivo(ativ_fisica *at);
//recebe a intensidade da atividade física e seleciona do MET 
float valor_MET_User(ativ_fisica *at);
//ler string do teclado
void ler_string(char *buffer, int tamanho, const char *mensagem);
//limpa o buffer
void limpar_buffer();

/**************conversões****************/
//Converte cm para m
double convert_Cm_Para_Metro(user *u);

/**************calculos****************/
//função calcula TMB
double calc_TMB(user *u);
//Calculando o Gasto Calórico Total
//O GCT inclui a TMB, 
//mas também leva em consideração a 
//energia gasta em atividades físicas
double calc_GET(ativ_fisica *at, user *u);
//calculo do IMC ínice de maça corporal
void calc_IMC(user *u);

/**************impressão****************/
//função de impressão de dados das funções de da biblioteca other_functions
void imprimir_Dados_Other_Functions(ativ_fisica *at, user *u);

/**************impressão de plano alimentar****************/
void select_menu(select_alimento *sa);





#endif
