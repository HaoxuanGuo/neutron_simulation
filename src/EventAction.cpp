//
// Created by skyair on 11/21/18.
//
/// \file EventAction.cpp
/// \brief Implementation of the EventAction class

#include <EventAction.h>

EventAction::EventAction(RunAction *runAction)
        : G4UserEventAction(),
          fRunAction(runAction) {
    // Empty
}

EventAction::~EventAction()=default;

void EventAction::BeginOfEventAction(const G4Event *event) {}
void EventAction::EndOfEventAction(const G4Event *event) {}

