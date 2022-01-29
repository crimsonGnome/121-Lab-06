// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include <iostream>
#include <string>
#include <vector>

#include "radio_button.h"

int main() {
  int num_buttons;
  std::cout << "How many radio buttons? ";
  std::cin >> num_buttons;
  std::cin.ignore();

  if (num_buttons <= 0) {
    // Return early.
    return 0;
  }

  std::vector<RadioButton> buttons;
  for (int i = 0; i < num_buttons; i++) {
    std::string text;
    std::cout << "Text for button at index " << i << "? ";
    std::getline(std::cin, text);

    //
    // 1. Create a RadioButton and set the text to |text|, and ensure that it is
    // not selected. Add it to the |buttons| vector using push_back.
    //
    RadioButton button(text);
    buttons.push_back(button);
  }

  //
  // 2. use the PrintRadioButtons function to display the |buttons| vector.
  //
  PrintRadioButtons(buttons);
  std::string input;
  do {
    // Changed it to size_t to match .size() in internal function
    size_t index;
    std::cout << "\nWhat button index would you like to select? ";
    std::cin >> index;

    //
    // 3. Use your SelectRadioButton function to select the index |index| from
    // the |buttons| vector.
    // 4. Use the PrintRadioButtons function to display the |buttons| vector.
    //
    SelectRadioButton(buttons, index);
    PrintRadioButtons(buttons);

    std::cout << "Enter anything to select again (or \"quit\" to exit) ";
    std::cin >> input;
  } while (input != "quit");
  return 0;
}
