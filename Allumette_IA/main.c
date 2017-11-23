#include <stdio.h>
#include <stdlib.h>
#define AllumetteMax 21
int tour_IA(int AllumetteChoisie, int AllumetteRestante);
int joueur (int AllumetteChoisie);


/*BUT  Joue au jeu de nim contre IA
ENTREE  Le joueur joue contre une IA
SORTIE Le premier à 21 a perdu
*/
int main()
{
    int ChoixJoueur = 0;
    int choixIa =0;
    int AllumetteRestante = 0;
    int Jeu = 0;


    do{
        printf ("Tour joueur\n");
        Jeu = Jeu + joueur(ChoixJoueur);
        printf(" il y a %i Allumettes\n",Jeu);
            if (Jeu == 21) {
                printf  (" joueur a gagner");
                break1;
            }
        printf ("Tour IA\n");
        AllumetteRestante = Jeu;
        Jeu = Jeu + tour_IA (choixIa,AllumetteRestante);
            if (Jeu == 21) {
                printf(" L'IA a Gagner ");
                break;
            }
        printf (" il y a %i Allumettes\n",Jeu);
    }while (AllumetteRestante < AllumetteMax);


    return 0;
}

/*
    BUT LE TOUR DE JEU DE L IA
    ENTREE L IA CHOISIE UN NOMBRE EN FONCTION DE LA DIVISION DU NB JEU EN COURS
    SORTIE LE NOMBRE CHOISIE PAR L IA


*/
int tour_IA ( int AllumetteChoisie, int AllumetteRestante){



    if ((AllumetteRestante)%4 == 1){ // SI LE MODE DU NOMBRE D ALLUMETTE = 1

        AllumetteChoisie = 3;

    }
    else
        AllumetteChoisie = 1;        // sinon

    return (AllumetteChoisie);



}
/*
BUT FAIRE JOEUR LE JOUEUR
ENTREE DU  JOUEUR SAISIE
SORTIE RESULTAT SAISIE

*/
int joueur (int AllumetteChoisie){


    do{
    printf(" veuillez saisir le nombre d'allumette entre 1 et 3 ");
    scanf ("%i",&AllumetteChoisie);
    }while((AllumetteChoisie < 1) || (AllumetteChoisie > 3));
    return (AllumetteChoisie);

}



