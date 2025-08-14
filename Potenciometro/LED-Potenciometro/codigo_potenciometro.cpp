const byte LED = 3;
const byte POTENCIOMETRO = A5;
unsigned int valorPotenciometro;

void setup(){
   pinMode(LED, OUTPUT);
   pinMode(POTENCIOMETRO, INPUT);
}

void loop()
{
  valorPotenciometro = analogRead(POTENCIOMETRO);
  analogWrite(LED, byte(valorPotenciometro/4));
}
