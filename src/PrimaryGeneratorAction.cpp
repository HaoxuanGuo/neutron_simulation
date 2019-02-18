//
// Created by skyair on 11/20/18.
//
/// \file PrimaryGeneratorAction.cpp
/// \file Implementation of the PrimaryGenerationAction class

#include <PrimaryGeneratorAction.h>
#include <G4Event.hh>
#include <G4GeneralParticleSource.hh>

PrimaryGeneratorAction::PrimaryGeneratorAction()
        : G4VUserPrimaryGeneratorAction(){
	particleGun = new G4GeneralParticleSource();
}

PrimaryGeneratorAction::~PrimaryGeneratorAction() {
	delete particleGun;
}

void PrimaryGeneratorAction::GeneratePrimaries(G4Event *anEvent) {
	particleGun->GeneratePrimaryVertex(anEvent);
}

