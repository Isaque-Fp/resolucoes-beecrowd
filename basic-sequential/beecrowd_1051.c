#include <stdio.h>
 
int main() {
 double renda, imp_renda;
 scanf("%lf",&renda);
 if (renda >= 0 && renda <= 2000){
     printf("Isento\n");
 } else if (renda >= 2000 && renda <= 3000) {
     imp_renda = (renda - 2000)  * 0.08;
     printf("R$ %.2lf\n",imp_renda);
 } else if (renda >= 3000 && renda <= 4500 ) {
     imp_renda =  80 + (renda - 3000)  * 0.18;
     printf("R$ %.2lf\n",imp_renda);
 } else if (renda >= 4500){
     imp_renda = 350 + (renda - 4500)  * 0.28;
     printf("R$ %.2lf\n",imp_renda);
 }
 
    return 0;
}