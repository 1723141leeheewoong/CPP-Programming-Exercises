#pragma once
#include <cstdio>

 struct   PlayInfo {
	const char	name[200];	// ������ �̸�
	int	nMove;		// ���� ������ ������ Ƚ��
	double	tElapsed;	// ��� �ҿ� �ð�
};
extern void loadRanking(const char* filename);
extern void storeRanking(const char* filename);
extern void printRanking();
extern int addRanking(int nMove, double tElap);