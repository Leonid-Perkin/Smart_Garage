#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,16,2);
const int buttonPin = 2;
const int buttonPin1 = 3;
const int buttonPin2 = 4;
const int buttonPin3 = 5;
const int buttonPin4 = 6;
const int buttonPin5 = 7;
int buttonState = 0;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
String str = "smart garage";
void setup()
{
  lcd.init();                     
  lcd.backlight();
  lcd.print(str);
  lcd.setCursor(0, 1);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int buf = Serial.available();
  if (buf){
    char cBuf = Serial.read();
    switch(cBuf){
      case 'A':{ 
        lcd.print("alarm enabled");
        delay(2000);
        lcd.clear();
      lcd.print(str);
      lcd.setCursor(0, 1);
      }
        break;
        case 'B':{ 
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("alarm disabled");
          delay(2000);
          lcd.clear();
          lcd.print(str);
          lcd.setCursor(0, 1);
        
        }
        break;
        case 'С':{ 
          lcd.print("Led1_on");
          delay(2000);
          lcd.clear();
          lcd.print(str);
          lcd.setCursor(0, 1);
        }
          break;
        case 'D':{ 
          lcd.print("Led1_off");
          delay(2000);
          lcd.clear();
          lcd.print(str);
          lcd.setCursor(0, 1);
        }
          break;
          case 'I':{ 
          lcd.print("Led2_on");
          delay(2000);
          lcd.clear();
          lcd.print(str);
          lcd.setCursor(0, 1);
        }
        break;
        case 'F':{ 
          lcd.print("Led2_off");
          delay(2000);
          lcd.clear();
          lcd.print(str);
          lcd.setCursor(0, 1);
        }
          break;
      case 'K': {
        lcd.clear();
        lcd.print("Software version");
        lcd.setCursor(0, 1);
      lcd.print("10.5 stable");
      delay(3000);
        lcd.clear();
      lcd.print(str);
      lcd.setCursor(0, 1);
      }
      case 'W': {
        lcd.clear();
        lcd.backlight();
        lcd.print(str);
        lcd.setCursor(0, 1);
      }
        break;
      case 'E': {
        lcd.clear();
        lcd.noBacklight();
        lcd.setCursor(0, 1);
      }
        break;
        default:;
    }
  }
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    delay(200);
    Serial.print('a');
  }
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState1 == HIGH) {
    delay(200);
    Serial.print('b');
  }
  buttonState2 = digitalRead(buttonPin2);
  if (buttonState2 == HIGH) {
    delay(200);
    Serial.print('c');
  }
  buttonState3 = digitalRead(buttonPin3);
  if (buttonState3 == HIGH) {
    delay(200);
    Serial.print('d');
  }
  buttonState4 = digitalRead(buttonPin4);
  if (buttonState4 == HIGH) {
    delay(200);
    Serial.print('i');
  }
  buttonState5 = digitalRead(buttonPin5);
  if (buttonState5 == HIGH) {
    delay(200);
    Serial.print('f');
  }
}
