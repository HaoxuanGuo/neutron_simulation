//
// Created by skyair on 11/21/18.
//
/// \file SteppingAction.h
/// \brief Definition of the SteppingAction class

#ifndef NEUTRON_STEPPINGACTION_H
#define NEUTRON_STEPPINGACTION_H

#include <G4UserSteppingAction.hh>

/// Stepping action class

class EventAction;

class SteppingAction : public G4UserSteppingAction {
public:
    SteppingAction(EventAction *eventAction);

    ~SteppingAction() override;

    // method from the base class
    void UserSteppingAction(const G4Step *) override;

private:
    EventAction *fEventAction;
};

#endif //NEUTRON_STEPPINGACTION_H
