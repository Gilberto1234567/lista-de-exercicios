#include <stdio.h>

int main(){
	
struct horario{
	int hora;
	int minutos;
	int segundos;
};
struct horario horario;	

struct data{
	int dia;
	int mes;
	int ano;
};
struct data data;

struct compromisso{
	int data;
	int horario;
	char texto[200];
};
struct compromisso compromisso;
		
}
