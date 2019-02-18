//
// Created by skyair on 11/20/18.
//
/// \file RunAction.h
/// \brief Definition of the RunAction class

#ifndef NEUTRON_RUNACTION_H
#define NEUTRON_RUNACTION_H

#include <G4UserRunAction.hh>

/// Run action class
class RunAction : public G4UserRunAction{
public:
    RunAction();
    ~RunAction() override;

    // virtual G4Run* GenerateRun();
    void BeginOfRunAction(const G4Run *) override;
    void EndOfRunAction(const G4Run *) override;
};
#endif //NEUTRON_RUNACTION_H
