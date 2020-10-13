
int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;
void setup() {
   Serial.begin(9600);
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
  pinMode(A0,INPUT);
}
void loop() {
  int a=analogRead(A0);
  Serial.println(a);
  if (a<300){
  RGB_color(255, 0, 0); // Red
  delay(100);
  RGB_color(0, 255, 0); // Green
  delay(100);
  RGB_color(0, 0, 255); // Blue
  delay(100);
  RGB_color(255, 255, 125); // Raspberry
  delay(100);
  RGB_color(0, 255, 255); // Cyan
  delay(100);
  RGB_color(255, 0, 255); // Magenta
  delay(100);
  RGB_color(255, 255, 0); // Yellow
  delay(100);
  RGB_color(255, 255, 255); // White
  delay(100);
  }
  else if(a>250)
  
  {
  RGB_color(0, 0, 0); 
  delay(100);
  RGB_color(0, 0, 0);  
  delay(100);
  RGB_color(0, 0, 0);  
  delay(100);
  RGB_color(0, 0, 0);  
  delay(100);
  RGB_color(0, 0, 0);  
  delay(100);
  RGB_color(0, 0, 0);  
  delay(100);
  RGB_color(0, 0, 0);  
  delay(100);
  RGB_color(0, 0, 0);  
  delay(100);
  }
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
 
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
    }
