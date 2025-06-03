#include <gtest/gtest.h>
#include "Core.h"
#include "Room.h"

TEST(RoomTest, ConnectionTest){
    std::string output;
    
    
    testing::internal::CaptureStdout();
    
    Room r1 = Room("room1");
    Room r2 = Room("room2");
    
    r1.addRoom(&r2);
    r2.addRoom(&r1);
    
    for (Room* room : r1.getConnectedRooms()){
    	std::cout << room->getName() << "\n";
    }
    
    output = testing::internal::GetCapturedStdout();    
    EXPECT_EQ(output, "room2\n");    
}

/* Room r1 = Room("room1");
    Room r2 = Room("room2");
    Room r3 = Room("room3");
    Room r4 = Room("room4");
    
    r1.addRoom(&r2);
    r2.addRoom(&r1);
    r1.addRoom(&r3);
    r3.addRoom(&r1);
    r1.addRoom(&r4);
    r4.addRoom(&r1);
    
    Animatronic freddy = Animatronic("Freddy Fazbear", &r1, 0);
    std::cout << freddy.where()->getName();
    
    freddy.update();
    std::cout << freddy.where()->getName();
    
    freddy.update();
    std::cout << freddy.where()->getName();
    
    freddy.update();
    std::cout << freddy.where()->getName();
    
    freddy.update();
    std::cout << freddy.where()->getName();
    
    freddy.update();
    std::cout << freddy.where()->getName();*/
    
    
    
/*
Room r1 = Room("room1");
    Room r2 = Room("room2");
    Room r3 = Room("room3");
    Room r4 = Room("room4");
    
    r1.addRoom(&r2);
    r2.addRoom(&r1);
    r2.addRoom(&r3);
    r3.addRoom(&r2);
    r3.addRoom(&r4);
    r4.addRoom(&r3);  
    
    Animatronic freddy = Animatronic("Freddy", &r1, 0);
    Animatronic bonny = Animatronic("Bonny", &r1, 0);
    r1.addAnimatronic(&freddy);
    r1.addAnimatronic(&bonny);
    
    
    MoveManager mm = MoveManager();
    mm.addAnimatronic(&freddy);
    mm.addAnimatronic(&bonny);
    
    
    std::cout << 0 << std::endl;    
    std::cout << "r1:" << std::endl;
    for (Animatronic* animatronic : r1.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r2:" << std::endl;
    for (Animatronic* animatronic : r2.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r3:" << std::endl;
    for (Animatronic* animatronic : r3.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r4:" << std::endl;
    for (Animatronic* animatronic : r4.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    
    
 
    std::cout << 1 << std::endl;  
    mm.update();
    std::cout << "r1:" << std::endl;
    for (Animatronic* animatronic : r1.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r2:" << std::endl;
    for (Animatronic* animatronic : r2.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r3:" << std::endl;
    for (Animatronic* animatronic : r3.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r4:" << std::endl;
    for (Animatronic* animatronic : r4.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    
    
    
    std::cout << 2 << std::endl;  
    mm.update();
    std::cout << "r1:" << std::endl;
    for (Animatronic* animatronic : r1.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r2:" << std::endl;
    for (Animatronic* animatronic : r2.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r3:" << std::endl;
    for (Animatronic* animatronic : r3.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r4:" << std::endl;
    for (Animatronic* animatronic : r4.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    
    
    
    std::cout << 3 << std::endl;  
    mm.update();
    std::cout << "r1:" << std::endl;
    for (Animatronic* animatronic : r1.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r2:" << std::endl;
    for (Animatronic* animatronic : r2.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r3:" << std::endl;
    for (Animatronic* animatronic : r3.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
    
    std::cout << "r4:" << std::endl;
    for (Animatronic* animatronic : r4.getAnimatronics()){
    	std::cout << animatronic->getName() << " ";
    }
    std::cout << std::endl;
*/


/*DBworker dbw = DBworker("Nights.db");

    std::string name;
    int night;
    
    std::cin >> name;
    std::cin >> night;
    
    std::cout << dbw.getAnimatronicStartRoom(name, night);
    std::cout << dbw.getAnimatronicActivity(name, night);*/

/*RoomManager rm = RoomManager();
    MoveManager mm = MoveManager();
    AnimatronicManager am = AnimatronicManager(&mm, &rm, 5);

    Core core = Core(&mm, &rm);
    core.run();*/
