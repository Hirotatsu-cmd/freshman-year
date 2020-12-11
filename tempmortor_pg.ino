void setup() {
  Serial.begin(115200)　//通信速度
  pinMode(7,OUTPUT);
}

void loop() {
int data = analogRead(0);
int i = (data,0,1023,0,5000);  //取得数値を電圧に変換
int temp = map(i,300,1600,-30,100);　//値を温度に
Serial.println(String(i)+"->"+String(temp));

if(temp > 23){　//23度越えで起動
  digitalWrite(7,HIGH);
}else{
  digitalWrite(7,LOW);
}

delay(500);
}
