#include <stdio.h>
#include <string.h>

unsigned int entrada, type, ID, status;
char Name_type[8];
char Name_status[8]; 

void decodificacao(){
    type = entrada>>12;
    ID = 0X000000FF&(0XFFFFFF00|(entrada>>4));
    status = 0X0000000F&entrada;
}

void mapeamento(){
    switch (type) {
        case 1:
            strcpy(Name_type, "Sensor");
            break;
        case 2:
            strcpy(Name_type, "Atuador");
            break;
        case 4:
            strcpy(Name_type, "Alarme");
            break;
        default:strcpy(Name_type, "NULL");
    
    }
    switch (type) {
        case 1:
            strcpy(Name_status, "OK");
            break;
        case 2:
            strcpy(Name_status, "Falha");
            break;
        case 4:
            strcpy(Name_status, "Offline");
            break;
        default:strcpy(Name_status, "NULL");
    }
}



int main(){

    scanf("%X", &entrada);

    decodificacao();
    mapeamento();

    printf("\n\n--- Pacote Decodificado ---");
    printf("\nTipo: %s", Name_type);
    printf("\nID: %d", ID);
    printf("\nStatus: %s\n\n", Name_status);

    return 0;
}