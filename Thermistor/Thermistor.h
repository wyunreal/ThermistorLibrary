#ifndef THERMISTOR_H
#define THERMISTOR_H

class Thermistor {
  private:
    int analogPin;
    int drainPin;
    int nominalResistance;
    int temperatureNominal;
    int bCoeficient;
    int seriesResistorValue;
  public:
    Thermistor(int aAnalogPin);
    Thermistor(int aAnalogPin, int aDrainPin);
    Thermistor(int aAnalogPin, int aNominalResistance, int aTemperatureNominal, int aBCoeficient, int aSeriesResistorValue);
    Thermistor(int aAnalogPin, int aDrainPin, int aNominalResistance, int aTemperatureNominal, int aBCoeficient, int aSeriesResistorValue);

    float readTemperature();
    float readTemperature(int numberOfSamples);
};

#endif
