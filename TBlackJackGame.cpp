#include "StdAfx.h"
#include "TBlackJackGame.h"

TBlackJackGame::TBlackJackGame(void)
{
	const int cardCount = 52;//���������� ���� � ������ 
	int nominals[cardCount] = //������ ��������� ����
	{11,2,3,4,5,6,7,8,9,10,2,3,4,11,2,3,4,
	5,6,7,8,9,10,2,3,4,11,2,3,4,5,6,7,8,9,
	10,2,3,4,11,2,3,4,5,6,7,8,9,10,2,3,4};
	cardNom = new int[cardCount];//������ ��������� ���� ��� ������� ����
	cardImages = new int[cardCount];//������ ����������� ����
	game_type = 2;
	cards = 0;
	cardsE = 0;
	score = 0;
	scoreE = 0;
	wins1 = 0;
	wins2 = 0;
	ncard = cardCount;
	for (int i = 0; i < ncard; i++)//������������� ��������
	{
		cardImages[i] = i;
		cardNom[i] = nominals[i];
	}
}

TBlackJackGame::~TBlackJackGame(void)
{
}
void TBlackJackGame::NewGame(int gametype)
//����� ����
{
	const int cardCount = 52;//���������� ���� � ������ 
	int nominals[cardCount] = //������ ��������� ����
	{11,2,3,4,5,6,7,8,9,10,2,3,4,11,2,3,4,
	5,6,7,8,9,10,2,3,4,11,2,3,4,5,6,7,8,9,
	10,2,3,4,11,2,3,4,5,6,7,8,9,10,2,3,4};
	cardNom = new int[cardCount];//������ ��������� ���� ��� ������� ����
	cardImages = new int[cardCount];//������ ����������� ����
	game_type = gametype;
	cards = 0;
	cardsE = 0;
	score = 0;
	scoreE = 0;
	ncard = cardCount;
	for (int i = 0; i < ncard; i++)//������������� ��������
	{
		cardImages[i] = i;
		cardNom[i] = nominals[i];
	}
}
int TBlackJackGame::GetGamerCard(void)
//����� ��������� ����� ������� ������
{
	Random ^random;//��������� ��������� �����
	random = gcnew Random();
	int k = random->Next(0, ncard);//��������� ����� �����
	score = score + cardNom[k];//������� ����� �����
	int res = cardImages[k];
	cards++;//��������� ���������� ���������� ����
	for (int i = k; i < ncard - 1; i++)//������� ����� �� ������
	{
		cardImages[i] = cardImages[i + 1];
		cardNom[i] = cardNom[i + 1];
	}
	ncard--;//��������� ����� ���� � ������
	return res;
}
int TBlackJackGame::GetOpponentCard(void)
//����� ��������� ����� ������� ������
{
	Random ^random;//��������� ��������� �����
	random = gcnew Random();
	int k = random->Next(0, ncard);//��������� ����� �����
	scoreE = scoreE + cardNom[k];//������� ����� �����
	int res = cardImages[k];
	cardsE++;//��������� ���������� ���������� ����
	for (int i = k; i < ncard - 1; i++)//������� ����� �� ������
	{
		cardImages[i] = cardImages[i + 1];
		cardNom[i] = cardNom[i + 1];
	}
	ncard--;//��������� ����� ���� � ������
	return res;
}