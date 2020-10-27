typedef struct {
    char tipo;
    int valor;
} projeto;
projeto proj[9];


int main(){

int i=0;

for(i=0; i<10; i++) {
    proj[i].valor = 0;
    proj[i].tipo = ' ';
}

for(i=0; i<10; i++) {
    printf(" Digite o valor: ");
    scanf("%d", &proj[i].valor);
    printf(" Digite o tipo da despesa R\N : ");
    scanf("%c", &proj[i].tipo);
    getchar();
}

for(i=0; i<10; i++) {
    printf(" \n O projeto %d ",i);
    printf(" \n Saudo final: %d", proj[i].valor);
}



return 0;
}
