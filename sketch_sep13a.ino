int jRedLed = 12;
int jGreenLed = 13;
int jGreenLed2 = 5;
int jRedLed2 = 6;
int RedLed = 9;
int GreenLed = 11;
int YellowLed = 10;
int Button1 = 1;
int Button2 = 2;
int button1State;
int button2State;



void setup() 
{
    pinMode(jRedLed, OUTPUT);
    pinMode(jRedLed2, OUTPUT);
    pinMode(jGreenLed, OUTPUT);
    pinMode(jGreenLed2, OUTPUT);
    pinMode(RedLed, OUTPUT);
    pinMode(GreenLed, OUTPUT);
    pinMode(YellowLed, OUTPUT);
    pinMode(Button1, INPUT);
    pinMode(Button2, INPUT);
    digitalWrite(jRedLed, LOW);
    digitalWrite(jRedLed2, LOW);
    digitalWrite(jGreenLed, LOW);
    digitalWrite(jGreenLed2, LOW);
    digitalWrite(RedLed, LOW);
    digitalWrite(YellowLed, LOW);
    digitalWrite(GreenLed, HIGH);

}


//green 10000ms, yellow 5000ms, red 10000ms
//kui green ja yellow, ss jalakäija red
//kui red, ss jalakaijal green 
void loop() 
{
    button1State = digitalRead(Button1);
    button2State = digitalRead(Button2);
    if (button1State == HIGH or button2State == HIGH)
    {
      vilkumine();
    }
}


void vilkumine()
{
  yellowLed();
  delay(1000);
  redLed();
  delay(1000);
  greenLed();
}


void greenLed()
{
  digitalWrite(GreenLed, HIGH);
  digitalWrite(jRedLed, HIGH);
  digitalWrite(jRedLed2, HIGH);
  digitalWrite(jGreenLed, LOW);
  digitalWrite(jGreenLed2, LOW);
  digitalWrite(RedLed, LOW);
  digitalWrite(YellowLed, LOW);
}


void yellowLed()
{
  digitalWrite(GreenLed, LOW);
  digitalWrite(jRedLed, HIGH);
  digitalWrite(jRedLed2, HIGH);
  digitalWrite(jGreenLed, LOW);
  digitalWrite(jGreenLed2, LOW);
  digitalWrite(RedLed, LOW);
  digitalWrite(YellowLed, HIGH);
}


void redLed()
{
  digitalWrite(GreenLed, LOW);
  digitalWrite(jRedLed, LOW);
  digitalWrite(jRedLed2, LOW);
  digitalWrite(jGreenLed, HIGH);
  digitalWrite(jGreenLed2, HIGH);
  digitalWrite(RedLed, HIGH);
  digitalWrite(YellowLed, LOW);
}
/*void checkState()
  {
    if (digitalRead(GreenLed) == HIGH or button1State == HIGH or button2State == HIGH)
        {
        digitalWrite(jRedLed, HIGH);
        digitalWrite(jRedLed2, HIGH);
        digitalWrite(jGreenLed, LOW);
        digitalWrite(jGreenLed2, LOW);
        digitalWrite(RedLed, LOW);
        digitalWrite(YellowLed, LOW);
        }
      if (digitalRead(YellowLed) == HIGH or button1State == HIGH or button2State == HIGH)
         {
         digitalWrite(jRedLed, HIGH);
         digitalWrite(jRedLed2, HIGH);
         digitalWrite(jGreenLed, LOW);
         digitalWrite(jGreenLed2, LOW);
         digitalWrite(RedLed, LOW);
         digitalWrite(GreenLed, LOW);
          }
      if (digitalRead(RedLed) == HIGH)
      {
          digitalWrite(jGreenLed2, HIGH);
          digitalWrite(jGreenLed, HIGH);
          digitalWrite(jRedLed, LOW);
          digitalWrite(jRedLed2, LOW);
          digitalWrite(GreenLed, LOW);
          digitalWrite(YellowLed, LOW);
      }
    }*/
