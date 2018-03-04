/* This code created just for testing circuit which I  have assembled.
More readable and optimized source will uploaded as soon as I reassemble new schematic*/

//Constants
int R1=9;
int R2=8;
int R3=7;
int R4=6;
int R5=5;
int R6=4;
int R7=3;
int A=10;
int B=11;
int C=12;
int INH1=13;
int INH2=14;
int i=0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(R5, OUTPUT);
  pinMode(R6, OUTPUT);
  pinMode(R7, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(INH1, OUTPUT);
  pinMode(INH2, OUTPUT);
  digitalWrite(R1, LOW);
  digitalWrite(R2, LOW);   
  digitalWrite(R3, LOW);
  digitalWrite(R4, LOW);
  digitalWrite(R5, LOW);
  digitalWrite(R6, LOW);
  digitalWrite(R7, LOW);
  digitalWrite(INH1, HIGH);
  digitalWrite(INH2, HIGH);  
}

void pause(){
  delayMicroseconds(50);
}

// the loop function runs over and over again forever
void loop() {
  
  //"Badge"
  while(i<200){
    digitalWrite(A, LOW); //R1 column
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(INH1, LOW);
    digitalWrite(R1, HIGH);
    pause();
    digitalWrite(R1, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R1, HIGH);
    pause();
    digitalWrite(R1, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R1, HIGH);
    pause();
    digitalWrite(R1, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(R1, HIGH);
    pause();
    digitalWrite(R1, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R1, HIGH);
    pause();
    digitalWrite(R1, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R1, HIGH);
    pause();
    digitalWrite(R1, LOW); //R2 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH1, LOW);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW); //R3 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH1, LOW);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW); //R4 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH1, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW); //R5 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(INH1, LOW);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW); //R6 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH1, LOW);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW); //R7 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH1, LOW);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    i++;
  }
  //"Dum-e"
  i=0;
  while(i<200){
    digitalWrite(INH2, HIGH);
    digitalWrite(A, HIGH); //R1 column
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(INH1, LOW);
    digitalWrite(R1, HIGH);
    pause();
    digitalWrite(R1, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R1, HIGH);
    pause();
    digitalWrite(R1, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R1, HIGH);
    pause();
    digitalWrite(R1, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R1, HIGH);
    pause();
    digitalWrite(R1, LOW); //R2 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH1, LOW);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(INH2, LOW);
    digitalWrite(R2, HIGH);
    pause();
    digitalWrite(R2, LOW); //R3 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH1, LOW);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(R3, HIGH);
    pause();
    digitalWrite(R3, LOW); //R4 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH1, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R4, HIGH);
    pause();
    digitalWrite(R4, LOW); //R5 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(INH1, LOW);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R5, HIGH);
    pause();
    digitalWrite(R5, LOW); //R6 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH1, LOW);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R6, HIGH);
    pause();
    digitalWrite(R6, LOW); //R7 column
    digitalWrite(INH2, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(INH1, LOW);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    digitalWrite(INH1, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(INH2, LOW);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(R7, HIGH);
    pause();
    digitalWrite(R7, LOW);
    i++;
  } 
  i=0;
}
