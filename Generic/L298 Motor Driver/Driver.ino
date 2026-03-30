//MOTOR A
int ENA = 18;
int in1 = 19;
int in2 = 21;

//MOTOR B
int ENB = 14;
int in3 = 26;
int in4 = 27;

//PWM config
const int freq = 2000;
const int pwmchanelA = 0;
const int pwmchanelB = 1;
const int resoloution = 8;

void setup(){

pinmode(in1, OUTPUT);//set all motor pins as outputs
pinmode(in2, OUTPUT);
pinmode(in3, OUTPUT);
pinmode(in4, OUTPUT);

digitalWrite(in1, LOW);//Set motors off
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);

LedcAttachChannel(ENA, freq, resoloution, pwmchanelA);
LedcAttachChannel(ENB, freq, resoloution, pwmchanelB);


LedcWrite(ENA, 0);//Set motor speed to 0
LedcWrite(ENB, 0);//Set motor speed to 0

}

void loop(){

//example code

LedcWrite(ENA, 255);//Motors full speed ahead!
LedcWrite(ENB, 255);

//Set motors one direction ( if you want to see how motor directions work see README )
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);

//Reverse motors

digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);

}
