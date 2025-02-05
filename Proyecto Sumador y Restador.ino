double Cuenta;

void Pulsadores() {
	if (digitalRead(5)) {
		Cuenta = (Cuenta + 1);
		Serial.print(String("Contador: "));
		Serial.println(Cuenta);
	}

	if (digitalRead(3)) {
		Cuenta = (Cuenta - 1);
		Serial.print(String("Contador: "));
		Serial.println(Cuenta);
	}

}
void A_cero() {
	digitalWrite(13,LOW);
	digitalWrite(12,LOW);
	digitalWrite(11,LOW);
	digitalWrite(10,LOW);
	digitalWrite(9,LOW);
	digitalWrite(8,LOW);
}
void Cuenta5() {
	digitalWrite(13,HIGH);
	digitalWrite(12,HIGH);
	digitalWrite(11,HIGH);
	digitalWrite(10,HIGH);
	digitalWrite(9,HIGH);
	digitalWrite(8,LOW);
}
void Cuenta6() {
	digitalWrite(13,HIGH);
	digitalWrite(12,HIGH);
	digitalWrite(11,HIGH);
	digitalWrite(10,HIGH);
	digitalWrite(9,HIGH);
	digitalWrite(8,HIGH);
}
void Comprobar() {
	if ((Cuenta <= 0)) {
		A_cero();
	}

	if ((Cuenta >= 7)) {
		A_cero();
	}

	if ((Cuenta == 1)) {
		Cuenta1();
	}

	if ((Cuenta == 2)) {
		Cuenta2();
	}

	if ((Cuenta == 3)) {
		Cuenta3();
	}

	if ((Cuenta == 4)) {
		Cuenta4();
	}

	if ((Cuenta == 5)) {
		Cuenta5();
	}

	if ((Cuenta == 6)) {
		Cuenta6();
	}

}
void Cuenta1() {
	digitalWrite(13,HIGH);
	digitalWrite(12,LOW);
	digitalWrite(11,LOW);
	digitalWrite(10,LOW);
	digitalWrite(9,LOW);
	digitalWrite(8,LOW);
}
void Cuenta2() {
	digitalWrite(13,HIGH);
	digitalWrite(12,HIGH);
	digitalWrite(11,LOW);
	digitalWrite(10,LOW);
	digitalWrite(9,LOW);
	digitalWrite(8,LOW);
}
void Cuenta3() {
	digitalWrite(13,HIGH);
	digitalWrite(12,HIGH);
	digitalWrite(11,HIGH);
	digitalWrite(10,LOW);
	digitalWrite(9,LOW);
	digitalWrite(8,LOW);
}
void Cuenta4() {
	digitalWrite(13,HIGH);
	digitalWrite(12,HIGH);
	digitalWrite(11,HIGH);
	digitalWrite(10,HIGH);
	digitalWrite(9,LOW);
	digitalWrite(8,LOW);
}

void setup()
{
  	pinMode(5, INPUT);
	pinMode(3, INPUT);
	pinMode(13, OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(8, OUTPUT);

	Serial.begin(9600);
	Serial.flush();
	while(Serial.available()>0)Serial.read();

	Cuenta = 0;

}


void loop()
{

  	Pulsadores();
  	Comprobar();
  	delay(250);

}