#include<stdio.h>

int main(){
    float reais;
    int centavos;
    int moeda[12] = {0};
    scanf("%f", &reais);
    centavos = reais * 100;

    printf("Centavos totais: %d\n", centavos);
    while(centavos >= 10000){
        printf("valor maior que 100 reais, retorna nota de 100\n");
        centavos-=10000;
        printf("centavos restantes: %d\n", centavos);
        moeda[0]++;
    }
    while(centavos >= 5000){
        printf("valor maior que 50 reais e menor que 100 reais, retorna nota de 50\n");
        centavos-=5000;
        printf("centavos restantes: %d\n", centavos);
        moeda[1]++;
    }
    while(centavos >= 2000){
        printf("valor maior que 20 reais e menor que 50 reais, retorna nota de 20\n");
        centavos-=2000;
        printf("centavos restantes: %d\n", centavos);
        moeda[2]++;
    }
    while(centavos >= 1000){
        printf("valor maior que 10 reais e menor que 20 reais, retorna nota de 10\n");
        centavos-=1000;
        printf("centavos restantes: %d\n", centavos);
        moeda[3]++;
    }
    while(centavos >= 500){
        printf("valor maior que 5 reais menor que 10 reais, retorna nota de 5\n");
        centavos-=500;
        printf("centavos restantes: %d\n", centavos);
        moeda[4]++;
    }
    while(centavos >= 200){
        printf("valor maior que 2 reais e menor que 5 reais, retorna nota de 2\n");
        centavos-=200;
        printf("centavos restantes: %d\n", centavos);
        moeda[5]++;
    }
    while(centavos >= 100){
        printf("valor maior que 1 real menor que 2 reais, retorna moeda de 1\n");
        centavos-=100;
        printf("centavos restantes: %d\n", centavos);
        moeda[6]++;
    }
    while(centavos >= 50){
        printf("valor maior que 50cents e menor que 1 real, retorna moeda de 50 cents\n");
        centavos-=50;
        printf("centavos restantes: %d\n", centavos);
        moeda[7]++;
    }
    while(centavos >= 25){
        printf("valor maior que 25 cents e menor que 50 cents, retorna moeda de 25 cents\n");
        centavos-=25;
        printf("centavos restantes: %d\n", centavos);
        moeda[8]++;
    }
    while(centavos >= 10){
        printf("valor maior que 10 cents e menor que 25 cents, retorna moeda de 10 cents\n");
        centavos-=10;
        printf("centavos restantes: %d\n", centavos);
        moeda[9]++;
    }
    while(centavos >= 5){
        printf("valor maior que 5 cents e menor que 10 cents, retorna moeda de 5 cents\n");
        centavos-=5;
        printf("centavos restantes: %d\n", centavos);
        moeda[10]++;
    }
    while(centavos >= 1){
        printf("valor maior que 1 cent e menor que 5 cents, retorna moeda de 1 cent\n");
        centavos-=1;
        printf("centavos restantes: %d\n", centavos);
        moeda[11]++;
    }

    printf("\n\n\n\n\n\n\n");
    printf("Nota 100 reais: %d\n", moeda[0]);
    printf("Nota 50 reais: %d\n", moeda[1]);
    printf("Nota 20 reais: %d\n", moeda[2]);
    printf("Nota 10 reais: %d\n", moeda[3]);
    printf("Nota 5 reais: %d\n", moeda[4]);
    printf("Nota 2 reais: %d\n", moeda[5]);
    printf("Moeda 1 real: %d\n", moeda[6]);
    printf("Moeda 50 centavos: %d\n", moeda[7]);
    printf("Moeda 25 centavos: %d\n", moeda[8]);
    printf("Moeda 10 centavos: %d\n", moeda[9]);
    printf("Moeda 5 centavos: %d\n", moeda[10]);
    printf("Moeda 1 centavo: %d\n", moeda[11]);
    return 0;    
}