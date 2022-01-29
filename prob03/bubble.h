// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#ifndef BUBBLE_H
#define BUBBLE_H

class Bubble {
 private:
  double radius_;

 public:
  // Constructor
  Bubble(){};
  Bubble(double raidus);
  void operator=(const Bubble& bubbleAssigment);
  // Getters
  double GetRadius() const { return radius_; };

  // Setters
  void SetRadius(double radius) { this->radius_ = radius; };

  // Method
  double CalculateVolume();
};

Bubble CombineBubble(Bubble& x, Bubble& y);
#endif  // BUBBLE_H
