#define _CRT_SECURE_NO_WARNINGS 1

//#ifndef __1_H__
//#define __1_H__
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Row 3
#define Col 3

void Initboard(char board[Row][Col],int row,int col);//���̳�ʼ����������
void Displayboard(char board[Row][Col],int row,int col);//���̴�ӡ��������
void Playermove(char board[Row][Col],int row,int col);//������庯������
void Computermove(char board[Row][Col],int row,int col);//�������庯������
char Iswin(char board[Row][Col],int row,int col);//�ж���Ϸ��������������-��C�������Ӯ-��*��������Ӯ-��#����ƽ��-��Q����

//#endif