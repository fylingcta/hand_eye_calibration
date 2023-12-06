#include "calibration_to_hand.h"

int main() {
  util::LogWapper::ConfigLogger()->Init("calibration", "./log");

  calibration::EyeToHandCalibration calibrate;
  // calibrate.AddCameraPose();

  calibrate.RunCalibration();

  // bool flag1 = calibrate.TeachMode();
  // std::cout << "open tech mode: " << flag1 << std::endl;
  //   bool flag2 = calibrate.EndTeachMode();
  //   std::cout << "close tech mode: " << flag2 << std::endl;

  return 0;
}