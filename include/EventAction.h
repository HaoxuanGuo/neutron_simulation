//
// Created by skyair on 11/21/18.
//
/// \file EventAction.h
/// \brief Definition of the EventAction class

#ifndef NEUTRON_EVENTACTION_H
#define NEUTRON_EVENTACTION_H

#include <G4UserEventAction.hh>

class RunAction;

/// Event action clas
///
class EventAction : public G4UserEventAction{
public:
    EventAction(RunAction *runAction);
    ~EventAction() override;

    void BeginOfEventAction(const G4Event *event) override;
    void EndOfEventAction(const G4Event *event) override;

private:
    RunAction *fRunAction;
};
#endif //NEUTRON_EVENTACTION_H
