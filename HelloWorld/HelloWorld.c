#include <AT89X51.H>
#include <stdio.h>

void main(void){
	SCON = 0x50;
	TMOD = 0x20;
	TCON = 0x40;
	TH1 = 0xE8;
	TL1 = 0xE8;
	TI = 1;
	TR1 = 1;

	while(1){
		printf("Hello World!\n");
	}
}