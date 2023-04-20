#include <stdio.h>

// Recursive Function to reverse a string
void revString() {
  char c;
  // Get a character from the user
  scanf("%c", &c);
  // Check if the character is a newline
  if (c != '\n') {
    revString();
    printf("%c", c);
  }
}

int main() {
  printf("Enter a Sentence: ");
  revString();
  return 0;
}
