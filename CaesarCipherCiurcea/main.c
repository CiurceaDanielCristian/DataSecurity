#include <stdio.h>


int main()
{
    char mesaj[50], caracter;
    int i, cheie;
    int alegere;
while(1){

    printf("Alegerea ta:  1.Criptare  2.Decriptare 3.Exit ");
    scanf("%d",&alegere);


if(alegere==1){
    printf("Introdu mesajul ce urmeaza a fi criptat: ");
    fflush(stdin);
    gets(mesaj);
    printf("Introdu  cheia: ");
    scanf("%d", &cheie);

   for(i = 0; mesaj[i] != '\0'; ++i){
    caracter = mesaj[i];

     if(caracter >= 'a' && caracter <= 'z'){
        caracter = caracter + cheie;

         if(caracter > 'z'){
            caracter = caracter - 'z' + 'a' - 1;
            }

            mesaj[i] = caracter;
        }
        else if(caracter >= 'A' && caracter <= 'Z'){
            caracter = caracter + cheie;

             if(caracter > 'Z'){
                caracter = caracter - 'Z' + 'A' - 1;
            }

            mesaj[i] = caracter;
        }
    }

      printf("Mesajul dupa criptare: %s", mesaj);
  }

if(alegere==2){
    printf("Introdu mesajul de decriptat: ");
    fflush(stdin);
    gets(mesaj);
    printf("Introdu cheia: ");
    scanf("%d", &cheie);

    for(i = 0; mesaj[i] != '\0'; ++i){
        caracter = mesaj[i];

        if(caracter >= 'a' && caracter <= 'z'){
            caracter = caracter - cheie;

            if(caracter < 'a'){
                caracter = caracter + 'z' - 'a' + 1;
            }

            mesaj[i] = caracter;
        }
        else if(caracter >= 'A' && caracter <= 'Z'){
            caracter = caracter - cheie;

            if(caracter < 'A'){
                caracter = caracter + 'Z' - 'A' + 1;
            }

            mesaj[i] = caracter;
        }
    }

    printf("Mesaj decriptat: %s", mesaj);

}



if(alegere==3){
   return 0;

}
    return 0;
}
}
