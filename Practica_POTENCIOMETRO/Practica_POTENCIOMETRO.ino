int Poten = 0; // potenciometro = A0
int LED = 6; // PWM = 6 
int valor; // Tiene el valor del potenciometro

void setup(){
  pinMode(LED,OUTPUT); 
  
  }

void loop(){
//EL POTENCIOMETRO VA DESDE 0 -> min ; HASTA 1023 -> max

  valor = analogRead(Poten)/4; //Entre 4 porque quiero que su valor llegue a 255
  
  analogWrite(LED,valor); 
  }  
