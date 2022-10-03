int X = A0;
int Y = A3;

int valX;
int valY;

int buttonPin = 7;
int buzzPin = 8;
int buttonVal;

int delay = 100;

void setup() {

  Serial.begin(9600);

  pinMode(X, INPUT);
  pinMode(Y, INPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  pinMode(buzzPin, OUTPUT);

}

void loop() {

  valX = analogRead(X);
  valY = analogRead(Y);
  buttonVal = digitalRead(buttonPin);
  Serial.print("X Valor = ");
  Serial.print(X);
  Serial.print("Y Valor = ");
  Serial.print(Y);
  Serial.print("Boton valor = ");
  Serial.print(buttonVal);
  delay(delay);
}