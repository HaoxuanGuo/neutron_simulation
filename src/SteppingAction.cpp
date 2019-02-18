//
// Created by skyair on 11/21/18.
//
/// \file SteppingAction.cc
/// \brief Implementation of the SteppingAction class

#include <SteppingAction.h>

SteppingAction::SteppingAction(EventAction *eventAction)
        :G4UserSteppingAction(),
         fEventAction(eventAction) {
    // Empty
}

SteppingAction::~SteppingAction()=default;

void SteppingAction::UserSteppingAction(const G4Step *) {}