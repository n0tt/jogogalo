#include	<iostream>

using namespace std;

char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

char players[2][15] = { "Jogador 1", "Jogador 2" };

int isplayer = 0;


void ShowGame()
{
	/*for (int i = 0; i < 3; ++i)
	{
	for (int j = 0; j < 3; ++j)
	{
	cout << matrix[i][j] << " ";
	}
	cout << endl;
	}*/
	/*
	- - - - - - -
	| 1 | 2 | 3 |
	|- - - - - -|
	| 4 | 5 | 6 |
	|- - - - - -|
	| 7 | 8 | 9 |
	- - - - - --
	*/
	cout << "- - - - - - -" << endl;
	cout << "| " << matrix[0][0] << " | " << matrix[0][1] << " | " << matrix[0][2] << " |" << endl;
	cout << "|- - - - - -|" << endl;
	cout << "| " << matrix[1][0] << " | " << matrix[1][1] << " | " << matrix[1][2] << " |" << endl;
	cout << "|- - - - - -|" << endl;
	cout << "| " << matrix[2][0] << " | " << matrix[2][1] << " | " << matrix[2][2] << " |" << endl;
	cout << "- - - - - - -" << endl;
	/*if (array[0][0] == array[0][1] && array[0][1] == array[0][2]) {
	}*/
}

void Play()
{
	int a;

	cout << "Escolhe um número para jogares:";
	cin >> a;

	switch (a) {
	case 1: {
		if (matrix[0][0] != '1'){
			cout << "Este numero ja esta ocupado, escolhe outro!" << endl;
			Play();
			break;
		}
		matrix[0][0] = isplayer == 1 ? 'O' : 'X';
		break;
	}
	case 2: {
		if (matrix[0][1] != '2'){
			cout << "Este numero ja esta ocupado, escolhe outro!" << endl;
			Play();
			break;
		}
		matrix[0][1] = isplayer == 1 ? 'O' : 'X';
		break;
	}
	case 3: {
		if (matrix[0][2] != '3'){
			cout << "Este numero ja esta ocupado, escolhe outro!" << endl;
			Play();
			break;
		}
		matrix[0][2] = isplayer == 1 ? 'O' : 'X';
		break;
	}
	case 4: {
		if (matrix[1][0] != '4'){
			cout << "Este numero ja esta ocupado, escolhe outro!" << endl;
			Play();
			break;
		}
		matrix[1][0] = isplayer == 1 ? 'O' : 'X';
		break;
	}
	case 5: {
		if (matrix[1][1] != '5'){
			cout << "Este numero ja esta ocupado, escolhe outro!" << endl;
			Play();
			break;
		}
		matrix[1][1] = isplayer == 1 ? 'O' : 'X';
		break;
	}
	case 6: {
		if (matrix[1][2] != '6'){
			cout << "Este numero ja esta ocupado, escolhe outro!" << endl;
			Play();
			break;
		}
		matrix[1][2] = isplayer == 1 ? 'O' : 'X';
		break;
	}
	case 7: {
		if (matrix[2][0] != '7'){
			cout << "Este numero ja esta ocupado, escolhe outro!" << endl;
			Play();
			break;
		}
		matrix[2][0] = isplayer == 1 ? 'O' : 'X';
		break;
	}
	case 8: {
		if (matrix[2][1] != '8'){
			cout << "Este numero ja esta ocupado, escolhe outro!" << endl;
			Play();
			break;
		}
		matrix[2][1] = isplayer == 1 ? 'O' : 'X';
		break;
	}
	case 9: {
		if (matrix[2][2] != '9'){
			cout << "Este numero ja esta ocupado, escolhe outro!" << endl;
			Play();
			break;
		}
		matrix[2][2] = isplayer == 1 ? 'O' : 'X';
		break;
	}
	}

}

void ChangePlayer(){

	isplayer = (isplayer == 0 ? 1 : 0);
}

char Win()
{
	/*
	- - - - - - -
	| 1 | 2 | 3 |
	|- - - - - -|
	| 4 | 5 | 6 |
	|- - - - - -|
	| 7 | 8 | 9 |
	- - - - - --
	*/
	//linha 1
	if (matrix[0][0] == matrix[0][1] && matrix[0][2] == matrix[0][1])
		return matrix[0][0];
	//linha 2
	else if (matrix[1][0] == matrix[1][1] && matrix[1][2] == matrix[1][1])
		return matrix[1][0];
	//linha 3
	else if (matrix[2][0] == matrix[2][1] && matrix[2][2] == matrix[2][1])
		return matrix[2][0];
	//coluna 1
	else if (matrix[0][0] == matrix[1][0] && matrix[2][0] == matrix[1][0])
		return matrix[0][0];
	//coluna 2
	else if (matrix[0][1] == matrix[1][1] && matrix[2][1] == matrix[1][1])
		return matrix[0][1];
	//coluna 3
	else if (matrix[0][2] == matrix[1][2] && matrix[2][2] == matrix[1][2])
		return matrix[0][2];
	// Diagonal cima -  e->d
	else if (matrix[0][0] == matrix[1][1] && matrix[2][2] == matrix[1][1])
		return matrix[0][0];
	// Diagonal cima - d->e
	else if (matrix[0][2] == matrix[1][1] && matrix[2][0] == matrix[1][1])
		return matrix[0][0];
	else if (matrix[0][0] == '1' && matrix[0][1] == '2' && matrix[0][2] == '3' && matrix[1][0] == '4' && matrix[1][1] == '5' && matrix[1][2] == '6' && matrix[2][0] == '7' && matrix[2][1] == '8' && matrix[3][2] == '9')
		return 'e';
	else
		return false;

	return false;
}

void clearWithHeader(){
	system("cls");
	cout << "-------------------------------------------------------------" << endl;
	cout << "|                                                           |" << endl;
	cout << "|              Rui Almeida - Jogo do Galo v0.1b             |" << endl;
	cout << "|                                                           |" << endl;
	cout << "-------------------------------------------------------------" << endl;
	cout << endl;
}

int main()
{
	system("TITLE Jogo do Galo - Rui Almeida v0.1b");
	clearWithHeader();

	ShowGame();
	while (true) {

		Play();
		clearWithHeader();
		ShowGame();
		char ed = Win();

		if (ed != false){
			cout << endl;
			cout << "-------------------------------------------------------------" << endl;
			cout << "|                                                           |" << endl;
			cout << "|                        Fim do jogo                        |" << endl;
			cout << " - Vencedor: ";
			if (ed == 'e')
				cout << "Empate" << endl;
			else
				cout << players[isplayer][0] << endl;
			cout << "|                                                           |" << endl;
			cout << "-------------------------------------------------------------" << endl;

			char js;
			cout << "Digite S se quiser jogar outra vez:";
			cin >> js;
			if (js == 'S' || js == 's'){

				matrix[0][0] = '1';
				matrix[0][1] = '2';
				matrix[0][2] = '3';
				matrix[1][0] = '4';
				matrix[1][1] = '5';
				matrix[1][2] = '6';
				matrix[2][0] = '7';
				matrix[2][1] = '8';
				matrix[2][2] = '9';
				clearWithHeader();
				return main();
			}
			break;
		}
		ChangePlayer();

	}

	system("pause");
	return 0;
}