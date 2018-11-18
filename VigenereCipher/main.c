#include<stdio.h>
#include<string.h>

int main(){
    char mesaj[] = "BORABORA";
    char key[] = "HELLO";
    int lungimeMesaj = strlen(mesaj), keyLen = strlen(key), i, j;

    char newKey[lungimeMesaj], encryptedmesaj[lungimeMesaj], decryptedmesaj[lungimeMesaj];

    //generating new key
    for(i = 0, j = 0; i < lungimeMesaj; ++i, ++j){
        if(j == keyLen)
            j = 0;

        newKey[i] = key[j];
    }

    newKey[i] = '\0';

    //encryption
    for(i = 0; i < lungimeMesaj; ++i)
        encryptedmesaj[i] = ((mesaj[i] + newKey[i]) % 26) + 'A';

    encryptedmesaj[i] = '\0';

    //decryption
    for(i = 0; i < lungimeMesaj; ++i)
        decryptedmesaj[i] = (((encryptedmesaj[i] - newKey[i]) + 26) % 26) + 'A';

    decryptedmesaj[i] = '\0';

    printf("Original Message: %s", mesaj);
    printf("\nKey: %s", key);
    printf("\nNew Generated Key: %s", newKey);
    printf("\nEncrypted Message: %s", encryptedmesaj);
    printf("\nDecrypted Message: %s", decryptedmesaj);

    return 0;
}
