#define PIEZZO 3
#define KEY1 8
#define KEY2 9
#define KEY3 10
#define KEY4 11
#define KEY5 12
#define KEY6 13

int keyboard[] = {KEY1, KEY2, KEY3, KEY4, KEY5, KEY6}; 

void setup() {
  // put your setup code here, to run once:
  pinMode(PIEZZO, OUTPUT);
  for(int i = 0; i < 6; i++){
    pinMode(keyboard[i], INPUT); 
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(KEY1) == HIGH){
    tone(PIEZZO, 220); 
    }
  else if(digitalRead(KEY2) == HIGH){
    tone(PIEZZO,  261.63); 
    } 
  else if(digitalRead(KEY3) == HIGH){
    tone(PIEZZO,  293.66);
    }
  else if(digitalRead(KEY4) == HIGH){
    tone(PIEZZO,  329.63); 
    }
   else if(digitalRead(KEY5) == HIGH){
    tone(PIEZZO,  392.00); 
    }
   else if(digitalRead(KEY6) == HIGH){
    tone(PIEZZO, 440);
    }
  else {
    tone(PIEZZO, -100);
    }

}
