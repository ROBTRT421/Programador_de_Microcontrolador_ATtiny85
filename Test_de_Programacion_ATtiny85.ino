void setup() 
{
  pinMode(4, OUTPUT); // El LED está conectado al Pin 4 del ATtiny85 con una resistencia de 220 Ohm
}

void loop() 
{
  digitalWrite(4, HIGH); // Enciende el LED/Evia Voltaje al Pin 4(LED ON)
  delay(1000);           // Espera 1 segundo/pausa de 1seg (LED permanece encendido)             
  digitalWrite(4, LOW);  // Apaga el LED/Apaga el voltaje(LED OFF)
  delay(1000);           // Espera otro segundo/Otra pausa de 1seg antes de repetir
}