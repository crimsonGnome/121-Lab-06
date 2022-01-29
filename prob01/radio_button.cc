// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "radio_button.h"

#include <iostream>
#include <string>
#include <vector>

using std::cout, std::string, std::vector;
// ----------------- Radio Button Constructors Start ----------

// Default Constructor
RadioButton::RadioButton() {
  this->text = "";
  this->selected = false;
}

// Constructor
RadioButton::RadioButton(string input) {
  this->text = input;
  this->selected = false;
}

// ----------------- Radio Button Constructors End ----------
// ----------------- Radio Button Setters Start -------------

// Radio button Setters
void RadioButton::SetText(string input) { this->text = input; }

// Selet Boolean
void RadioButton::SetSelected(bool value) { this->selected = value; }

// ----------------- Radio Button Setters End ---------------
// ----------------- Radio Button Prototypes Start ----------

// Select Radio
void SelectRadioButton(vector<RadioButton>& radioButtons, size_t x) {
  for (size_t i = 0; i < radioButtons.size(); i++) {
    if (i == x) {
      radioButtons[i].SetSelected(true);
    } else {
      radioButtons[i].SetSelected(false);
    }
  }
}

// Print Radio
void PrintRadioButtons(vector<RadioButton>& radioButtons) {
  int selectedFlag = -1;

  for (size_t i = 0; i < radioButtons.size(); i++) {
    if (radioButtons[i].IsSelected() == true) {
      selectedFlag = i;
      cout << "\n(*) ";
    } else {
      cout << "\n( ) ";
    }
    cout << radioButtons[i].GetText();
  }
  if (selectedFlag >= 0) {
    cout << "\nThe button at index " << selectedFlag << " is selected";
  } else {
    cout << "\nNo button selected yet";
  }
}
