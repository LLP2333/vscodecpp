/*从键盘输入某班学生某门课的成绩（已知每班人数最多不超过40人，具体人数由键盘输入，
尝试编程计算其平均值*/
#include<stdio.h>
#include<stdlib.h>
#define N 40
int Average(int score[],int n);
void ReadScore(int score[],int n);
int 