#include "substr.h"

/** @brief This function determines if a string is a substring of another string
 * without using any library function.
 *  @param hay = pointer to the string being scanned.
 *  @param needle = pointer to the potential substring.
 *  @return = position of "needle" in "hay" or -1 if not found.
 */
int substr(char *hay, char *needle) {
  int len_hay = 0;
  int len_needle = 0;
  int pos = -1;

  // Find the number of characters for each string
  while (*(hay + len_hay) != '\0') len_hay++;
  while (*(needle + len_needle) != '\0') len_needle++;

  for (int ch_hay = 0; ch_hay <= len_hay - len_needle; ch_hay++) {
    pos = ch_hay;
    for (int ch_needle = ch_hay; ch_needle < ch_hay + len_needle - 1;
         ch_needle++) {
      if (*(hay + ch_hay) != *(needle + ch_needle)) {
        pos = -1;
        break;
      }
    }
    if (pos != -1) break;
  }
  return pos;
}
