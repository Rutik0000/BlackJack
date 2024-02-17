#include "StdAfx.h"
#include "TBlackJackGame.h"

TBlackJackGame::TBlackJackGame(void)
{
	const int cardCount = 52;//количество карт в колоде 
	int nominals[cardCount] = //массив номиналов карт
	{11,2,3,4,5,6,7,8,9,10,2,3,4,11,2,3,4,
	5,6,7,8,9,10,2,3,4,11,2,3,4,5,6,7,8,9,
	10,2,3,4,11,2,3,4,5,6,7,8,9,10,2,3,4};
	cardNom = new int[cardCount];//массив номиналов карт для текущей игры
	cardImages = new int[cardCount];//массив изображений карт
	game_type = 2;
	cards = 0;
	cardsE = 0;
	score = 0;
	scoreE = 0;
	wins1 = 0;
	wins2 = 0;
	ncard = cardCount;
	for (int i = 0; i < ncard; i++)//инициализация массивов
	{
		cardImages[i] = i;
		cardNom[i] = nominals[i];
	}
}

TBlackJackGame::~TBlackJackGame(void)
{
}
void TBlackJackGame::NewGame(int gametype)
//новая игра
{
	const int cardCount = 52;//количество карт в колоде 
	int nominals[cardCount] = //массив номиналов карт
	{11,2,3,4,5,6,7,8,9,10,2,3,4,11,2,3,4,
	5,6,7,8,9,10,2,3,4,11,2,3,4,5,6,7,8,9,
	10,2,3,4,11,2,3,4,5,6,7,8,9,10,2,3,4};
	cardNom = new int[cardCount];//массив номиналов карт для текущей игры
	cardImages = new int[cardCount];//массив изображений карт
	game_type = gametype;
	cards = 0;
	cardsE = 0;
	score = 0;
	scoreE = 0;
	ncard = cardCount;
	for (int i = 0; i < ncard; i++)//инициализация массивов
	{
		cardImages[i] = i;
		cardNom[i] = nominals[i];
	}
}
int TBlackJackGame::GetGamerCard(void)
//вывод случайной карты первого игрока
{
	Random ^random;//генератор случайных чисел
	random = gcnew Random();
	int k = random->Next(0, ncard);//случайный номер карты
	score = score + cardNom[k];//считаем сумму очков
	int res = cardImages[k];
	cards++;//увеличили количество выведенных карт
	for (int i = k; i < ncard - 1; i++)//удаляем карту из колоды
	{
		cardImages[i] = cardImages[i + 1];
		cardNom[i] = cardNom[i + 1];
	}
	ncard--;//уменьшаем число карт в колоде
	return res;
}
int TBlackJackGame::GetOpponentCard(void)
//вывод случайной карты второго игрока
{
	Random ^random;//генератор случайных чисел
	random = gcnew Random();
	int k = random->Next(0, ncard);//случайный номер карты
	scoreE = scoreE + cardNom[k];//считаем сумму очков
	int res = cardImages[k];
	cardsE++;//увеличили количество выведенных карт
	for (int i = k; i < ncard - 1; i++)//удаляем карту из колоды
	{
		cardImages[i] = cardImages[i + 1];
		cardNom[i] = cardNom[i + 1];
	}
	ncard--;//уменьшаем число карт в колоде
	return res;
}