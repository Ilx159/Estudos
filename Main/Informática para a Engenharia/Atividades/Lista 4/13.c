#include <stdio.h>

int strcomp(char *str1, char *str2){
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
            return 0;
        i++;
    }
    
    return 1;
}

int main(){
    while(1){
    char login[32];
    char senha[32];

    printf("Digite seu login, para sair digite -1\n");
    fgets(login, sizeof(login), stdin);
    

    if(login[0] == '-' && login[1] == '1')
        return -1;

    printf("\n\nDigite sua senha:\n");
    fgets(senha, sizeof(senha), stdin);

    if(strcomp(login, "admin") & strcomp(senha, "1234")){
        printf("\nLogin bem-sucedido\n\n");
        break;
    }
    else
        printf("\nLogin falhou, tente novamente\n\n");
    }
    return 0;
}