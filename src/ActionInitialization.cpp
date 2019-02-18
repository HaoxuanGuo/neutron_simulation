//
// Created by skyair on 11/20/18.
//
/// \file ActionInitialization.cpp
/// \brief Implementation of the ActionInitialization class

#include <ActionInitialization.h>
#include <RunAction.h>
#include <EventAction.h>
#include <SteppingAction.h>
#include <PrimaryGeneratorAction.h>

ActionInitialization::ActionInitialization():G4VUserActionInitialization(){}
ActionInitialization::~ActionInitialization()=default;
void ActionInitialization::BuildForMaster() const {
    auto *runAction = new RunAction();
    SetUserAction(runAction);
}
void ActionInitialization::Build() const {
    SetUserAction(new PrimaryGeneratorAction);

    auto *runAction = new RunAction;
    SetUserAction(runAction);

    auto *eventAction = new EventAction(runAction);
    SetUserAction(eventAction);

    SetUserAction(new SteppingAction(eventAction));
}




