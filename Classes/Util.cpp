//
//  Util.cpp
//  WittedMouse
//
//  Created by wc on 15/2/15.
//
//

#include "Util.h"

float Util::pauseMenuWidth = 0;
float Util::dif = -1;
float Util::distanceTravelled = 0.0;
float Util::initMouseLife = 0.0;

void Util::setPauseMenuWidth(float pw) {
    pauseMenuWidth = pw;
}

float Util::getPauseMenuWidth() {
    return pauseMenuWidth;
}

float Util::getDif() {
    return dif;
}

void Util::setDif(float dif_) {
    dif = dif_;
}

void Util::setDistanceTravelled(float distanceTravelled_) {
	distanceTravelled = distanceTravelled_;
}

float Util::getDistanceTravelled() {
	return distanceTravelled;
}

void Util::setInitMouseLife(float initLife) {
	initMouseLife = initLife;
}

float Util::getInitMouseLife() {
	return initMouseLife;
}