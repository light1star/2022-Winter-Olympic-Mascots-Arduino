#include<SoftwareSerial.h>
#define rxPin 2                 //define rx and yx pin
#define txPin 3

SoftwareSerial mySerial = SoftwareSerial(rxPin,txPin);

//define esp8266 wifi module variate
char judge = 0;
String comdata = "";
//define receive data
String text1 = "\r\n+IPD,0,1:1";
String text2 = "\r\n+IPD,0,1:2";

//put your setup code here, to run once;
void setup() {
  pinMode(13,OUTPUT);
  mySerial.begin(115200);       //设置通讯波特率
    delay(4000);
    mySerial.println("AT+RST\r\n");   //初始化
    delay(5000);
    delay(5000);
    mySerial.println("AT+CWMODE=3\r\n");    //AP+Station模式共存
    delay(4000);
    mySerial.println("AT+CIPMUX=1\r\n");    //允许多设备连入wifi模块
    delay(4000);
    mySerial.println("AT+CIPSERVER=1\r\n"); //设置wifi模块为服务器
    delay(4000);
    mySerial.println("AT+CIPSTO=7000\r\n"); //保持wifi与客户端的连接
    delay(4000);
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
}

// put your main code here, to run repeatedly:
void loop() {
  while(mySerial.available()>0)
  {
    comdata += char(mySerial.read());
    delay(1);
  }
  judgement();
  switch(judge)
  {
    case 1:while(!mySerial.available()){digitalWrite(13,HIGH);}
      break;
    case 2:while(!mySerial.available()){digitalWrite(13,LOW);}
      break;
    default: break;
  }

}

void judgement(){
  if (comdata.length()>0)
  {
    if(comdata==text1){
      judge=1;
    }
    if(comdata==text2){
      judge=2;
    }
    comdata = "";
  }
}
