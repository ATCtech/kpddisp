

//#include <HC05.h>
//HC05 btSerial = HC05(A2, A5, 1,0);//..,..,RX,TX

//#include <Wire.h>
//#include <RTClib.h>

//RTC_DS1307 rtc;

String x,x2,x3,x4,x5,x6;
int LEDClk =  5;
int LEDClk2 =9;
int LEDClk3 = 3;
int LEDClk4 = 6;
int LEDClk5 = 10;
int LEDClk6 = 11;
int LEDlatch =2;
int LEDdata = 7;
int z;
long int D,D2,D3,D4,D5,D6;

byte b[]={3,159,37,13,153,73,65,31,1,9}; // 0 to 9 digits
byte t[]={2,158,36,12,152,72,64,30,0,8}; // 0 to 9 digits
 
void setup() {
  // put your setup code here, to run once:
 //Wire.begin();
   //rtc.begin();

pinMode(LEDClk, OUTPUT);
pinMode(LEDClk2, OUTPUT);
pinMode(LEDClk3, OUTPUT);
pinMode(LEDClk4, OUTPUT);
pinMode(LEDClk5, OUTPUT);
pinMode(LEDClk6, OUTPUT);
pinMode(LEDlatch, OUTPUT);
pinMode(LEDdata, OUTPUT);

digitalWrite(LEDlatch,1);

shiftOut(LEDdata,LEDClk3,LSBFIRST,99);
shiftOut(LEDdata,LEDClk3,LSBFIRST,97);
shiftOut(LEDdata,LEDClk3,LSBFIRST,225);
shiftOut(LEDdata,LEDClk3,LSBFIRST,131);
shiftOut(LEDdata,LEDClk3,LSBFIRST,19);

shiftOut(LEDdata,LEDClk4,LSBFIRST,99);
shiftOut(LEDdata,LEDClk4,LSBFIRST,97);
shiftOut(LEDdata,LEDClk4,LSBFIRST,225);
shiftOut(LEDdata,LEDClk4,LSBFIRST,131);
shiftOut(LEDdata,LEDClk4,LSBFIRST,19);

shiftOut(LEDdata,LEDClk5,LSBFIRST,99);
shiftOut(LEDdata,LEDClk5,LSBFIRST,97);
shiftOut(LEDdata,LEDClk5,LSBFIRST,225);
shiftOut(LEDdata,LEDClk5,LSBFIRST,131);
shiftOut(LEDdata,LEDClk5,LSBFIRST,19);

shiftOut(LEDdata,LEDClk6,LSBFIRST,99);
shiftOut(LEDdata,LEDClk6,LSBFIRST,97);
shiftOut(LEDdata,LEDClk6,LSBFIRST,225);
shiftOut(LEDdata,LEDClk6,LSBFIRST,131);
shiftOut(LEDdata,LEDClk6,LSBFIRST,19);

shiftOut(LEDdata,LEDClk2,LSBFIRST,99);
shiftOut(LEDdata,LEDClk2,LSBFIRST,97);
shiftOut(LEDdata,LEDClk2,LSBFIRST,225);
shiftOut(LEDdata,LEDClk2,LSBFIRST,131);
shiftOut(LEDdata,LEDClk2,LSBFIRST,19);

shiftOut(LEDdata,LEDClk,LSBFIRST,99);
shiftOut(LEDdata,LEDClk,LSBFIRST,225);
shiftOut(LEDdata,LEDClk,LSBFIRST,17);


Serial.begin(9600);
//btSerial.begin(9600);

//if (! rtc.begin()) 
 // {
    //Serial.println("Couldn't find RTC");
   // while (1);
 // }

//  if (! rtc.isrunning()) 
  //{
   // Serial.println("RTC is NOT running!");
// rtc.adjust(DateTime(__DATE__, __TIME__));
  // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));
 // }

//DateTime now = rtc.now();

//Serial.println(now.day());
//Serial.println(now.month());
//Serial.println(now.year());
//Serial.println(now.hour());
//Serial.println(now.minute());
//.println(now.second());

//z=now.year();
shiftOut(LEDdata,LEDClk4,LSBFIRST,t[getDigit(z,1)]);
shiftOut(LEDdata,LEDClk4,LSBFIRST,t[getDigit(z,2)]);

//z=now.month();
shiftOut(LEDdata,LEDClk4,LSBFIRST,t[getDigit(z,1)]);
shiftOut(LEDdata,LEDClk4,LSBFIRST,t[getDigit(z,2)]);

//z=now.day();
shiftOut(LEDdata,LEDClk4,LSBFIRST,t[getDigit(z,1)]);
shiftOut(LEDdata,LEDClk4,LSBFIRST,t[getDigit(z,2)]);

while(!Serial.available()){Serial.println("< press any key to START >");delay(3000);}

if(Serial.available()>0){}



Serial.println("-----------------------------");
Serial.println("     < OK >                  ");
Serial.println("-----------------------------");
delay(1000);
Serial.println(" developed by ATC & NUTEK COMPUTERS ");
delay(1000);

}




void menu(){ Serial.println("-----------------------------");
             Serial.println("      ENTER CHOICE > ");
             Serial.println("      1. DISPLAY 1  ");
             Serial.println("      2. DISPLAY 2  ");
             Serial.println("      3. DISPLAY 3  ");
             Serial.println("      4. DISPLAY 4  ");
             Serial.println("      5. DISPLAY 5  ");
             Serial.println("      6. DISPLAY 6  ");
             Serial.println("-----------------------------");
    
    
    while(!Serial.available()){}
    
    while(Serial.available()>0){

    int choice = Serial.read();

     if(choice == 46){Serial.println("< Date >");delay(3000);
                while(!Serial.available()){}
                while(Serial.available()>0){
                   x = Serial.readString();
                 long int D = (long int)x.toInt();
                    Serial.println(D);
 //seconds                   
//String xd = String(getDigit(D,2))+String(getDigit(D,1));
//D6 = (long double)xd.toInt();
//Serial.print(D6);
//minutes
// xd = String(getDigit(D,4))+String(getDigit(D,3));
//D5 = (long double)xd.toInt();
//Serial.print(D5);

//hours
 //xd = String(getDigit(D,6))+String(getDigit(D,5));
//D4 = (long double)xd.toInt();
//Serial.print(D4);
//year
//xd = String(getDigit(D,8))+String(getDigit(D,7));
//D3 = (long double)xd.toInt();
//Serial.print(D3);
//month
//xd = String(getDigit(D,10))+String(getDigit(D,9));
//D2 = (long double)xd.toInt();
//Serial.print(D2);
//day
// xd = String(getDigit(D,12))+String(getDigit(D,11));
//D = (long double)xd.toInt();
//Serial.print(D);
//dispd(D,D2,D3,D4,D5,D6);

                    
               //  delay(3000);       
       //           x2 = Serial.readString();
       //          long int D2 = (long double)x2.toInt();
        //          Serial.println(D2);
        //         delay(3000);  
         //         x3 = Serial.readString();
        //         long int D3 = (long double)x3.toInt();
       //           Serial.println(D3);
       //          delay(3000); 
      //            x4 = Serial.readString();
      //           long int D4 = (long double)x4.toInt();
      //            Serial.println(D4);
      //           delay(3000); 
       //           x5 = Serial.readString();
       //          long int D5 = (long double)x5.toInt();
         //         Serial.println(D5);
         //        delay(3000); 
        //          x6 = Serial.readString();
       //          long int D6 = (long double)x6.toInt();
       //           Serial.println(D6);
      //           delay(3000); 
                   dispd(D,D2,D3,D4,D5,D6);
                       }
                     
                      
                      }

   
     if(choice == 49){Serial.println("< 1 >");delay(500);
                while(!Serial.available()){}
                while(Serial.available()>0){
                   x = Serial.readString();
                   long int A = (long double)x.toInt();
                    Serial.println(A);
                    delay(500);
                    disp1(A);
                       }
                     
                      
                      }

     else if(choice == 50){Serial.println("< 2 >");delay(500);
                           while(!Serial.available()){}
                            while(Serial.available()>0){
                   x = Serial.readString();
                   long int B = (long double)x.toInt();
                    Serial.println(B);
                    delay(500);
                    disp2(B);
                       }
                       }

     else if(choice == 51){Serial.println("< 3 >");delay(500);
                           while(!Serial.available()){}
                            while(Serial.available()>0){
                   x = Serial.readString();
                   long int C = (long double)x.toInt();
                    Serial.println(C);
                    delay(500);
                    disp3(C);
                       }
                       }
      else if(choice == 52){Serial.println("< 4 >");delay(500);
                           while(!Serial.available()){}
                            while(Serial.available()>0){
                   x = Serial.readString();
                   long int D = (long double)x.toInt();
                    Serial.println(D);
                    delay(500);
                    disp4(D);
                       }
                       }

     else if(choice == 53){Serial.println("< 5 >");delay(500);
                           while(!Serial.available()){}
                            while(Serial.available()>0){
                   x = Serial.readString();
                   long int E = (long double)x.toInt();
                    Serial.println(E);
                    delay(500);
                    disp5(E);
                       }
                       }

      else if(choice == 54){Serial.println("< 6 >");delay(500);
                           while(!Serial.available()){}
                            while(Serial.available()>0){
                   x = Serial.readString();
                   long int F = (long double)x.toInt();
                    Serial.println(F);
                    delay(500);
                    disp6(F);
                       }
                       }                 

     else{Serial.println("RETRY");
     delay(1000); menu();}
    
    
     
     
      }
  }

void loop() {
   
   
  menu();

}

long int getDigit(unsigned long int number, long int digit) {
    for (int i=0; i<digit-1; i++) { 
      number /= 10; 
    }
    return number % 10;
}

void disp1(long int c){
digitalWrite(LEDClk,1);
for (int e=0;e<3;e++){
shiftOut(LEDdata,LEDClk,LSBFIRST,b[getDigit(c,e+1)]);}
delay(1000);
digitalWrite(LEDClk,0);
}

void disp2(long int d){
digitalWrite(LEDClk2,1);
for (int e=0;e<5;e++){
shiftOut(LEDdata,LEDClk2,LSBFIRST,b[getDigit(d,e+1)]);}
delay(1000);
digitalWrite(LEDClk2,0);
}

void disp3(long int f){
digitalWrite(LEDClk3,1);
for (int e=0;e<5;e++){
shiftOut(LEDdata,LEDClk3,LSBFIRST,b[getDigit(f,e+1)]);}
delay(1000);
digitalWrite(LEDClk3,0);
}

void disp4(long int g){
digitalWrite(LEDClk4,1);
for (int e=0;e<5;e++){
shiftOut(LEDdata,LEDClk4,LSBFIRST,b[getDigit(g,e+1)]);}
delay(1000);
digitalWrite(LEDClk4,0);
}

void disp5(long int h){
digitalWrite(LEDClk5,1);
for (int e=0;e<5;e++){
shiftOut(LEDdata,LEDClk5,LSBFIRST,b[getDigit(h,e+1)]);}
delay(1000);
digitalWrite(LEDClk5,0);
}

void disp6(long int h){
digitalWrite(LEDClk6,1);
for (int e=0;e<6;e++){
shiftOut(LEDdata,LEDClk6,LSBFIRST,b[getDigit(h,e+1)]);}
delay(1000);
digitalWrite(LEDClk6,0);
}

void dispd(long int D, long int D2, long int D3, long int D4, long int D5, long int D6){

//rtc.adjust(DateTime(D3,D2,D,D4,D5,D6));

delay(1000);
}
