int buttonpin =5; 

int candy=0;
bool buttonDown=false;
int ledpin[]={23,22,21,32,33,25,26,27,27,26,25,33,32,21,22,23};
void setup() {
  // put your setup code here, to run once:
 pinMode(buttonpin,INPUT);
for(int andy =0;andy<=15;andy++){pinMode(ledpin[andy],OUTPUT);}

}

void loop() {
  // put your main code here, to run repeatedly:
 if(candy<=7){
if( digitalRead(buttonpin)&&buttonDown==false ){ candy++; buttonDown=true;}
if( digitalRead(buttonpin)==LOW) buttonDown=false;
for(int andy=0;andy<=candy;andy++)
digitalWrite(ledpin[andy],HIGH);}
else{
    if( digitalRead(buttonpin)&&buttonDown==false ){ candy++; buttonDown=true;}
if( digitalRead(buttonpin)==LOW) buttonDown=false;
for(int andy=7;andy<=candy;andy++)
digitalWrite(ledpin[andy],LOW);
  
  }

}

