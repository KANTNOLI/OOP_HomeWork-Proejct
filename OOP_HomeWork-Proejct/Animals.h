#pragma once

#include "main.h"


class Zoo {
private:
	float voracity;//������������� 
	float weight;  //���
	string type;   //������ � ��
	string name;   //��� � �.�


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



};