#include <stdio.h>
#include <stdlib.h>

int triple(int nombre) // 6
{
    return 3 * nombre; // 7
}    

int main(int argc, char *argv[]) // 1
{
    int nombreEntre = 0, nombreTriple = 0; // 2
    
    printf("Entrez un nombre... "); // 3
    scanf("%d", &nombreEntre); // 4
    
    nombreTriple = triple(nombreEntre); // 5
    printf("Le triple de ce nombre est %d\n", nombreTriple); // 8
    
    return 0; // 9
}
/*#include <stdio.h>
#include <stdlib.h>

int triple(int nombre)
{
    return 3 * nombre;
}    

int main(int argc, char *argv[])
{
    int nombreEntre = 0;
    
    printf("Entrez un nombre... ");
    scanf("%d", &nombreEntre);

    // Le résultat de la fonction est directement envoyé au printf et n'est pas stocké dans une variable
    printf("Le triple de ce nombre est %d\n", triple(nombreEntre));
     
    return 0;
}*/

