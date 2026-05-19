      #include <stdio.h>
      
      int main() {
          float peso, altura, imc;
          
          printf("--- SISTEMA DE SAUDE COMUNITARIO ---\n");
          printf("Digite o seu peso (kg): ");
          scanf("%f", &peso);
          
          printf("Digite a sua altura (metros): ");
          scanf("%f", &altura);
          
          imc = peso / (altura * altura);
          printf("Seu IMC e: %.2f\n", imc);
          
          if (imc < 18.5) {
              printf("Diagnostico: Abaixo do peso ideal.\n");
          } else if (imc >= 18.5 && imc < 24.9) {
              printf("Diagnostico: Peso normal.\n");
          } else {
              printf("Diagnostico: Acima do peso. Consulte um medico.\n");
          }
          
          return 0;
      }