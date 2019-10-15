#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int randatk1() //Função para ataque
{
  int atk1;
  atk1=1+(rand())%20;
  printf("Seu ataque: %d\n", atk1);
  return(atk1); //retornando o valor para main
}

int randatk2() //Função para ataque
{
  int atk2;
  atk2=1+(rand())%20;
  printf("Ataque do inimigo: %d\n", atk2);
  return(atk2); //retornando o valor para main
}

int randdef1() //Função para ataque
{
  int def1;
  def1=1+(rand())%20;
  printf("Sua defesa: %d\n", def1);
  return(def1); //retornando o valor para main
}

int randdef2() //Função para ataque
{
  int def2;
  def2=1+(rand())%20;
  printf("Defesa do inimigo: %d\n", def2);
  return(def2); //retornando o valor para main
}

int atk_duplo(int atk1,int atk2,int vidp1,int vidp2)
{
  vidp1 = vidp1 - atk2;
  vidp2 = vidp2 - atk1;
  printf("=========================\n");
  printf("Vida do inimigo: %d \n", vidp2);
  printf("Sua vida: %d \n", vidp1);
  return(vidp1,vidp2);
}
int atk1_def2(int atk1,int def2,int vidp1,int vidp2)
{
  if(atk1>def2)
  {
    vidp2 = vidp2 - (atk1-def2);
    printf("=========================\n");
    printf("Vida do inimigo: %d \n", vidp2);
    printf("Sua vida: %d \n", vidp1);
    return(vidp1,vidp2);
  }
  else
  {
    vidp1 = vidp1 - (def2-atk1);
    printf("=========================\n");
    printf("Vida do inimigo: %d \n", vidp2);
    printf("Sua vida: %d \n", vidp1);
    return(vidp1,vidp2);
  }
  
}

int atk2_def1(int atk2,int def1,int vidp1,int vidp2)
{
  if(atk2>def1)
  {
    vidp1 = vidp1 - (atk2-def1);
    printf("=========================\n");
    printf("Vida do inimigo: %d \n", vidp2);
    printf("Sua vida: %d \n", vidp1);
    return(vidp1,vidp2);
  }
  else
  {
    vidp2 = vidp2 - (def1-atk2);
    printf("=========================\n");
    printf("Vida do inimigo: %d \n", vidp2);
    printf("Sua vida: %d \n", vidp1);
    return(vidp1,vidp2);
  }
}

int def_duplo(int vidp1,int vidp2)
{
  printf("Ninguém atacou! \n");
  printf("=========================\n");
  printf("Vida do inimigo: %d \n", vidp2);
  printf("Sua vida: %d \n", vidp1);
  return(vidp1,vidp2);
}

void main()
{
    int vidp1 = 100, vidp2 = 100, esc1, esc2, atk1, atk2, def1, def2, end_esc;
    srand(time(NULL));

    printf("Bem-Vindo ao RPG Fatec 2019!\n");
    printf("=============================\n");
    printf("Sua vida inicial é de: 100\n");
    printf("O jogo é composto por 3 ROUNDS\nQuem estiver com a menor vida PERDE!!!!!\n");
    printf("============== ROUND 1 ==============\n");
    end_esc = 1;
    while(end_esc = 1)
    {
        printf("Escolha uma ação: 1- Atacar | 2- Defender \n");
        scanf("%d", &esc1);
        esc2=1+(rand())%2; 
        if(esc1 == 1 && esc2 == 1)
        {
          atk1 = randatk1();
          atk2 = randatk2();
          atk_duplo(atk1,atk2,vidp1,vidp2);
          

        }
        else
        if(esc1 == 1 && esc2 == 2)
        {
          atk1 = randatk1();
          def2 = randdef2();
          atk1_def2(atk1,def2,vidp1,vidp2);
        }
        else
        if(esc1 == 2 && esc2 == 1)
        {
          atk2 = randatk2();
          def1 = randdef1();
          atk2_def1(atk2,def1,vidp1,vidp2);
        }
        else
        if(esc1 == 2 && esc2 == 2)
        {
          def_duplo(vidp1,vidp2);
        }

        printf("============== ROUND 2 ==============\n");
        printf("Escolha uma ação: 1- Atacar | 2- Defender \n");
        scanf("%d", &esc1);
        esc2=1+(rand())%2; 
        if(esc1 == 1 && esc2 == 1)
        {
          atk1 = randatk1();
          atk2 = randatk2();
          atk_duplo(atk1,atk2,vidp1,vidp2);

        }
        else
        if(esc1 == 1 && esc2 == 2)
        {
          atk1 = randatk1();
          def2 = randdef2();
          atk1_def2(atk1,def2,vidp1,vidp2);
        }
        else
        if(esc1 == 2 && esc2 == 1)
        {
          atk2 = randatk2();
          def1 = randdef1();
          atk2_def1(atk2,def1,vidp1,vidp2);
        }
        else
        if(esc1 == 2 && esc2 == 2)
        {
          def_duplo(vidp1,vidp2);
        }

        printf("============== ROUND 3 ==============\n");
        printf("Escolha uma ação: 1- Atacar | 2- Defender \n");
        scanf("%d", &esc1);
        esc2=1+(rand())%2; 
        if(esc1 == 1 && esc2 == 1)
        {
          atk1 = randatk1();
          atk2 = randatk2();
          atk_duplo(atk1,atk2,vidp1,vidp2);
          vidp1 = vidp1 - 1;

        }
        else
        if(esc1 == 1 && esc2 == 2)
        {
          atk1 = randatk1();
          def2 = randdef2();
          atk1_def2(atk1,def2,vidp1,vidp2);
          vidp1 = vidp1;
        }
        else
        if(esc1 == 2 && esc2 == 1)
        {
          atk2 = randatk2();
          def1 = randdef1();
          atk2_def1(atk2,def1,vidp1,vidp2);
        }
        else
        if(esc1 == 2 && esc2 == 2)
        {
          def_duplo(vidp1,vidp2);
        }

        printf("FIM DE JOGO!!\n");
        printf("O Grande Campeão é:\n");
        printf("%d%d", vidp1,vidp2);
        if(vidp1 > vidp2)
        {
          printf("Parabens é VOCÊ!!!!!\n");
        }
        else
        if(vidp1 < vidp2)
        {
          printf("Computador Topzera!!!!\n");
        }
        else
        {
          printf("EMPATEEEEE!!!!\n");
        }
        printf("Você deseja continuar?\n0 = NÃO | 1 = SIM\n");
    }
    }