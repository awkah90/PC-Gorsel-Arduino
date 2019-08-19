// NOT Tested !!!!!!!!!!!!!!!!
// Arduino Pc Joystick Lib.input Maybe...
// Now Serial Print.
//Arduinodan serial print komutu ile inputlara bakmak şu an için bu şekilde ileride değişebilir.
//Belki Arduinonun joystick kütüphanesini kullanarak bilgisayara oyun çubuğu olarak eklenip python veya farklı dillerde makineyi
//Görsel olarak uygulamada kullanılabilir.
//
// Kemal
// 19.08.2019 
//------------------------------------------------------------
#define S1 23
#define S2 25
#define S3 27
#define S4 29
#define S5 31
#define S6 33
#define S7 35
#define S8 37
#define S10 39
#define B34 41
#define S13 43
#define B37 45
#define S20 47

#define X1 49
#define X2 51
#define X3 53 

#define B20 22
#define B23 24 
#define B25 26
#define B30 28
#define B31 30
#define B33 32
#define B34 34
#define B45 36
#define B44 38

#define B61 40
#define B63 42
#define B26 44
#define B27 46
#define B28 48
#define B29 50
#define R1 52

void setup()
{
  for (int i = 23; i >= 52; i++)
  {
    pinMode(i, INPUT);
  }
  Serial.begin(115200);
}

void loop()
{
  Serial.print('$');
  Serial.print(digitalRead(S1));
  Serial.print(',');
  Serial.print(digitalRead(S2));
  Serial.print(',');
  Serial.print(digitalRead(S3));
  Serial.print(',');
  Serial.print(digitalRead(S4));
  Serial.print(',');
  Serial.print(digitalRead(S5));
  Serial.print(',');
  Serial.print(digitalRead(S6));
  Serial.print(',');
  Serial.print(digitalRead(S7));
  Serial.print(',');
  Serial.print(digitalRead(S8));
  Serial.print(',');
  Serial.print(digitalRead(S10));
  Serial.print(',');
  Serial.print(digitalRead(B34));
  Serial.print(',');
  Serial.print(digitalRead(S13));
  Serial.print(',');
  Serial.print(digitalRead(B37));
  Serial.print(',');
  Serial.print(digitalRead(S20));
  Serial.print(',');
  Serial.print(digitalRead(X1));
  Serial.print(',');
  Serial.print(digitalRead(X2));
  Serial.print(',');
  Serial.print(digitalRead(X3));
  Serial.print(',');
  Serial.print(digitalRead(B20));
  Serial.print(',');
  Serial.print(digitalRead(B23));
  Serial.print(',');
  Serial.print(digitalRead(B25));
  Serial.print(',');
  Serial.print(digitalRead(B30));
  Serial.print(',');
  Serial.print(digitalRead(B31));
  Serial.print(',');
  Serial.print(digitalRead(B34));
  Serial.print(',');
  Serial.print(digitalRead(B45));
  Serial.print(',');
  Serial.print(digitalRead(B44));
  Serial.print(',');
  Serial.print(digitalRead(B61));
  Serial.print(',');
  Serial.print(digitalRead(B63));
  Serial.print(',');
  Serial.print(digitalRead(B26));
  Serial.print(',');
  Serial.print(digitalRead(B27));
  Serial.print(',');
  Serial.print(digitalRead(B28));
  Serial.print(',');
  Serial.print(digitalRead(B29));
  Serial.print(',');
  Serial.print(digitalRead(R1));
  Serial.print('#');
  delay(50);
}
