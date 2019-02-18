//
// Created by skyair on 11/20/18.
//

#ifndef NEUTRON_PHYSICSLIST_H
#define NEUTRON_PHYSICSLIST_H

#include <G4VModularPhysicsList.hh>

class PhysicsList : public G4VModularPhysicsList {
public:
    PhysicsList();
    ~PhysicsList() override;
	void ConstructParticle() override;
	void ConstructProcess() override;
    void SetCuts() override;
private:
	G4VPhysicsConstructor * EmPhysicsList;
	G4VPhysicsConstructor * DecayPhysicsList;
	G4VPhysicsConstructor * RadioactiveDecayPhysicsList;
};

#endif //NEUTRON_PHYSICSLIST_H
