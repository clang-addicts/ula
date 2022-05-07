#include <stdio.h>
#include <conio.h>

 // 특정 키가 입력될때까지 대기하는 함수
// 사용 예시: pause(ENTER);
typedef enum {
	ENTER,
	ESC,
	SPACE,
	BACK
} KEY;
void pause(KEY _KEY){
	short WAIT_KEY;
	switch(_KEY){
		case ENTER: WAIT_KEY = 13; break;
		case ESC: WAIT_KEY = 27; break;
		case SPACE: WAIT_KEY = 32; break;
		case BACK: WAIT_KEY = 8; break;
	}
	while(1){
		if(kbhit()){
			int in = getch();
			if(in == WAIT_KEY){
				break;
			}
		}
	}
} 

int main() {
	while(1){
		if(kbhit()){
			printf("%d\n", getch());
		}
	}
}