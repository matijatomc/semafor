int LedC = 6;
int LedZu = 7;
int LedZe = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(LedC, OUTPUT);
  pinMode(LedZu, OUTPUT);
  pinMode(LedZe, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LedC, HIGH);
  delay(2000);                     
  digitalWrite(LedZu, HIGH);   
  delay(2000); 
  digitalWrite(LedC, LOW);
  digitalWrite(LedZu, LOW);
  digitalWrite(LedZe, HIGH); 
  delay(2000);
  digitalWrite(LedZu, HIGH);
  digitalWrite(LedZe, LOW);
  delay(2000);
  digitalWrite(LedZu, LOW);               
}
