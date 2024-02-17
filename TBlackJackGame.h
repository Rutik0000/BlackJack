#pragma once
using namespace System;
class TBlackJackGame
{
private:
	int game_type;//��� ����: 1 - ������� - ���������, 2 - ������� - �������
	int score;//���� ������
	int scoreE;//���� ����������
	int cards; //���������� ���� ������
	int cardsE; //���������� ���� ����������
	int ncard; //���������� ���� � ������ ��� ������� ����
	int wins1;//���������� ����� ������� ������
	int wins2;//���������� ����� ������� ������
	int *cardNom;//������ ��������� ���� ��� ������� ����
	int *cardImages;//������ ����������� ����
public:
	TBlackJackGame(void);//����������� �� ���������
	~TBlackJackGame(void);//����������
	void NewGame(int gametype);//����� ����
	int GetGamerCard(void);//����� ��������� ����� ������� ������
	int GetOpponentCard(void);//����� ��������� ����� ������� ������
	int GameType(void){return game_type;}//���������� ��� ����
	void GameType(int val){game_type = val;}
	int Score(void){return score;}//���������� ���� ������
	int ScoreE(void){return scoreE;}//���������� ���� ����������
	int Cards(void){return cards;}//���������� ���������� ���� ������
	int CardsE(void){return cardsE;}//���������� ���������� ���� ����������
	int nCard(void){return ncard;}//���������� ���������� ���� � ������ ��� ������� ����
	int Wins1(void){return wins1;}//���������� ���������� ����� ������� ������
	void IncWins1(void){wins1 = wins1 + 1;}
	int Wins2(void){return wins2;}//���������� ���������� ����� ������� ������
	void IncWins2(void){wins2 = wins2 + 1;}
};

