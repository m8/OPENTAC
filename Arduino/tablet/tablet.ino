/*-----------------------------------------------*
 * Exapmle Sketch for OPENTAC from Musa Sadık    *                                          
 * Unal                                          *
 * 15.03.2018                                    * 
 *-----------------------------------------------*/


#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <SoftwareSerial.h>


Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x42);
Adafruit_PWMServoDriver pwm3 = Adafruit_PWMServoDriver(0x44);
Adafruit_PWMServoDriver pwm4 = Adafruit_PWMServoDriver(0x48);

#define SERVOMIN  150 
#define SERVOMAX  600 



char KOMUTLAR [5][17] = {"","","",""};


SoftwareSerial bt(3, 4);
char mod;

void GO(){

              for (int i = 0; i < 4; i++) 
              {
                for (int j = 0; j < 16; j++) {
                  Serial.print(KOMUTLAR[i][j]);
                }
                Serial.print("\n");
              }

              for (int k = 0; k < 16; k++) 
              {
                int pulselength = map((KOMUTLAR[0][k]) - '0', 0, 9, SERVOMIN, SERVOMAX);
                Serial.println(pulselength);  
                pwm.setPWM(k, 0, pulselength);               
              }
              
              for (int l = 0; l < 16; l++) 
              {
                int pulselength = map((KOMUTLAR[1][l]) - '0', 0, 9, SERVOMIN, SERVOMAX);
                Serial.println(pulselength); 
                pwm2.setPWM(l, 0, pulselength);               
              }

              for (int m = 0; m < 16; m++) 
              {
                int pulselength = map((KOMUTLAR[2][m]) - '0', 0, 9, SERVOMIN, SERVOMAX);
                Serial.println(pulselength);  
                pwm3.setPWM(m, 0, pulselength);           
              }
              
              for (int n = 0; n < 16; n++) 
              {
                int pulselength = map((KOMUTLAR[3][n]) - '0', 0, 9, SERVOMIN, SERVOMAX);
                Serial.println(pulselength);
                pwm4.setPWM(n, 0, pulselength);
              }
              

}

void SET_SERVO(char* servo_decode){

    int counter = 0;
  
    for(int k = 0; k<4; k++){
    
    for(int i = 0; i< 16; i++)
    {
       KOMUTLAR[k][i] = servo_decode[counter];
       counter++; 
    }
    }  
}


void setup() {


  Serial.begin(9600);
  bt.begin(9600);

  pwm.begin();
  pwm2.begin();
  pwm3.begin();
  pwm4.begin();

  pwm.setPWMFreq(60);
  pwm2.setPWMFreq(60);
  pwm3.setPWMFreq(60);
  pwm4.setPWMFreq(60);

  delay(10);

}



void loop() {

  if (Serial.available())
  {
     SET_SERVO("8888888888888888888888887777777766666666555555554444444433333333");
     GO();                               
  }

}

