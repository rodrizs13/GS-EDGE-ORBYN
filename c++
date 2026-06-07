#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22
#define BUZZER 8

DHT dht(DHTPIN,DHTTYPE);
LiquidCrystal_I2C lcd(0x27,16,2);

void setup(){
dht.begin();
pinMode(BUZZER,OUTPUT);

lcd.init();
lcd.backlight();

lcd.setCursor(0,0);
lcd.print("ORBYN");

lcd.setCursor(0,1);
lcd.print("Iniciando...");

delay(2000);
}

void loop(){

float temp=dht.readTemperature();
float umid=dht.readHumidity();

if(isnan(temp)||isnan(umid)){
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Erro Sensor");
noTone(BUZZER);
delay(2000);
return;
}

lcd.clear();

if(umid<40&&temp>30){

lcd.setCursor(0,0);
lcd.print("ORBYN AGRO");

lcd.setCursor(0,1);
lcd.print("IRRIGAR AREA");

tone(BUZZER,1000);
delay(500);
noTone(BUZZER);

}
else if(temp>32){

lcd.setCursor(0,0);
lcd.print("ORBYN URBANO");

lcd.setCursor(0,1);
lcd.print("ILHA CALOR");

tone(BUZZER,2000);
delay(1000);
noTone(BUZZER);

}
else{

lcd.setCursor(0,0);
lcd.print("ORBYN ANALISE");

lcd.setCursor(0,1);
lcd.print("AREA ESTAVEL");

noTone(BUZZER);

}

delay(2000);
}
