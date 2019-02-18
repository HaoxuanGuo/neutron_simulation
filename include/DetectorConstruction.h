//
// Created by skyair on 11/20/18.
//
/// \file DetectorConstruction.h
/// \brief Definition of the DetectorConstruction class

#ifndef NEUTRON_DETECTORCONSTRUCTION_H
#define NEUTRON_DETECTORCONSTRUCTION_H
/// Detector construction class to define materials and geometry.

#include <G4VUserDetectorConstruction.hh>

class DetectorConstruction : public G4VUserDetectorConstruction{
public:
    DetectorConstruction();

    ~DetectorConstruction() override;

    G4VPhysicalVolume* Construct() override;
};
#endif //NEUTRON_DETECTORCONSTRUCTION_H
