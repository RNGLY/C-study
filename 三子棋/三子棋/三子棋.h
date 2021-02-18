#define _CRT_SECURE_NO_WARNINGS 1

//#ifndef __1_H__
//#define __1_H__
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Row 3
#define Col 3

void Initboard(char board[Row][Col],int row,int col);//棋盘初始化函数声明
void Displayboard(char board[Row][Col],int row,int col);//棋盘打印函数声明
void Playermove(char board[Row][Col],int row,int col);//玩家下棋函数声明
void Computermove(char board[Row][Col],int row,int col);//电脑下棋函数声明
char Iswin(char board[Row][Col],int row,int col);//判断游戏函数声明（继续-“C”，玩家赢-“*”，电脑赢-“#”，平局-“Q”）

//#endif