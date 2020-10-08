//
//  main.c
//  algo mdp
//
//  Created by Vincent Vanhassel on 03/04/2017.
//  Copyright © 2017 Vincent Vanhassel. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int position() {
    
    srand(time(NULL));
    int taille = 0;
    int restriction = 0;
    int position = 0;
    int compteur = 0;
    char mdp[] = "";
    
    char liste1[] = "!#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcdefghijklmnopqrstuvwxyz{|}~éèçàù£¥§";
    char liste2[] = "t!u0v#w1x$y2z%A3Z&E4RT5Y(U6I)O7P*Q8S+D9F,GaH-JbK.LcM/WdX:CeV;BfN<g=h>i?j@k[lm]n^o{p|q}rs";
    char liste3[] = "CqVaBrN!sbt@ucvwdxyezAfZ0EgR1ThY2UiI3OjP4QkS5DlF6GmH7JnK8LoM9WpX";
    
    printf("quel doit etre la taille du mdp ?");
    scanf("‰d", taille);
    
    while (restriction < 1 || restriction > 3)
    {
        printf("selectionner les restriction sur le mdp (1 || 2 || 3)");
        scanf("‰d", restriction);
    }
    printf("\n");
    
    if (restriction == 1)
    {
        while (compteur <= taille)
        {
            position = rand(0, 100)
            mdp += liste1[position]
            compteur += 1;
        }
    }
    
    else if (restriction == 2)
    {
        while (compteur <= taille)
        {
            position = rand(0, 89)
            mdp += liste1[position]
            compteur += 1;
        }
    }
    
    else if (restriction == 3)
    {
        while (compteur <= taille)
        {
            position = rand(0, 64)
            mdp += liste1[position]
            compteur += 1;
        }
    }
    
    else
    {
        printf("erreur de restriction");
        return 0;
    }
}

int main() {

    int run = 1;
    int continuer = 1;
    
    while (run == 1)
    {
        printf("lancer l'algorithme ? (0/1)");
        scanf("‰d", continuer);
        
        if (continuer == 0)
        {
            position();
        }
        else
        {
            run = 0;
        }
    }
    return 0;
}
