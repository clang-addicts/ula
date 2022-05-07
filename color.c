#include <stdio.h>
#include <Windows.h>

// 색갈 지정 (0~255, window color)
// 사용 예시: setColor(48);
static void setColor(int color) 
{
	SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), color);
}

int main(int argc, char **argv)
{
    int i = 0;
    for(i=0; i<255; i++) {
        setColor(i);
        printf("IDX=%d ##############################\n", i);
    }

    scanf("%d", &i);
    return 0;
}