int lm35 = A1;

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);


}

float valor;

void loop() {
  // put your main code here, to run repeatedly:

  valor = analogRead (lm35);

  valor - 5.0 * valor / 1023.0;

  Serial.println("Temperatura: " + String(valor));

}
