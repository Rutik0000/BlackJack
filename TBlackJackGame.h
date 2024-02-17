#pragma once
using namespace System;
class TBlackJackGame
{
private:
	int game_type;//тип игры: 1 - человек - компьютер, 2 - человек - человек
	int score;//счёт игрока
	int scoreE;//счёт противника
	int cards; //количество карт игрока
	int cardsE; //количество карт противника
	int ncard; //количество карт в колоде для текущей игры
	int wins1;//количество побед первого игрока
	int wins2;//количество побед второго игрока
	int *cardNom;//массив номиналов карт для текущей игры
	int *cardImages;//массив изображений карт
public:
	TBlackJackGame(void);//конструктор по умолчанию
	~TBlackJackGame(void);//деструктор
	void NewGame(int gametype);//новая игра
	int GetGamerCard(void);//вывод случайной карты первого игрока
	int GetOpponentCard(void);//вывод случайной карты второго игрока
	int GameType(void){return game_type;}//возвращает тип игры
	void GameType(int val){game_type = val;}
	int Score(void){return score;}//возвращает счёт игрока
	int ScoreE(void){return scoreE;}//возвращает счёт противника
	int Cards(void){return cards;}//возвращает количество карт игрока
	int CardsE(void){return cardsE;}//возвращает количество карт противника
	int nCard(void){return ncard;}//возвращает количество карт в колоде для текущей игры
	int Wins1(void){return wins1;}//возвращает количество побед первого игрока
	void IncWins1(void){wins1 = wins1 + 1;}
	int Wins2(void){return wins2;}//возвращает количество побед второго игрока
	void IncWins2(void){wins2 = wins2 + 1;}
};

