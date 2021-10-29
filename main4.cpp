#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>   

void One(){
PORTB = PORTB &~ 1 << PB5;
PORTB = PORTB &~ 1 << PB4;
PORTB = PORTB &~ 1 << PB3;
PORTB = PORTB &~ 1 << PB2;
PORTD = PORTD &~ 1 << PD7;
PORTD = PORTD | 1 << PD6;
PORTD = PORTD | 1 << PD5;
PORTD = PORTD  | 1 << PD4;
}
void Two(){
PORTB = PORTB | 1 << PB5;
PORTB = PORTB | 1 << PB4;
PORTB = PORTB | 1 << PB3;
PORTB = PORTB &~ 1 << PB2;
PORTD = PORTD | 1 << PD7;
PORTD = PORTD | 1 << PD6;
PORTD = PORTD | 1 << PD5;
PORTD = PORTD  &~ 1 << PD4;

}
void Three(){
PORTB = PORTB | 1 << PB5;
PORTB = PORTB &~ 1 << PB4;
PORTB = PORTB | 1 << PB3;
PORTB = PORTB &~ 1 << PB2;
PORTD = PORTD | 1 << PD7;
PORTD = PORTD | 1 << PD6;
PORTD = PORTD | 1 << PD5;
PORTD = PORTD | 1 << PD4;
}

void Four(){
PORTB = PORTB &~ 1 << PB5;
PORTB = PORTB &~ 1 << PB4;
PORTB = PORTB | 1 << PB3;
PORTB = PORTB | 1 << PB2;
PORTD = PORTD &~ 1 << PD7;
PORTD = PORTD | 1 << PD6;
PORTD = PORTD | 1 << PD5;
PORTD = PORTD | 1 << PD4;
}

void Five(){
PORTB = PORTB | 1 << PB5;
PORTB = PORTB &~ 1 << PB4;
PORTB = PORTB | 1 << PB3;
PORTB = PORTB | 1 << PB2;
PORTD = PORTD | 1 << PD7;
PORTD = PORTD &~ 1 << PD6;
PORTD = PORTD | 1 << PD5;
PORTD = PORTD | 1 << PD4;

}
void Six(){
PORTB = PORTB | 1 << PB5;
PORTB = PORTB | 1 << PB4;
PORTB = PORTB | 1 << PB3;
PORTB = PORTB | 1 << PB2;
PORTD = PORTD | 1 << PD7;
PORTD = PORTD &~ 1 << PD6;
PORTD = PORTD | 1 << PD5;
PORTD = PORTD | 1 << PD4;
}


int main(){
DDRB=255;
DDRD=255;
DDRC = 0;
while(1)
{
int dice = rand() % 6 + 1;
if(PINC & 1 << PC2){
  if(dice == 1){
  One();
  }
 else if (dice == 2){
  Two(); 
  }
 else if(dice == 3){
  Three();
  }
  else if ( dice == 4){
  Four();  
  }
  else if ( dice == 5){
  Five();
    
  }
  else if( dice == 6){
  Six();
  }
  
}

}

return 0;
}