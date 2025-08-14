void setup(){
  //colocar pinMode for the LEDS
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);  
}
void loop(){
  //GREEN LED will brilhar por 10s
    digitalWrite(4,HIGH);
    delay(10000);
    digitalWrite(4,LOW);
    delay(1000);
//YELLOW LED will brilhar por 2s  
    digitalWrite(3,HIGH);
    delay(2000);
    digitalWrite(3,LOW);
    delay(1000);
//RED LED will brilhar por 10s  
    digitalWrite(2,HIGH);
    delay(10000);
    digitalWrite(2,LOW);
    delay(1000);
  //YELLOW LED will brilhar por 2s  
    digitalWrite(3,HIGH);
    delay(2000);
    digitalWrite(3,LOW);
    delay(1000);
}
