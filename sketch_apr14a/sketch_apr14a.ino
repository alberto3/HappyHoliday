int charBreak = 150;

int LED1 = 0;
int LED2 = 1;
int LED3 = 2;
int LED4 = 3;
int LED5 = 4;
int LED6 = 5;

void setup()
{
	pinMode(LED1, OUTPUT);
	pinMode(LED2, OUTPUT);
	pinMode(LED3, OUTPUT);
	pinMode(LED4, OUTPUT);
	pinMode(LED5, OUTPUT);
	pinMode(LED6, OUTPUT);
}

void loop()
{   
	PORTA = 0b00111111;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00100000;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00100000;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00100000;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00111111;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00000000;  //Open space between characters
	delayMicroseconds(charBreak);
	
	PORTA = 0b00111111;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00100100;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00100100;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00100111;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00000000;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00000000;
	delayMicroseconds(charBreak*2);  //The word is done so have a bigger space between words
	
	PORTA = 0b00111111;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00000001;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00111111;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00000001;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00111111;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00000000;  //Open space between characters
	delayMicroseconds(charBreak);
	
	PORTA = 0b00011111;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00010001;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00010001;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00010000;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00111111;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00000000;  //Open space between characters
	delayMicroseconds(charBreak);
	
	PORTA = 0b00111111;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00100000;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00100000;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00100000;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00111111;
	delayMicroseconds(charBreak);
	
	PORTA = 0b00000000; //The sentence is done so have a HUGE space 
	delayMicroseconds(600);
}




















