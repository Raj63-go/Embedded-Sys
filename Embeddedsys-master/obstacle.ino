int ledr=A1;
int ledg=A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,INPUT);
  pinMode(ledr,INPUT);
  pinMode(ledg,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
int detect=digitalRead(8);
analogWrite(ledg,255);
if (detect==LOW){
  Serial.println("obstacle");
    analogWrite(ledr,255);
  analogWrite(ledg,0);
}else{
  Serial.println("clear");
     analogWrite(ledg,255);
     analogWrite(ledr,0);
  }
  delay(300);
}
