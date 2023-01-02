#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//_CRT_SECURE_NO_WARNINGS

void m() {
	printf("************\n");
	printf("***1.play***\n");
	printf("***0.exit***\n");
	printf("************\n");
}


void play() {
	int magic = rand() % 100 + 1;
	int guess;
	int i=0;

	for (;1;i++) {
		printf("猜一个数字\n");
		scanf("%d",&guess);
		if (guess > magic) {
			printf("太大了\n");
		}
		else if (guess < magic) {
			printf("太小了\n");
		}
		else{
			printf("猜对了\n");
			printf("最后的数字是%d\n",magic);
			break;
		}
	}
	if (i<=5) {
		printf("太强了，只猜了%d次就对了，牛逼\n",i);
	}
	else {
		printf("辣鸡，猜了%d次才对\n", i);
	}
}

int main() {
	int input;
	srand((unsigned int)time(0));//time(0)得到的是时间戳,对应头文件#include <time.h>
	for (;100;) {
		m();
		scanf("%d",&input);
		if (input==1) {
			play();
		}
		else if(input==0) {
			exit(0);
		}
		else {
			printf("输入错误\n");
		}
	}
	return 0;
}