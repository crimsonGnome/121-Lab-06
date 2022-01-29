// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#ifndef RADIO_BUTTON_H
#define RADIO_BUTTON_H

#include <string>
#include <vector>

using std::string, std::vector;

class RadioButton {
 private:
  string text;
  bool selected;

 public:
  // Constuctor
  RadioButton();
  RadioButton(string input);

  // Getters
  string GetText() const { return text; };
  bool IsSelected() const { return selected; };

  // Setters
  void SetText(string input);
  void SetSelected(bool value);
};

void SelectRadioButton(vector<RadioButton>& radioButtons, size_t x);
void PrintRadioButtons(vector<RadioButton>& radioButtons);

#endif  // RADIO_BUTTON_H
