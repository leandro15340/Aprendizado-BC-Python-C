

#include <iostream>

int main()
{
	int numero, soma = 0, qtdLido = 0;
	float media;
	char resposta = 's';

	while (resposta == 's')
	{
		printf("Deseja digitar outro numero (s/n) \n\n");
		resposta = _getwche();
	}

	return 0;
}
