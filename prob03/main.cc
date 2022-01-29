#include <iomanip>
#include <iostream>

#include "bubble.h"

int main() {
  // 1. Create two bubble objects called bubble1 and bubble 2
  Bubble bubble1, bubble2;
  double radius1, radius2;
  std::cout << "Please enter the radius of the first bubble: ";
  std::cin >> radius1;
  // 2. Set the radius of bubble1 to radius1
  bubble1.SetRadius(radius1);
  std::cout << "Please enter the radius of the second bubble: ";
  std::cin >> radius2;
  // 3. Set the radius of bubble2 to radius2
  bubble2.SetRadius(radius2);
  // 4. Create a new bubble object called combined
  Bubble combined;
  // 5. Call the CombineBubble function to combine the bubble1 and bubble2
  // objects then store the result in the combined variable

  double volume;
  combined = CombineBubble(bubble1, bubble2);
  // std::cout << combined.GetRadius() << std::endl;
  // 6. Get the volume of output and store it in the the variable called volume
  volume = combined.CalculateVolume();
  std::cout
      << "The bubbles have now combined and created a bubble with the volume "
         "of: "
      << std::fixed << std::setprecision(2) << volume << std::endl;
  return 0;
}
