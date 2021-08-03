/* Problem Statement:
 *  This program is to generate LED patterns as shown in following video
 *  Example 2. 
    https://www.facebook.com/robojunkies/videos/231378848647363/
 * 
 * Hardware Component :  
 * Arduino Uno 
 * Led Bargraph
 * 
 * Circuit info: 
 *  D4-D13 of Arduino Uno are connected to LEDs  
 *
 * Author : Sahana B G
 * Date: 30 Apr 2021
 * 
 */

// Pins for declaring first and last pins of Arduino
const unsigned int FIRSTPIN = 4;
const unsigned int LASTPIN = 13; 

void setup() 
{
  // Configure D4-D13 pins to OUTPUT mode
  for(int i=FIRSTPIN;i<=LASTPIN;i++)
  pinMode(i,OUTPUT);

}

void loop()
{
 pattern1();
 pattern2();
 pattern3();
 pattern4();
 pattern5();
}

void pattern1()
{
  // Generate Pattern1 led fill
  for(int i=FIRSTPIN;i<=LASTPIN;i++)
  {
   digitalWrite(i,HIGH); // Set the pin HIGH
   delay(100); // Wait for 100ms
  }

  for(int i=FIRSTPIN;i<=LASTPIN;i++)
  {
   digitalWrite(i,LOW);  // Set the pin HIGH
   delay(100); // Wait for 100ms
  }
}

void pattern2()
{
  // Generate alternating led glowing pattern2
  for(int i=FIRSTPIN; i<=LASTPIN; i=i+2)
  {
   digitalWrite(i,HIGH);
   delay(100);          // Wait for 100ms
   digitalWrite(i,LOW);
  }
  for(int i=FIRSTPIN+1; i<=LASTPIN; i=i+2)
  {
   digitalWrite(i,HIGH); // Set the pin HIGH
   delay(100);          // Wait for 100ms
   digitalWrite(i,LOW); // Set the pin LOW
  }       
}

void pattern3()
{
  // Generate pattern3 Falling waterfall 
  digitalWrite(FIRSTPIN,HIGH);
  delay(1000); //Wait for 1000ms
  for(int i=FIRSTPIN;i<=LASTPIN;i++)
  {
   digitalWrite(i,HIGH); // Set the pin HIGH
   delay(100);          // Wait for 100ms
   digitalWrite(i,LOW); // Set the pin LOW
  } 
}

void pattern4()
{
  // Generate pattern 4 accelerating led 
  for(int i=FIRSTPIN;i<=LASTPIN;i++)
  {
   digitalWrite(i,HIGH);// Set the pin HIGH
   delay(1000/(i-3));
   digitalWrite(i,LOW); // Set the pin LOW
  }
}

void pattern5()
{
  // Generate pattern5 Newton crandel
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(10,HIGH);
  delay(500); 
  for(int i=7;i>=4;i--)
  {
   digitalWrite(i,HIGH); // Set the pin HIGH
   delay(500);          // Wait for 500ms
   digitalWrite(i,LOW); // Set the pin LOW
  }
 for(int l=4;l<=7;l++)
 {
  digitalWrite(l,HIGH); // Set the pin HIGH
  delay(500);
  digitalWrite(l,LOW);  // Set the pin LOW
 }
  digitalWrite(7,HIGH);// Set the pin HIGH
  for(int j=10;j<=13;j++)
  {
   digitalWrite(j,HIGH); // Set the pin HIGH
   delay(500);          // Wait for 500ms
   digitalWrite(j,LOW); // Set the pin LOW
  }
  for(int k=13;k>=10;k--)
  {
   digitalWrite(k,HIGH); // Set the pin HIGH
   delay(500);          // Wait for 500ms
   digitalWrite(k,LOW); // Set the pin LOW
  }
 }

  
