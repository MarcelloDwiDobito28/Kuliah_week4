#include <stdio.h>

char operator;
int bilangan1, bilangan2, hasilbilangan;

int main(){
    
    printf("Pilihlah bilangan pertama : ");
    scanf("%d",&bilangan1);

    printf("Pilihlah bilangan kedua : ");
    scanf("%d",&bilangan2);

    printf("Pilihlah operator +,-,*,/ \n ");
    scanf(" %c",&operator);

    if(operator == '+'){
        hasilbilangan = bilangan1 + bilangan2;
        printf("Hasil dari operator %c adalah %d", operator, hasilbilangan);
    }else if(operator == '-'){
        hasilbilangan = bilangan1 - bilangan2;
        printf("Hasil dari operator %c adalah %d", operator, hasilbilangan);
    }else if(operator == '*'){
        hasilbilangan = bilangan1 * bilangan2;
        printf("Hasil dari operator %c adalah %d", operator, hasilbilangan);
    }else if(operator == '/'){

        if(bilangan1 != 0 && bilangan2 != 0){
            hasilbilangan = bilangan1 / bilangan2;
            printf("Hasil dari operator %c adalah %d", operator, hasilbilangan);
        }else{
            printf("salah satu nilai itu nol. Tidak bisa membagikan sebuah bilangan nol.");
        }
        
    }else{
        printf("Operator yang dipilih salah");
    }
    
    return 0;
}