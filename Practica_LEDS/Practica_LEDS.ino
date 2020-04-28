//Práctica semaforo
const int LED1 = 12; // verde(2 s)
const int LED2 = 8; // naranja(1 s)
const int LED3 = 7; // rojo(2 s)

void setup() {
 pinMode(LED1, OUTPUT);
 pinMode(LED2, OUTPUT);
 pinMode(LED3, OUTPUT);
}

void loop() {
  //LED VERDE
digitalWrite(LED1, HIGH); 
delay(2000);
digitalWrite(LED1, LOW);

  //LED NARANJA
digitalWrite(LED2, HIGH);
delay(1000);
digitalWrite(LED2, LOW);

  //LED ROJO 
digitalWrite(LED3, HIGH);
delay(2000);
digitalWrite(LED3, LOW);
}
