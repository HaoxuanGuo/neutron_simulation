//
// Created by skyair on 11/20/18.
//
/// \file RunAction.cpp
/// \brief Implementation of the RunAction class

#include <RunAction.h>

RunAction::RunAction():G4UserRunAction(){}
RunAction::~RunAction()=default;
void RunAction::BeginOfRunAction(const G4Run *) {}
void RunAction::EndOfRunAction(const G4Run *) {}

