#include <SoftwareSerial.h>
int aux = 0;
// Definição dos pinos para comunicação com o módulo Bluetooth
int bluetoothTx = 9;  // Pino TX do módulo Bluetooth conectado ao RX do Arduino
int bluetoothRx = 8;  // Pino RX do módulo Bluetooth conectado ao TX do Arduino

// Inicialização do objeto para comunicação Bluetooth
SoftwareSerial bluetooth(bluetoothRx, bluetoothTx);


void setup() 
{
  
  // Inicialização da comunicação serial com o módulo Bluetooth
  bluetooth.begin(9600);

  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);


}


void loop() 
{
   if(bluetooth.available() > 0)
   {
	aux = bluetooth.read();
    Serial.println(aux);
    if (aux == 119 || aux == 87) {
      digitalWrite(3, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(10, HIGH);
    }
    if (aux == 115 || aux == 83) {
      digitalWrite(3, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(10, LOW);
    }
    if (aux == 100 || aux == 68) {
      digitalWrite(3, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(10, HIGH);
    }
    if (aux == 97 || aux == 65) {
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(10, HIGH);
    }
    if (aux == 112 || aux == 80) {
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(10, HIGH);
    }
    if (aux == 112 || aux == 80) {
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(10, HIGH);
    }
    if (aux == 120 || aux == 88) {
      digitalWrite(3, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(10, HIGH);
    }
    if (aux == 120 || aux == 88) {
      digitalWrite(3, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(10, HIGH);
    }
    if (aux == 122 || aux == 90) {
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(10, LOW);
    }
}}
