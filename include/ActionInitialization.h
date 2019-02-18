//
// Created by skyair on 11/20/18.
//
/// \file ActionInitialization.h
/// \brief Definition of the ActionInitialization class

#ifndef NEUTRON_ACTIONINITIALIZATION_H
#define NEUTRON_ACTIONINITIALIZATION_H

/// Action initialization class.

#include <G4VUserActionInitialization.hh>

class ActionInitialization : public G4VUserActionInitialization{
public:
    ActionInitialization();
    ~ActionInitialization() override;

    void BuildForMaster() const override;
    void Build() const override;
};

#endif //NEUTRON_ACTIONINITIALIZATION_H
