//#pragma once
#include <cstdio>

 struct   PlayInfo {
	char	name[200];	// ������ �̸�
	int	nMove;		// ���� ������ ������ Ƚ��
	double	tElapsed;	// ��� �ҿ� �ð�
};

void loadRanking(const char* filename);
void storeRanking(const char* filename);
void printRanking();
int addRanking(int nMove, double tElap);



