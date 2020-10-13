int ir1=A0;
int ir2=A1;
int count=0;
void setup() {
        Serial.begin(9600);
        pinMode(ir1,INPUT);
        pinMode(ir2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int detect1=digitalRead(A0);
  int detect2=digitalRead(A1);
  
  if (detect1==LOW) 
      {
          
           
              count=count+1;
           
      }
   else if(detect2==LOW)
      {
            count=count-1;
          
      }
  
 Serial.print("Present=");
  Serial.println(count);
  delay(3000);
}
