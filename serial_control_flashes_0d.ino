// control number of flashes with serial commands
// original sketch by Nicu FLORICA (niq_ro) - Craiova, 21.03.2018
// http://www.tehnic.go.ro
// http://nicuflorica.blogspot.ro/
// http://arduinotehniq.blogspot.com/
// http://www.arduinotehniq.com
// ver.0.a - just control number of flashes
// ver.0.b - change small pause between flashes
// ver.0.c - change big pause 
// ver.0.d - change # with @

char inchar; // 
#define led 13

byte flasuri = 1;
int pauza = 100;
int pauzamare = 1000;

void setup()
{
  Serial.begin(9600);
pinMode(led, OUTPUT);  // pin is an output
digitalWrite(led, LOW); // output is in in LOW (0)

Serial.println("==============================================");  // 
Serial.println("test serial control for flash light");  // 
Serial.println("original program (sketch) by Nicu FLORICA (niq_ro)");  // 
Serial.println("==============================================");  // 
Serial.println("@n1..n4 - number of flashes");  // 
Serial.println("@t1...t5 - time (x100ms) between flashes");  // 
Serial.println("@p1...p5 - time (x1000ms) for pause ");  // 
Serial.println("==============================================");  // 
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
    if (inchar=='@')
    {  // 2
      delay(10);
 
     inchar=Serial.read(); 
     if (inchar=='n')
      {  //3.1
        delay(10);
        inchar=Serial.read();
        if (inchar=='0')
        { 
         Serial.println("no change number of flashes");
        } 
        else if (inchar == '1')
        {
          flasuri = 1;
        }
        else if (inchar == '2')
        {
          flasuri = 2;
        }
        else if (inchar == '3')
        {
          flasuri = 3;
        }
        else if (inchar == '4')
        {
          flasuri = 4;
        }
        delay(10);
         } //3.1


if (inchar=='t')
      {  //3.2
        delay(10);
        inchar=Serial.read();
        if (inchar=='0')
        { 
         Serial.println("no change number of flashes");
        } 
        else if (inchar == '1')
        {
          pauza = 100;
        }
        else if (inchar == '2')
        {
          pauza = 200;
        }
        else if (inchar == '3')
        {
          pauza = 300;
        }
        else if (inchar == '4')
        {
          pauza = 400;
        }
        else if (inchar == '5')
        {
          pauza = 500;
        }
        delay(10);
         } //3.2

if (inchar=='p')
      {  //3.3
        delay(10);
        inchar=Serial.read();
        if (inchar=='0')
        { 
         Serial.println("no change number of flashes");
        } 
        else if (inchar == '1')
        {
          pauzamare = 1000;
        }
        else if (inchar == '2')
        {
          pauzamare = 2000;
        }
        else if (inchar == '3')
        {
          pauzamare = 3000;
        }
        else if (inchar == '4')
        {
          pauzamare = 4000;
        }
        else if (inchar == '5')
        {
          pauzamare = 5000;
        }
        delay(10);
         } //3.3
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

