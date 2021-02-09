#include <stdio.h>
#include <ctype.h>

char nome[61],confirma;
int peso,altura,forca,velocidade,acao,vida,maxVida,mana,maxMana,check;

void intro();

void intro(){
  printf("\n\n\n\n\n\n\n\nEsse jogo nao tem a minima obrigacao de ser bom e nem facil é apenas uma ideia feita por guilherme rocha em um devaneio sobre o que lembrava de c que aprendeu na UTFPR\n\n");
}

void newNome(){
  printf("Digite o seu nome \n");
  scanf(" %[^\n]", nome);
  void newPeso();
}

void newPeso(){
  printf("Digite o seu peso ex:75\n");
  scanf("%d", &peso);
if(peso>= 300 && peso<=25 && peso/2>=1){
 void newAltura();
}
else void newPeso();
}

void newAltura(){
  printf("Digite o sua altura ex:175\n");
  scanf("%d", &altura);
}

  
