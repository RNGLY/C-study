#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __1_H__
#define __1_H__

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Row 9//�и�������
#define Col 9//�и�������
#define Rows Row+2//���ڴ�ӡ��ͼ
#define Cols Col+2//���ڴ�ӡ��ͼ
#define Lei_count 10//�׸�������

void Initboard(char board[Rows][Cols],int rows,int cols,char set);//��ͼ��ʼ����������
void Displayboard(char board[Rows][Cols],int row,int col);//��ͼ��ӡ��������
void Setmine(char board[Rows][Cols],int row,int col);//�����׺�������
void Finemine(char mine[Rows][Cols],char show[Rows][Cols],int row,int col);//�����׺�������
int get_mine(char mine[Rows][Cols],int x,int y);//��������������Χ��������������
void Recur(char mine[Rows][Cols],char show[Rows][Cols],int row,int col,int x,int y);//���õݹ�չ�����꺯������
int Count(char show[Rows][Cols],int row,int col);//û�Ų����������㺯������

#endif