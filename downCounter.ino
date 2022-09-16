//By Emmanuel Rono
//Linkedin Emmanuel Rono
#include <Keypad.h>
int X;
int load=12;
int count;
const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){

  Serial.begin(115200);
  pinMode(load,OUTPUT);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    X=customKey;
    //Serial.println(customKey);
    if(customKey==49){X=1;} if(customKey==50){X=2;}if(customKey==57){X=9;}if(customKey==51){X=3;}
    if(customKey==52){X=4;}if(customKey==53){X=5;}if(customKey==54){X=6;}if(customKey==55){X=7;}if(customKey==56){X=8;}
    //Serial.println(X);
    
  for ( count=1; count<=X; count--)
  {
    digitalWrite(load,HIGH);
    delay(1000);
    digitalWrite(load,LOW);
    Serial.println(count);
    delay(1000);
  
  }
}

  }


