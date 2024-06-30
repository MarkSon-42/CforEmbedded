//
// Created by Mac Apple on 24. 7. 1.
//

#ifndef CFOREMBEDDED_COMMON_H
#define CFOREMBEDDED_COMMON_H

#endif // CFOREMBEDDED_COMMON_H


void Spin(int sec) {
  // Get the current time
  time_t start = time(NULL);
  time_t now = start;

  // Loop until the specified time has passed
  while (now < start + sec) {
    now = time(NULL);
  }
}