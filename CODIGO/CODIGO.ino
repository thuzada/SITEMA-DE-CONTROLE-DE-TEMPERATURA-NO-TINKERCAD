const int Temp = A0;
const int Luz = A1;
const int Verde = 2;
const int Amarelo = 3;
const int Vermelho = 4;
const int Azul = 5;
const int Buzzer = 6;
const int Btn = 7;

bool Ligado = false;

void setup() {
  pinMode(Verde, OUTPUT);
  pinMode(Amarelo, OUTPUT);
  pinMode(Vermelho, OUTPUT);
  pinMode(Azul, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(Btn, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(Btn) == LOW) {
    Ligado = !Ligado;
    digitalWrite(Azul, LOW); 
    delay(50);
  }

  int valTemp = analogRead(Temp);
  float temp = map(valTemp, 0, 1023, 0, 50);

  int valLuz = analogRead(Luz);
  float potAquec = map(valLuz, 0, 1023, 0, 100);

  if (Ligado) {
    digitalWrite(Azul, HIGH);
  } else {
    digitalWrite(Azul, LOW);
  }

  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" °C, Pot: ");
  Serial.print(potAquec);
  Serial.println("%");

  if (temp >= 20 && temp <= 30) {
    digitalWrite(Verde, HIGH);
    digitalWrite(Amarelo, LOW);
    digitalWrite(Vermelho, LOW);
    noTone(Buzzer);
  } else if (temp > 30 && temp <= 35) {
    digitalWrite(Verde, LOW);
    digitalWrite(Amarelo, HIGH);
    digitalWrite(Vermelho, LOW);
    noTone(Buzzer);
  } else if (temp > 35) {
    digitalWrite(Verde, LOW);
    digitalWrite(Amarelo, LOW);
    digitalWrite(Vermelho, HIGH);
    tone(Buzzer, 1000);
  } else {
    digitalWrite(Verde, LOW);
    digitalWrite(Amarelo, LOW);
    digitalWrite(Vermelho, LOW);
    noTone(Buzzer);
  }

  delay(1000);
}
