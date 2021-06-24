#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: kettle
//  action 1: the kettle is boiling 
kettle.boil(); 
//  action 2: the kettle is cooling down 
kettle.cool();
//  action 3: the kettle is falling 
kettle.fall();
//  2)
//  Noun: finger
//  action 1: the finger is pointing upwards
finger.pointUpwards();
//  action 2: the finger is pointing downwards
finger.pointDownwards();
//  action 3: the finger is pulling a trigger
finger.pullTrigger();
//  3)
//  Noun: car
//  action 1: the car is driving forwards 
car.driveForwards();
//  action 2: the car is driving backwards
car.driveBackwards();
//  action 3: the car is breaking
car.break();
//  4)
//  Noun: mouse
//  action 1: the mouse is running
mouse.run();
//  action 2: the mouse is sleeping
mouse.sleep();
//  action 3: the mouse is hiding
mouse.hide();
//  5)
//  Noun: turbine 
//  action 1: the turbine is rotating
turbine.rotate();
//  action 2: the turbine is generating electricity 
turbine.generateElectricity();
//  action 3: the turbine is powering the city
turbine.powerCity();
//  6)
//  Noun: university
//  action 1: the university is enrolling new students
uni.enrollNewStudents();
//  action 2: the university is opening a library
uni.openingLibrary();
//  action 3: the university is hiring tutors
uni.hiringTutors();
//  7)
//  Noun: farmland
//  action 1: the farmland is growing onions
farmland.growingOnions();
//  action 2: the farmland is growing sweetcorn
farmland.growingCorn();
//  action 3: the farmland is growing potatoes
farmland.growingPotatoes();
//  8)
//  Noun: singer
//  action 1: the singer is performing tonight
singer.performingTonight();
//  action 2: the singer is hiring a manager
singer.hiringManager();
//  action 3: the singer is learning to code
singer.learningCoding();
//  9) 
//  Noun: computer
//  action 1: the computer is reading data
pc.readsData();
//  action 2: the computer is analysing statistics
pc.analyseStatistics();
//  action 3: the computer is rendering graphics
pc.renderGraphics();
//  10)
//  Noun: theatre
//  action 1: the theatre is hiring actors
theatre.hiringActors();
//  action 2: the theatre is showing shakespeare
theatre.perfShakespeare();
//  action 3: the theatre is closing
theatre.closing();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
