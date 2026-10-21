#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


Adafruit_SSD1306 display(128, 64, &Wire, -1);
int squ[] = {0,0,0,0,0};

int led1 = 7;
int led2 = 6;
int led3 = 5;
int led4 = 4;
int led5 = 3;

int button1 = 9;
int button2 = 10;
int button3 = 11;
int button4 = 12;
int button5 = 13;

int value = 0;


int player_answer = 0;

void Random(){
  squ[random(5)] = random(3);
  for(int i = 0; i < 5; i++){
  Serial.println(squ[i]);
  }
}
void button_main(){
  
}
void setup() {
  Serial.begin(9600);

  
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while (true); 
  }
  display.clearDisplay();
  display.display();
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);

  randomSeed(analogRead(A0) + analogRead(A1));
  Random();
}

void loop() {
   
}
