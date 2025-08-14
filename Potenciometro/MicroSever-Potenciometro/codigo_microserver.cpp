#include <Servo.h>

Servo servo1; //Cria um novo objeto

int PotenciometroPino = A1;//Conecta potenciometro na porta lógica

int valorPotenciometro = 0; //valor lido no pino A1

void setup(){
  servo1.attach(9); //conecta o objeto servo1 ao pino 9 
}
void loop(){
  //Lê
  valorPotenciometro = analogRead(PotenciometroPino);
  
  //um valor analógico do potenciometro de 0 a 255
  //mapeia
  valorPotenciometro = map(valorPotenciometro, 0, 1023, 0, 179);
  
  //o valor lido entre 0 a 1023 para um valor entre 0 e 180
  //enviar o sinal para o servo se posicionar
  servo1.write(valorPotenciometro);
  
  //aguarda o movimento do servo
  delay(15);
}
