/* *********************************************************************** *
 *    ex11.c                                                                *
 *    jogo adventure text                                                   *
 *                                                                          *
 *    Copyright (C) 2022 by Joao Marcelo Uchoa Vasconcelos Dourado Leite    *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *  To contact the author, please write to:                                 *
 *  Name: Joao Marcelo Uchoa Vasconcelos Dourado Leite <jmuvdl@poli.br>     *
 *  Webpage: http://beco.poli.br/~username                                  *
 *  Phone: 81999172565                                                      *
 * ************************************************************************ *
 *
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char item[10];
    char acao[10];


   printf("===Bem vindo ao jogo Dark souls.txt===\n");
   printf("Você caminha em um reino já muito tempo esquescido, as ruinas com rachaduras aparentes trazem uma sensação de perigo e terror constante.\n");
   printf("Passos começam a ser escutados se aproximando cada vez mais rápido, parecem pesados mas ageis, provavelmente de um monstro perigoso que ronda o reino caido.\n");
   printf("Com medo você pega uma de suas armas para lutar com o inimigo misterioso, em sua posse duas armas: um arco e uma espada, você so pode empunhar uma delas, qual será sua arma?\n");
   scanf("%s", item);

    if (strcmp(item, "espada") == 0)
    {
        printf("Você empunha a espada com bravura enquanto o monstro aparece de forma veloz e corre em sua direção, sua aparencia demonstra uma grande força, ele se aproxima cada vez mais rápido!\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀⠀⢀⣠⣴⣾⣿⣿⣶⣶⣿⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⠶⢶⣶⣶⣿⡿⠿⠿⠏⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣤⣠⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣹⣿⣿⡿⡿⠀⠀⠈⠉⠛⠛⠉⠙⠛⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⢻⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⢷⡸⣿⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⣌⠢⣀⠈⠷⠶⠋⣀⢄⡠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠀⠀⠙⠒⢬⣙⠪⢭⣳⣤⣞⠕⢋⡤⠘⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⡏⠀⠀⠀⠀⠀⣈⣉⣽⣾⣿⣿⡫⠥⠀⠀⢻⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⢰⡄⠀⠊⡽⠋⣉⠽⣿⣿⣟⠒⠀⠀⠀⢻⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⢸⣷⠀⠀⠀⠉⠀⠒⢻⡟⠦⠙⢘⣇⠀⠀⢻⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣆⠠⠏⠘⢧⠀⠀⠀⢀⣀⣸⣧⣄⡠⠼⠹⣄⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡟⠁⠀⠀⠀⠀⠀⠉⠀⠀⠛⣿⣧⣼⣝⠻⠀⠀⠀⠀⠉⢹⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠼⠁⠀⠀⡾⠀⠀⠀⠀⠀⠀⠐⠛⠉⢉⠙⠃⠀⠀⢲⡀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠀⢀⡞⢀⡀⠀⠀⠀⠀⠀⠀⢰⣯⣸⡇⠀⠀⠀⠘⢷⡀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠀⣾⢠⡿⠋⢐⣦⣄⠀⠀⠀⠀⠻⠟⣁⣀⠤⠤⢾⡟⣧⠀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣀⣿⡞⠃⠀⠒⠩⠝⠛⢳⡶⠶⣶⠋⣙⡫⡉⠁⠈⠿⢹⡄⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡿⠿⣿⠇⣴⠃⠀⡠⠴⣾⠋⠀⢀⡼⠿⣇⠀⠙⣆⠀⢰⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢉⣾⠹⢃⣾⡇⠀⠈⠀⠀⣿⠀⢠⠈⠀⠀⠙⠀⠀⠈⠒⠈⣿⢶⣞⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⡤⣿⡿⠃⡄⠀⠀⢀⡈⢠⣿⣄⣾⢰⡆⠀⠀⠀⠀⠀⠈⠋⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣷⡿⠁⣸⡇⡄⣤⣸⣸⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⣠⣾⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⠀⢠⣿⣿⣧⣿⣿⣿⣿⣿⡿⣿⠻⠃⠀⠀⠀⠀⠀⠻⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⡿⠁⠀⠾⢹⣿⣿⣿⣿⣿⣿⡟⡇⠙⠁⡀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⡿⢋⣖⠀⠀⠀⠛⠁⣿⣿⡿⣿⡜⠇⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⡿⠁⢸⣿⡄⠀⠀⠀⠀⠏⢹⡇⠻⠃⠀⠀⠀⠀⣿⡀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⠃⠀⠈⠻⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⡏⠀⠀⠀⠀⠈⠙⠀⠀⠀⢀⣤⣤⣀⣀⣀⣀⡀⠀⠀⢻⡀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣆⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⣠⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⣄⠀⠀⠈⠛⠛⠛⠉⠉⠛⠻⣦⠀⠈⠁⠀⢠⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣆⠀⠀⠀\n");
    printf("⠀⠀⠀⣴⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⢸⡄⠀⠀⠀⠀⠀⠀⠀⠀⣴⠟⠀⠠⣀⣠⣟⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣧⠀⠀\n");
    printf("⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⣸⣧⣤⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⢀⣿⣿⣿⣄⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣧⡀\n");
    printf("⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⠀⢀⣰⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣷⣦⣄⠀⣀⣼⣿⣿⣿⣿⣿⣿⣿⣷\n");
    printf("⠙⢿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠁⠀⢠⣾⣿⣿⣿⡟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠛⠿⠿⡏⠀⠙⠛⠿⠿⣿⣿⠿⠿⠋\n");
    printf("⠀⠀⠀⠉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠈⡚⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        printf("Apenas duas escolhas parecem possíveis: atacar ou fugir!\n");
    }
    else
    {
        if (strcmp(item, "arco") == 0)
        {
        printf("Você pega o arco rapidamente, preparando-o para acertar o mostro com inúmeras flechas! No entanto para sua surpresa o mostro resiste as flechadas e continua avançando!\n");
        printf("Ele te ataca com toda a força e você acaba não resistindo o grande impacto. Você cai sem nenhuma força para lutar e morre.\n");
        printf("VOCÊ PERDEU! Tente novamente\n");
        return 0;
        }
        printf("Com medo e indeciso você ficou parado sem reação alguma. O monstro ataca ferosmente e você acabada morrendo.\n");
        printf("VOCÊ PERDEU! Tente novamente\n");
        return 0;
    }
    scanf("%s", acao);
    if (strcmp(acao, "atacar") == 0)
    {
        printf("Você ataca o montro com toda sua força, mas não parece ser o bastante para derrota-lo com apenas um ataque. Ele te ataca, mas você se defende e contra-ataca!\n");
        printf("Você acertou o coração da fera! ela cai fraca e você a finaliza no mesmo instante. Você sai vitorioso com a cabeça do seu inimigo, a qual vale uma grande quantidade de ouro e ferro\n");
        printf("Triunfantemente você caminha em busca de novos desafios e riquezas!\n");
        printf("VOCÊ GANHOU!\n");
    }
    else
    {
        if (strcmp(acao, "fugir") == 0)
        {
        printf("Você tenta fugir mas ele mais rápido do que você! ele te alcança e te corta ao meio rapidamente, te matando no mesmo instante.\n");
        printf("VOCÊ PERDEU! Tente novamente\n");
        return 0;
        }
        printf("Com medo e desesperado você congelou de pavor, o monstro não tem misericórdia e ataca ferozmente até que você pare de se mexer totalmente.\n");
        printf("VOCÊ PERDEU! Tente novamente\n");
        return 0;
    }
}
