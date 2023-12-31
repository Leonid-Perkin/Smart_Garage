#define _LCD_TYPE 1  // для работы с I2C дисплеями
#include <LCD_1602_RUS_ALL.h>
LCD_1602_RUS lcd(0x3F, 16, 2);
const char buttonPin = 2;
const char buttonPin1 = 3;
const char buttonPin2 = 4;
const char buttonPin3 = 5;
const char buttonPin4 = 6;
const char buttonPin5 = 7;
const char led1 = 9;
const char led2 = 10;
const char led3 = 11;
const char led4 = 12;
char buttonState = 0;
char buttonState1 = 0;
char buttonState2 = 0;
char buttonState3 = 0;
char buttonState4 = 0;
char buttonState5 = 0;
String str = "умный гараж";
void print_text(String s1, String s2) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(s1);
  lcd.setCursor(0, 1);
  lcd.print(s2);
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(str);
}
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.print(str);
  lcd.setCursor(0, 0);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int buf = Serial.available();
  if (buf) {
    char cBuf = Serial.read();
    switch (cBuf) {
      case 'Y': {
          print_text("превышение", "co2");
          digitalWrite(led2, HIGH);
        }
        break;
      case 'Z': {
          print_text("есть", "обновления");
          digitalWrite(led4, HIGH);
        }
        break;
      case 'S': {
          digitalWrite(led4, LOW);
        }
        break;
      case 'W': {
          print_text("норма", "co2");
          digitalWrite(led2, LOW);
        }
        break;
        case 'M': {
          print_text("Alarm", "сигнализация");
          digitalWrite(led3, HIGH);
        }
        break;
      case 'N': {
          digitalWrite(led3, LOW);
        }
        break;
      case 'A': {
          print_text("Сигнализация", "on");
          digitalWrite(led1, HIGH);
        }
        break;
      case 'B': {
          print_text("Сигнализация", "off");
          digitalWrite(led1, LOW);

        }
        break;
      case 'C': {
          print_text("Основной свет", "on");
        }
        break;
      case 'D': {
          print_text("Основной свет", "off");
        }
        break;
      case 'I': {
          print_text("лампа", "on");
        }
        break;
      case 'F': {
          print_text("лампа", "off");
        }
        break;
      case 'G': {
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Прошивка stable");
          lcd.setCursor(0, 1);
          lcd.print("11.3.2");
          delay(2000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Создал");
          lcd.setCursor(0, 1);
          lcd.print("Перкин Леонид");
          delay(2000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print(str);
        }
        break;
      case 'O': {
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.backlight();
          lcd.print(str);
          lcd.setCursor(0, 1);
        }
        break;
      case 'P': {
          lcd.clear();
          lcd.noBacklight();
          lcd.setCursor(0, 1);
        }
        break;
      default:;
    }
  }
  buttonState = digitalRead(buttonPin);
  if (buttonState1 == HIGH) {
    delay(200);
    Serial.print('a');
  }
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState == HIGH) {
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
