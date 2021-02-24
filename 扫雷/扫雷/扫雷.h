#ifndef __扫雷_H__
#define __扫雷_H__

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Row 9//行个数定义
#define Col 9//列个数定义
#define Rows Row+2//便于打印地图
#define Cols Col+2//便于打印地图
#define Lei_count 10//雷个数定义

void Initboard(char board[Rows][Cols],int rows,int cols,char set);//地图初始化函数声明
void Displayboard(char board[Rows][Cols],int row,int col);//地图打印函数声明
void Setmine(char board[Rows][Cols],int row,int col);//布置雷函数声明
void Finemine(char mine[Rows][Cols],char show[Rows][Cols],int row,int col);//查找雷函数声明
int get_mine(char mine[Rows][Cols],int x,int y);//计算输入坐标周围雷总数函数声明
void Recur(char mine[Rows][Cols],char show[Rows][Cols],int row,int col,int x,int y);//利用递归展开坐标函数声明
int Count(char show[Rows][Cols],int row,int col);//没排查完的坐标计算函数声明

#endif
