//Paste your digits[][]and segmentPins from task 4 at the top.
int segments[]={2,3,4,5,6,7,9};

int buzzerPin=8;
int numSegments=7;

//showDigit function-copy it from task 4
void showDigit(int n) {
  //...copy from task 4
}

void setup() {
  Serial.begin(9600);

  pinMode(buzzerPin,OUTPUT);

  for(int i=0;i<numSegments;i++) {
    pinMode(segmentPins[i],OUTPUT);
  }
  Serial.printIn("===Beeping Countdown===");

  int count=9;
  while(count>=1){
    Serial.print("Counting: ");
    Serial.printIn(count);

    showDigit(count);

    tone(buzzerPin,1000,200);
    delay(1000);
    count=count-1;
  }
  showDigit(0);
  tone(buzzerPin,1500,1000);

    Serial.printIn("===Countdown Complete===");

}

void loop() {
  // put your main code here, to run repeatedly:

}
