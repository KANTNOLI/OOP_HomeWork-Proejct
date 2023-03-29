#pragma once

#include "main.h"


class Zoo {
private:
	float voracity;//прожорливость 
	float weight;  //вес
	string type;   //хищник и тд
	string name;   //лев и т.д


public:
	float get_voracity() {
		return voracity;
	}
	void set_voracity(float v) {
		if (v > 0) {
			voracity = v;
		}
	}

	
	float get_weight() {
		return weight;
	}
	void set_weight(float w) {
		if (w > 0) {
			weight = w;
		}
	}

	string get_type() {
		return type;
	}
	void set_type(string t) {
		type = t;
	}


	string get_name() {
		return name;
	}
	void set_name(string n) {
		name = n;
	}


	Zoo() {  // дефолтная конструкция 
		voracity = 4;
		weight = 45;
		type = "predator";
		name = "wolf";
	}

	~Zoo() {
		cout << "construction is clear!" << endl;
	}



	void init(float vora, float weig, string t, string n) {
		voracity = vora;
		weight = weig;
		type = t;
		name = n;
	}

	string convert_to_string() {
		return "Name: " + name + ", " + "type:" + type + ", " + "voracity: " + to_string(voracity) + ", " + "weight: " + to_string(weight);
	}


};