int ledverde = 4;
int boton = 16;
int var;

void setup() {
  pinMode(ledverde, OUTPUT);
  pinMode(boton, INPUT);
  Serial.begin(115200);

}

void loop() {
  var = digitalRead(boton);
  digitalWrite(ledverde, var);
  Serial.print(var);
  delay(500);

}
