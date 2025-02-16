#include <FastLED.h>
#include <stdlib.h>
/*CRGB 列の番号[LEDの総数]*/
CRGB led2[4];
CRGB led3[8];
CRGB led4[12];
CRGB led5[8];
unsigned long time;
 
void setup() { 
  Serial.begin(9600);
  /*FastLED.addLeds<種類,ポート番号,色の形式RGBとか>(列の番号,LEDの総数);*/
  FastLED.addLeds<WS2812,2>(led2,4);
  FastLED.addLeds<WS2812,3>(led3,8);
  FastLED.addLeds<WS2812,4>(led4,12);
  FastLED.addLeds<WS2812,5>(led5,8);}
 
void loop(){
 int ledno,pattern,hue,lightpower,saturation,value,times; 
 times=1;

 for(;times<5000;){
   for(hue = 0; hue < 255; hue=hue+20) {
     for(ledno = 0; ledno <4 ; ledno++) {
       led2 [ledno]= CHSV(hue,255,255);
       FastLED.show();
       times=millis();}
     for(ledno = 0; ledno <8 ; ledno++) {
       led3 [ledno]= CHSV(hue+30,255,255);
       FastLED.show();}
     for(ledno = 0; ledno <12 ; ledno++) {
       led4 [ledno]= CHSV(hue+60,255,255);
       FastLED.show();}
     for(ledno = 0; ledno <8 ; ledno++) {  
       led5 [ledno]= CHSV(hue+90,255,255);
       FastLED.show();}
     FastLED.setBrightness(255);}}
         
 for(;times<10000;){
   for(hue = 25.5; hue < 224.5; hue=hue+25.5) {
     Serial.println(hue);
     for(lightpower=0;lightpower<255;lightpower=lightpower+25){
       for(ledno = 0; ledno <4 ; ledno++) {
         led2 [ledno]= CHSV(hue,255,lightpower);
         Serial.println(times);
         FastLED.show();
         times=millis();}
       for(ledno = 0; ledno <8 ; ledno++) {
         led3 [ledno]= CHSV(hue,255,lightpower);
         FastLED.show();}
       for(ledno = 0; ledno <12 ; ledno++) {
         led4 [ledno]= CHSV(hue,255,lightpower);
         FastLED.show();}
       for(ledno = 0; ledno <8 ; ledno++) {  
         led5 [ledno]= CHSV(hue,255,lightpower);
         FastLED.show();}
       FastLED.setBrightness(255);}
     for(lightpower=255;lightpower>0;lightpower=lightpower-25){
       for(ledno = 0; ledno <4 ; ledno++) {
         led2 [ledno]= CHSV(hue,255,lightpower);
         FastLED.show();}
       for(ledno = 0; ledno <8 ; ledno++) {
         led3 [ledno]= CHSV(hue,255,lightpower);
         FastLED.show();}
       for(ledno = 0; ledno <12 ; ledno++) {
         led4 [ledno]= CHSV(hue,255,lightpower);
         FastLED.show();}
       for(ledno = 0; ledno <8 ; ledno++) {  
         led5 [ledno]= CHSV(hue,255,lightpower);
         FastLED.show();}
       FastLED.setBrightness(255);}}}
       
  for(;times<15000;){
    FastLED.setBrightness(255);
    for(hue = 25.5; hue < 224.5; hue=hue+25.5){
      for(ledno = 0; ledno <4; ledno++){
        led2 [ledno]= CRGB(0,0,0);
        FastLED.show();
        times=millis();}
      for(ledno = 0; ledno <8; ledno++){
        led3 [ledno]= CRGB(0,0,0);
        FastLED.show();}
      for(ledno = 0; ledno <12; ledno++){
        led4 [ledno]= CRGB(0,0,0);
        FastLED.show();}
      for(ledno = 0; ledno <8; ledno++){  
        led5 [ledno]= CRGB(0,0,0);
        FastLED.show();}
      led3[0]=CHSV(hue,255,255);FastLED.show();
      led3[1]=CHSV(hue,255,255);FastLED.show();
      led3[6]=CHSV(hue,255,255);FastLED.show();
      led3[7]=CHSV(hue,255,255);FastLED.show();
      delay(100);
      led4[0]=CHSV(hue,255,255);FastLED.show();
      led4[1]=CHSV(hue,255,255);FastLED.show();
      led4[2]=CHSV(hue,255,255);FastLED.show();
      led4[3]=CHSV(hue,255,255);FastLED.show();
      led4[8]=CHSV(hue,255,255);FastLED.show();
      led4[9]=CHSV(hue,255,255);FastLED.show();
      led4[10]=CHSV(hue,255,255);FastLED.show();
      led4[11]=CHSV(hue,255,255);FastLED.show();
      delay(100);
      led5[0]=CHSV(hue,255,255);FastLED.show();
      led5[1]=CHSV(hue,255,255);FastLED.show();
      led5[6]=CHSV(hue,255,255);FastLED.show();
      led5[7]=CHSV(hue,255,255);FastLED.show();
      delay(100);
      led5[2]=CHSV(hue,255,255);FastLED.show();
      led5[3]=CHSV(hue,255,255);FastLED.show();
      led5[4]=CHSV(hue,255,255);FastLED.show();
      led5[5]=CHSV(hue,255,255);FastLED.show();
      led3[2]=CRGB(0,0,0);FastLED.show();
      led3[3]=CRGB(0,0,0);FastLED.show();
      led3[4]=CRGB(0,0,0);FastLED.show();
      led3[5]=CRGB(0,0,0);FastLED.show();
      delay(100);
      led4[4]=CHSV(hue,255,255);FastLED.show();
      led4[5]=CHSV(hue,255,255);FastLED.show();
      led4[6]=CHSV(hue,255,255);FastLED.show();
      led4[7]=CHSV(hue,255,255);FastLED.show();
      led2[0]=CRGB(0,0,0);FastLED.show();
      led2[1]=CRGB(0,0,0);FastLED.show();
      led2[2]=CRGB(0,0,0);FastLED.show();
      led2[3]=CRGB(0,0,0);FastLED.show();
      delay(100);    
      led3[2]=CHSV(hue,255,255);FastLED.show();
      led3[3]=CHSV(hue,255,255);FastLED.show();
      led3[4]=CHSV(hue,255,255);FastLED.show();
      led3[5]=CHSV(hue,255,255);FastLED.show();
      led3[0]=CRGB(0,0,0);FastLED.show();
      led3[1]=CRGB(0,0,0);FastLED.show();
      led3[6]=CRGB(0,0,0);FastLED.show();
      led3[7]=CRGB(0,0,0);FastLED.show();
      delay(100);   
      led2[0]=CHSV(hue,255,255);FastLED.show();
      led2[1]=CHSV(hue,255,255);FastLED.show();
      led2[2]=CHSV(hue,255,255);FastLED.show();
      led2[3]=CHSV(hue,255,255);FastLED.show();
      led4[0]=CRGB(0,0,0);FastLED.show();
      led4[1]=CRGB(0,0,0);FastLED.show();
      led4[2]=CRGB(0,0,0);FastLED.show();
      led4[3]=CRGB(0,0,0);FastLED.show();
      led4[8]=CRGB(0,0,0);FastLED.show();
      led4[9]=CRGB(0,0,0);FastLED.show();
      led4[10]=CRGB(0,0,0);FastLED.show();
      led4[11]=CRGB(0,0,0);FastLED.show();
      delay(100);
      led5[0]=CRGB(0,0,0);FastLED.show();
      led5[1]=CRGB(0,0,0);FastLED.show();
      led5[6]=CRGB(0,0,0);FastLED.show();
      led5[7]=CRGB(0,0,0);FastLED.show();
      delay(100);
      led5[2]=CRGB(0,0,0);FastLED.show();
      led5[3]=CRGB(0,0,0);FastLED.show();
      led5[4]=CRGB(0,0,0);FastLED.show();
      led5[5]=CRGB(0,0,0);FastLED.show();
      delay(100);
      led4[4]=CRGB(0,0,0);FastLED.show();
      led4[5]=CRGB(0,0,0);FastLED.show();
      led4[6]=CRGB(0,0,0);FastLED.show();
      led4[7]=CRGB(0,0,0);FastLED.show();
      delay(100); 
      led3[2]=CRGB(0,0,0);FastLED.show();
      led3[3]=CRGB(0,0,0);FastLED.show();
      led3[4]=CRGB(0,0,0);FastLED.show();
      led3[5]=CRGB(0,0,0);FastLED.show();
      delay(0);      
      }}

  for(;times<20000;){
    for(hue = 25.5; hue < 224.5; hue=hue+25.5){
        ledno=random(2);
        led2 [ledno*2]= CHSV(hue,255,255);
        led2 [ledno*2+1]=CHSV(hue,255,255);
        FastLED.show();
        times=millis();
        ledno=random(4);
        led3 [ledno*2]= CHSV(hue,255,255);
        led3 [ledno*2+1]= CHSV(hue,255,255);
        FastLED.show();
        ledno=random(6);
        led4 [ledno*2]= CHSV(hue,255,255);
        led4 [ledno*2+1]=CHSV(hue,255,255);
        FastLED.show();
        ledno=random(4);
        led5 [ledno*2]= CHSV(hue,255,255);
        led5 [ledno*2+1]=CHSV(hue,255,255);
        FastLED.show();
        delay(50);}}
        
      
/*for(pattern=0;pattern<0;pattern++){
    for(value=0;value<255;value=value+25){
       for(ledno = 0; ledno <4 ; ledno++) {
         led2 [ledno]= CHSV(50,255,value);
         FastLED.show();}
       for(ledno = 0; ledno <8 ; ledno++) {
         led3 [ledno]= CHSV(100,255,value);
         FastLED.show();}
       for(ledno = 0; ledno <12 ; ledno++) {
         led4 [ledno]= CHSV(150,255,value);
         FastLED.show();}
       for(ledno = 0; ledno <8 ; ledno++) {  
         led5 [ledno]= CHSV(200,255,value);
         FastLED.show();}
       FastLED.setBrightness(255);}
     for(value=255;value>1;value=value-25){
       for(ledno = 0; ledno <4 ; ledno++) {
         led2 [ledno]= CHSV(50,255,value);
         FastLED.show();}
       for(ledno = 0; ledno <8 ; ledno++) {
         led3 [ledno]= CHSV(100,255,value);
         FastLED.show();}
       for(ledno = 0; ledno <12 ; ledno++) {
         led4 [ledno]= CHSV(150,255,value);
         FastLED.show();}
       for(ledno = 0; ledno <8 ; ledno++) {  
         led5 [ledno]= CHSV(200,255,value);
         FastLED.show();}
       FastLED.setBrightness(255);}}*/

  /*for(pattern=0;pattern<10;pattern++){
   for(hue = 60; hue < 255; hue=hue+15) {
     for(ledno = 0; ledno <4 ; ledno++) {
       led2 [ledno]= CHSV(hue,255,255);
       FastLED.show();}
     for(ledno = 0; ledno <8 ; ledno++) {
       led3 [ledno]= CHSV(hue+30,255,255);
       FastLED.show();}
     for(ledno = 0; ledno <12 ; ledno++) {
       led4 [ledno]= CHSV(hue+60,255,255);
       FastLED.show();}
     for(ledno = 0; ledno <8 ; ledno++) {  
       led5 [ledno]= CHSV(hue+90,255,255);
       FastLED.show();}
     FastLED.setBrightness(255);}
   for(hue = 255; hue > 60; hue=hue-15) {
     for(ledno = 0; ledno <4 ; ledno++) {
       led2 [ledno]= CHSV(hue,255,255);
       FastLED.show();}
     for(ledno = 0; ledno <8 ; ledno++) {
       led3 [ledno]= CHSV(hue+30,255,255);
       FastLED.show();}
     for(ledno = 0; ledno <12 ; ledno++) {
       led4 [ledno]= CHSV(hue+60,255,255);
       FastLED.show();}
     for(ledno = 0; ledno <8 ; ledno++) {  
       led5 [ledno]= CHSV(hue+90,255,255);
       FastLED.show();}
     FastLED.setBrightness(255);}}
     */
       }       
