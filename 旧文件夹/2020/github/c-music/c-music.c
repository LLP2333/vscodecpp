#include <conio.h>
#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) //坐标函数
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle, pos);
}
// 0      1       2      3      4       5
//半低音  低音   半中音  中音  半高音  高音
int Alto[8] = {0, 523, 578, 659, 698, 784, 880, 988};          //中音
int Bass[8] = {0, 262, 294, 330, 349, 392, 440, 494};          //低音
int Treble[8] = {0, 1046, 1175, 1318, 1480, 1568, 1760, 1976}; //高音
int half_Alto[8] = {0, 554, 622, 0, 740, 831, 932, 0};         //半中音
int half_Bass[8] = {0, 277, 311, 0, 370, 415, 466, 0};         //半低音
int half_Treble[8] = {0, 1046, 1245, 0, 1480, 1661, 1865, 0};  //半高音
int music[60] = {0};
char music_map[1000][100];
int line;
int quarter_time; //标准是400，但有时候会慢，有需求调整这里

void insert()
{
    int i = 0, j = 0;
    printf("tip:如果音画不同步，只要随便音乐播放器播放一首歌即可！！！！！！！！！！！！！！！！！\n");
    printf("听到一次鸣笛表示环境正常，软件缺点有细微的鼓点杂音，并且对电脑造成影响未知，请谨慎使用\n");
    printf("程序课查看源码自带乐谱\n");
    printf("简谱规则：1.每行以回车结尾，结尾另起一行写上“END”即视为输入结束\n");
    printf("简谱格式：数字+音阶+持续时长 \n\n");
    printf("数字区 ： 1-7即可\n");
    printf("音阶区 ： 高音(')低音(.)中音(不填)半低音(-)半高音（+）半中音(*)\n");
    printf("时长区 ： 一个空格对应1/8音符 两个空格1/4音符 无空格1/16音符 空格越多延长1/8个音符\n");
    printf("总结：  数字+音阶+持续时长 + ||修饰 +  另起一行END结尾 即是简谱\n");
    printf("示例    <====> |1'  2.  3 4 1234|为一个小节\n");
    printf("输入是任意的，直到END行结束，但请不要输入空白行\n");
    printf("此处可以输入了 记得END另起一行结尾喔\n");
    while (1)
    {
        scanf("%[^\n]", music_map[i]);
        if (strcmp(music_map[i++], "END") == 0)
            break;
        getchar();
    }
    line = i;
    system("cls");
    gotoxy(0, 0);
    for (j = 0; j < i; j++)
    {
        printf("%s\n", music_map[j]);
    }
    printf("\n\n");
}

void play()
{
    int time = 0;
    int rate = 0;
    int i, j, len;
    for (i = 0; i < line; i++)
    {
        len = strlen(music_map[i]);
        for (j = 0; j < len; j++)
        {
            gotoxy(j, i);

            if ((music_map[i][j] >= '0' && music_map[i][j] <= '9'))
            {
                time = 100;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 03);
                printf("%c", music_map[i][j]);
                if (music_map[i][j + 1] == '.')
                { //高音区50
                    rate = music_map[i][j] - '0' + 10;
                    gotoxy(j + 1, i);
                    printf("%c", music_map[i][j + 1]);
                    j += 2;
                }
                else if (music_map[i][j + 1] == '\'')
                { //高音区50
                    rate = music_map[i][j] - '0' + 50;
                    gotoxy(j + 1, i);
                    printf("%c", music_map[i][j + 1]);
                    j += 2;
                }
                else if (music_map[i][j + 1] == '-')
                { //半低区0
                    rate = music_map[i][j] - '0' + 0;
                    gotoxy(j + 1, i);
                    printf("%c", music_map[i][j + 1]);
                    j += 2;
                }
                else if (music_map[i][j + 1] == '*')
                { //半中音区20
                    rate = music_map[i][j] - '0' + 20;
                    gotoxy(j + 1, i);
                    printf("%c", music_map[i][j + 1]);
                    j += 2;
                }
                else if (music_map[i][j + 1] == '+')
                { //半高音区40
                    rate = music_map[i][j] - '0' + 40;
                    gotoxy(j + 1, i);
                    printf("%c", music_map[i][j + 1]);
                    j += 2;
                }
                else
                {
                    rate = music_map[i][j] - '0' + 30; //中音区30
                    j++;
                }
                while (music_map[i][j] == ' ')
                {
                    time += quarter_time / 2; //加间隔1/8音符
                    j++;
                }
                j--;
                if (time == 0)
                {
                    time = quarter_time * 2 / 3;
                }
                Beep(music[rate], time);
                Sleep(50);
            }
        }
    }
}

int main()
{
    //  800  1/2
    //  400 中等1/4
    //  200 1/8
    //默认1/4音符
    int n, i, j, res;
    char ch;
    system("color 07");
    quarter_time = 300; //标准是400，但有时候会慢，有需求调整这里

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 0)
                music[i * 10 + j] = half_Bass[j];
            else if (i == 1)
                music[i * 10 + j] = Bass[j];
            else if (i == 2)
                music[i * 10 + j] = half_Alto[j];
            else if (i == 3)
                music[i * 10 + j] = Alto[j];
            else if (i == 4)
                music[i * 10 + j] = half_Treble[j];
            else if (i == 5)
                music[i * 10 + j] = Treble[j];
        }
    }
    Beep(music[31], 400);
    printf("直接输入END回车即可进入训练模式\n");
    insert();
    play();
    printf("\nq : 半低音  w：半中音  e：半高音\n");
    printf("a : 低音    s：中音    d：高音\n");

    res = 30;
    while (ch = getch())
    {
        if (ch >= '0' && ch <= '7')
        {
            n = ch - '0';
            Beep(music[res + n], 200);
        }
        else if (ch == 'a')
        {
            res = 10;
            gotoxy(0, 0);
            printf("低音  ");
        }
        else if (ch == 's')
        {
            res = 30;
            gotoxy(0, 0);
            printf("中音  ");
        }
        else if (ch == 'd')
        {
            res = 50;
            gotoxy(0, 0);
            printf("高音  ");
        }
        else if (ch == 'q')
        {
            res = 0;
            gotoxy(0, 0);
            printf("半低音  ");
        }
        else if (ch == 'w')
        {
            res = 20;
            gotoxy(0, 0);
            printf("半中音  ");
        }
        else if (ch == 'e')
        {
            res = 40;
            gotoxy(0, 0);
            printf("半高音  ");
        }
    }
    return 0;
}

/*


				  C语言简谱
				【Bad Apple】	
|6 7 1' 2' 3'  6' 5' |3'  6  3' 2' 1' 7 |6 7' 1' 2' 3'  2' 1' ||||7 6 7 1' 7 6 5 7 ||||||||||
|6 7 1' 2' 3'  6' 5' |3'  6  3' 2' 1' 7 |6 7' 1' 2' 3'  2' 1' ||||7  1'  2'  3'  ||||||||||||
|6. 7. 1 2 3  6 5 ||||3  6.  3 2 1 7. |||6. 7. 1 2 3  2 1 ||||7. 6. 7. 1 7. 6. 5. 7. ||||||||
|6. 7. 1 2 3  6 5 ||||3  6.  3 2 1 7. |||6. 7. 1 2 3  2 1 ||||7.  1  2  3  ||||||||||||||||||
|5 6 3 2 3  2 3 ||||||5 6 3 2 3  2 3 ||||2 1 7. 5. 6.  5. 6. |7. 1 2 3 6.  3 5 ||||||||||||||
|5 6 3 2 3  2 3 ||||||5 6 3 2 3  6 7 ||||1' 7 6 5 3  2 3 |||||2 1 7. 5. 6.  3' 5' |||||||||||
|5' 6' 3' 2' 3'  2' 3' ||5' 6' 3' 2' 3'  2' 3' ||2' 1' 7 5 6  5 6 |7 1' 2' 3' 6  3 5 ||||||||
|5 6 3 2 3  2 3 |||||||||5 6 3 2 3  6 7 ||1' 7 6 5 3  2 3 |||||2 1 7. 5. 6.  3 5  |||||||||||
		      		  【{碎月}】
|3. 5. 6. 1 2  1 2 3  |1 6. 5. 3. 1 2 6.  ||6. 1 2  1 2 3  5 6 1' |||||||||||||||||||||||||||
|7 67 6 5 6  |||5 3 2  3 1 2  1 2 3  6. 12 1 6.  6. 5. 6. 6 1  3 2  5 6  ||||||||||||||||||||
|3. 5. 5 6 3 2 3  |1 2 7. 1 7. 5. 6.   ||3. 5. 6. 1 2 1 2  2 1 2 1 2 5 3  |||||||||||||||||||
|3 5  6  5 6 3  3 1 23 21 6.  |6. 5. 6.  5. 6. 1 2 1 5 6   ||||||||||||||||||||||||||||||||||
		   	 	【{千与千寻}】
|1  5  3'  |||||1  5  3'  |||1  5  3'  |||1  5   1 2||3 1 5   3  |||2  5  2  |||1 6. 3   1 ||
|7.  0 1 7. ||||6.  7.  1 2 |5.  1  2 3 ||4  43 21 |||2    1 2 |||||3 1 5  3  ||2  5  2  ||||
|1 6. 6.  7. 1 |5. 0 0 5. |||6.  7.  1 2 |5.  1  2 3 |4  4 3 2 1 |||1  0 0 3 4 ||5  5  5  |||
|5  5 6 5 4 ||||3  3  3   |||3 3 4 3 2 |||1  1  1 7. |6. 0 7.  7. 1|2  2 3 2 3 |2   3 4 |||||
|5  5  5  |5  5 6 5 4 |3  3  3   |3 4 3 2 1 7. |6. 0 6. 7. 1 2 |5.  1  2 3 |2   2 2  1 1   ||
				【{Astronomia}】
|4 4 4 4 6 6 6 6 |5 5 5 5 1' 1' 1' 1' |2' 2' 2' 2' 2' 2' 2' 2' |5 4 3 1 2 0 2 6 |||||||||||||
|5 0 4 0 3 0 3 3 |5 0 4 3 2 0 2 3' ||||2' 3' 2' 3' 2 0 2 3' ||||2' 3' 2' 3' 2 0 2 6 |||||||||
|5 0 4 0 3 0 3 3 |5 0 4 3 2 0 2 3' ||||2' 3' 2' 3' 2 0 2 3' ||||2' 3' 2' 3' 4 4 4 4 |||||||||
|6 6 6 6 5 5 5 5 |1' 1' 1' 1' 2' 2' 2' 2' |2' 2' 2' 2' 5 4 3 1 |2 0 2 6 5 0 4 0 |||||||||||||
|3 0 3 3 5 0 4 3 |2 0 2 3' 2' 3' 2' 3' |2 0 2 3' 2' 3' 2' 3' |||2 0 2 6 5 0 4 0 |||||||||||||
|3 0 3 3 5 0 4 3 |2 0 2 3' 2' 3' 2' 3' |2 0 2 3' 2' 3' 2' 3' |||0  0  0  0  |||||||||||||||||
END


*/