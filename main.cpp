/// \file main.cpp
/// \brief Main program of the neutron simulation

#include <iostream>
#include <string>

#ifdef G4MULTITHREADED
#include "G4MTRunManager.hh"
#else
#include "G4RunManager.hh"
#endif

#include <G4UIExecutive.hh>
#include <G4UImanager.hh>

#include <DetectorConstruction.h>
#include <PhysicsList.h>
#include <ActionInitialization.h>
#include <G4VisExecutive.hh>


int main(int argc, char **argv) {
    // Detect interactive mode (if no arguments) and define UI session
    //
    G4UIExecutive *ui = nullptr;
    if (argc == 1) ui = new G4UIExecutive(argc, argv);

    // Choose the Random engine
    G4Random::setTheEngine(new CLHEP::RanecuEngine);

    // Construct the default run manager
    //
#ifdef G4MULTITHREADED
    auto *runManager = new G4MTRunManager;
#else
    auto *runManager = new G4RunManager;
#endif

    // Set mandatory initialization classes
    //
    // Detector construction
    runManager->SetUserInitialization(new DetectorConstruction());

    // Physics list
    auto *physicsList = new PhysicsList();
    runManager->SetUserInitialization(physicsList);

    // User action initialization
    runManager->SetUserInitialization(new ActionInitialization());

    // Initialize visualization
    //
    auto *visManager=new G4VisExecutive;
    visManager->Initialize();

    // Get the pointer to the User Interface manager
    G4UImanager *UImanager = G4UImanager::GetUIpointer();

    // Process macro or start UI session
    //
    if (!ui) {
        // batch mode
        std::string command = "/control/execute ";
        std::string fileName = argv[1];
        UImanager->ApplyCommand(command + fileName);
    } else {
        // interactive mode
        UImanager->ApplyCommand("/control/execute init.mac");
        ui->SessionStart();
        delete ui;
    }

    delete visManager;
    delete runManager;

    return 0;
}