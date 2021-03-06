// command number of flashes with serial commands
// original sketch by Nicu FLORICA (niq_ro) - Craiova, 21.03.2018
// http://www.tehnic.go.ro
// http://nicuflorica.blogspot.ro/
// http://arduinotehniq.blogspot.com/
// http://www.arduinotehniq.com
// ver.0.a - just control number of flashes
// ver.0.b - change small pause between flashes
// ver.0.c - change big pause 
// ver.0.d - change # with @
// ver.1.0 - store parameters in internal EEPROM memmory - http://tronixstuff.com/2011/03/16/tutorial-your-arduinos-inbuilt-eeprom/
// ver.1.a - see all commmands on serial
// ver.1.a.1 - use x instead @

#include <EEPROM.h> 
#define adrnr 100  // adress for store number of flashes
#define adrtp 101  // adress for store time for on/off led
#define adrpz 102  // adress for store time between flashes

char inchar; // 
#define led 13

byte flasuri;  // number of flashes
int pauza;     // time for on/off led
int pauzamare; // time between flashes

void setup()
{
Serial.begin(9600);
pinMode(led, OUTPUT);  // pin is an output
digitalWrite(led, LOW); // output is in in LOW (0)

Serial.println("==============================================");  // 
Serial.println("test serial control for flash light");  // 
Serial.println("original program (sketch) by Nicu FLORICA (niq_ro)");  // 
Serial.println("==============================================");  // 
Serial.println("xn1..n4 - number of flashes");  // 
Serial.println("xt1...t5 - time (x100ms) between flashes");  // 
Serial.println("xp1...p5 - time (x1000ms) for pause ");  // 
Serial.println("==============================================");  // 

/*
// jus for initial initialing
EEPROM.write(adrnr, 1);
EEPROM.write(adrtp, 1);
EEPROM.write(adrpz, 1);
*/

flasuri = EEPROM.read(adrnr);
pauza = 50* EEPROM.read(adrtp);
pauzamare = 1000*EEPROM.read(adrpz);

Serial.print("number of flashes is now: ");
  Serial.println(flasuri);
Serial.print("time between flash(es): ");
  Serial.print(pauza);
   Serial.println("ms");
Serial.print("time for pause: ");
Serial.print(pauzamare);
  Serial.println("ms");
Serial.println("=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=");  //   

}
 

void loop()
{  //0

  if(Serial.available() >0)
    {  //1 
    inchar=Serial.read(); 
   // Serial.print(inchar);
    if (inchar=='x')
    {  // 2
      delay(10);
 
     inchar=Serial.read(); 
     //Serial.print(inchar);
     if (inchar=='n')
      {  //3.1
        delay(10);
        inchar=Serial.read();
      //  Serial.println(inchar);
        if (inchar=='0')
        { 
      //   Serial.println("no change number of flashes");
        } 
        else if (inchar == '1')
        {
          flasuri = 1;
          EEPROM.write(adrnr, flasuri);
        }
        else if (inchar == '2')
        {
          flasuri = 2;
          EEPROM.write(adrnr, flasuri);
        }
        else if (inchar == '3')
        {
          flasuri = 3;
          EEPROM.write(adrnr, flasuri);
        }
        else if (inchar == '4')
        {
          flasuri = 4;
          EEPROM.write(adrnr, flasuri);
        }
        else if (inchar == '5')
        {
          flasuri = 5;
          EEPROM.write(adrnr, flasuri);
        }
        delay(10);
         } //3.1


if (inchar=='t')
      {  //3.2
        delay(10);
        inchar=Serial.read();
        if (inchar=='0')
        { 
    //     Serial.println("no change number of flashes");
        } 
        else if (inchar == '1')
        {
          pauza = 50;
          EEPROM.write(adrtp, pauza/50);
        }
        else if (inchar == '2')
        {
          pauza = 100;
          EEPROM.write(adrtp, pauza/50);
        }
        else if (inchar == '3')
        {
          pauza = 150;
          EEPROM.write(adrtp, pauza/50);
        }
        else if (inchar == '4')
        {
          pauza = 200;
          EEPROM.write(adrtp, pauza/50);
        }
        else if (inchar == '5')
        {
          pauza = 250;
          EEPROM.write(adrtp, pauza/50);
        }
        delay(10);
         } //3.2

if (inchar=='p')
      {  //3.3
        delay(10);
        inchar=Serial.read();
        if (inchar=='0')
        { 
     //    Serial.println("no change number of flashes");
        } 
        else if (inchar == '1')
        {
          pauzamare = 1000;
          EEPROM.write(adrpz, pauzamare/1000);
        }
        else if (inchar == '2')
        {
          pauzamare = 2000;
          EEPROM.write(adrpz, pauzamare/1000);
        }
        else if (inchar == '3')
        {
          pauzamare = 3000;
          EEPROM.write(adrpz, pauzamare/1000);
        }
        else if (inchar == '4')
        {
          pauzamare = 4000;
          EEPROM.write(adrpz, pauzamare/1000);
        }
        else if (inchar == '5')
        {
          pauzamare = 5000;
          EEPROM.write(adrpz, pauzamare/1000);
        }
        delay(10);
         } //3.3
/*         
Serial.println("@n1..@n4 - number of flashes");  // 
Serial.println("@t1..@t5 - time (x100ms) between flashes");  // 
Serial.println("@p1..@p5 - time (x1000ms) for pause ");  // 
Serial.println("==============================================");  // 
Serial.print("number of flashes is now: ");
  Serial.println(flasuri);
Serial.print("time between flash(es): ");
  Serial.print(pauza);
   Serial.println("ms");
Serial.print("time for pause: ");
Serial.print(pauzamare);
  Serial.println("ms");
  Serial.println("------------------------"); // 
 // delay(1000);
 */
  } // 2
  }  //1

 for (byte numarare = 0; numarare < flasuri; numarare++) 
 {
 digitalWrite(led, HIGH);
 delay(pauza);
 digitalWrite(led, LOW);
 delay(pauza);
 }
 digitalWrite(led, LOW);
 delay(pauzamare-pauza);
  
} //0

