#include <stdio.h>
#include <unistd.h>


double	ft_resultado(int soma, int membros)
{
	double resultado;

	resultado = (soma / membros);
	printf("Essa é a média de idade da família: %f\n", resultado);
	return(resultado);
}


static double	ft_soma(double idade)
{
	static double soma;
	soma += idade;
	
	return(soma);	
}


int	ft_membros()
{
	double idade;
	double membros;
	int contador1;
	int contador2;
	printf("Informe a quantidade de membros da família: ");
	scanf("%lf", &membros);
	
	contador1 = 1;
	contador2 = membros;
	while(contador2 > 0)
	{
		printf("Digite a idade do membros %d da família: \n", contador1);
		scanf("%lf", &idade);
		ft_soma(idade);
		contador1++;
		contador2--;
	}
	return(membros);
}


int	main()
{
	double x = 0;
	double y = 0;

	y = ft_membros();
	printf("A quantidade de membros é: %f\n", y);
	x = ft_soma(x);
	printf("A soma das idades é: %f\n", x);
	ft_resultado(x, y);	

	return (0);
}
