int led=13;
int led1=12;
int led2=8;
int led3=9;
int ldr=5;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
    int a=analogRead(A0);
     Serial.println(a);
     
     
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(100);
  {
  digitalWrite(led1,HIGH);
 delay(100);
 digitalWrite(led1,LOW);
  delay(100);
  }
  {
 
 digitalWrite(led2,HIGH);
 delay(100);
 digitalWrite(led2,LOW);
 delay(100);
}
{
 
 digitalWrite(led3,HIGH);
 delay(100);
 digitalWrite(led3,LOW);
 delay(100);
}
  {
 
 digitalWrite(led2,HIGH);
 delay(100);
 digitalWrite(led2,LOW);
 delay(100);
}
  {
  digitalWrite(led1,HIGH);
 delay(100);
 digitalWrite(led1,LOW);
  delay(100);
  }
}
