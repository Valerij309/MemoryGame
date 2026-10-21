#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


Adafruit_SSD1306 display(128, 64, &Wire, -1);
int squ[] = {0,0,0,0,0};
int leds[] = {7,6,5,4,3};
int buttons[] = {13,12,11,10,9};

int value = 0;

int level = 1;
int player_answer = 0;

void Random(){
    squ[level - 1] = random(1,6);
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
  for(int i = 0; i < 5; i++){
  pinMode(leds[i], OUTPUT);
  }
  
  for(int i = 0; i < 5; i++){
  pinMode(buttons[i], INPUT_PULLUP);
  }

  randomSeed(analogRead(A0) + analogRead(A1));
  Random();
}

void loop() {
   
}
