const int BUTTON = 7;
const int BUTTON1 = 8;
const int LED = 13;
const int buzzer=11;
int BUTTONstate = 0;
int BUTTON1state = 0;
const int buzzer1=2;

void setup()
{
  pinMode(BUTTON, INPUT);
  pinMode(BUTTON1, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer1, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(buzzer1, LOW);
  BUTTONstate = digitalRead(BUTTON);
  BUTTON1state = digitalRead(BUTTON1);
  if (BUTTONstate == HIGH)
  {
    digitalWrite(LED, HIGH);
    Serial.print(101);
  
     // turn the LED on (HIGH is the voltage level)               
    //digitalWrite(BUTTON, LOW);
    digitalWrite(LED, LOW);
    delay(50);
    
  } 
  if(BUTTON1state == HIGH){
    digitalWrite(buzzer1, HIGH);
    delay(2000);
    digitalWrite(buzzer1, LOW);
  }
  else{
    digitalWrite(LED, LOW);
    //Serial.print(BUTTONstate);
  }
  delay(200);

}