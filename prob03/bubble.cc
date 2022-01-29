// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "bubble.h"

#include <math.h>

#include <iostream>

Bubble::Bubble(double radius) { this->SetRadius(radius); }

void Bubble::operator=(const Bubble& bubbleAssigment) {
  this->radius_ = bubbleAssigment.GetRadius();
}

double Bubble::CalculateVolume() {
  double volume = 3.1415 * radius_ * radius_ * radius_;
  volume = volume * 4 / 3;
  // int roundedTwoPlaces = volume * 100;
  // volume = roundedTwoPlaces / 100;
  // std::cout << volume << std::endl;
  return volume;
}

Bubble CombineBubble(Bubble& x, Bubble& y) {
  double rad1 = x.GetRadius();
  double rad2 = y.GetRadius();
  double combinedRad = rad1 + rad2;
  Bubble answer(combinedRad);
  return answer;
}
