//
// Created by skyair on 11/20/18.
//
/// \file PrimaryGeneratorAction.h
/// \brief Definition of the PrimaryGeneratorAction class

#ifndef NEUTRON_PRIMARYGENERATORACTION_H
#define NEUTRON_PRIMARYGENERATORACTION_H

#include <G4VUserPrimaryGeneratorAction.hh>
#include <G4ParticleGun.hh>

class G4Event;
class G4GeneralParticleSource;

/// The primary generator action class with particle gun.
class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction {
public:
    PrimaryGeneratorAction();
    ~PrimaryGeneratorAction() override;

    // method from the base class
    void GeneratePrimaries(G4Event *) override;

private:
    G4GeneralParticleSource *particleGun;
};

#endif //NEUTRON_PRIMARYGENERATORACTION_H
