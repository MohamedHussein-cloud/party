int a[5]= {9,8,7,6,5};
int x = 0;
int h = 0;
void setup() {
  // put your setup code here, to run once:
for (x=0;x<=5;x++){
  pinMode(a[x],OUTPUT);
}
}
void loop() {
  // put your main code here, to run repeatedly:
for (x=0;x<=5;x++){
  digitalWrite(a[x],HIGH);
  delay(100);
  digitalWrite(a[x],LOW);
}
}
