# Disaster-Management-System
On Console project of cpp with the concepts of OOP and DSA


		This is a on-console c++ project of Disaster Management System which is created by using concepts OOP and DSA.. The uses of Vectors in this project makes it the project that can be used by DSA students to learn the use of Vectors and see that how it facilitates to decrease the lines of code in project of C++.
		

		Classes used in Project
		

		1- Date
		• Contained Class of Disaster
		2- Time
		• Contained Class of Disaster
		3- Disaster
		• Container Class of Date and Time
		• Parent Class of User, Earthquake, Flood, Volcano, Tornado
		4- User
		• Child Class of Disaster
		5- Earthquake
		• Child Class of Disaster
		6- Flood
		• Child Class of Disaster
		7- Volcano
		• Child Class of Disaster
		8- Tornado
		• Child Class of Disaster
		9- EmergencyService
		• Parent Class of Victim
		10- Victim
		• Child Class of EmergencyService
		

		

		

		Filing used in Project
		

		Binary Files………………………………………………..
		

		1. IslamabadDisasterEarthquake 21. VictimEarthquakeIslamabad 
		2. LahoreDisasterEarthquake 22. VictimEarthquakeLahore
		3. KarachiDisasterEarthquake 23. VictimEarthquakeKarachi
		4. QuettaDisasterEarthquake 24. VictimEarthquakeQuetta
		5. PeshawarDisasterEarthquake 25. VictimEarthquakePeshawar
		6. IslamabadDisasterFlood 26. VictimFloodIslamabad
		7. LahoreDisasterFlood 27. VictimFloodLahore
		8. KarachiDisasterFlood 28. VictimFloodKarachi
		9. QuettaDisasterFlood 29. VictimFloodQuetta
		10. PeshawarDisasterFlood 30. VictimFloodPeshawar
		11. IslamabadDisasterVolcano 31. VictimVolcanoIslamabad
		12. LahoreDisasterVolcano 32. VictimVolcanoLahore
		13. KarachiDisasterVolcano 33. VictimVolcanoKarachi
		14. QuettaDisasterVolcano 34. VictimVolcanoQuetta
		15. PeshawarDisasterVolcano 35. VictimVolcanoPeshawar
		16. IslamabadDisasterTornado 36. VictimTornadoIslamabad 
		17. LahoreDisasterTornado 37. VictimTornadoLahore
		18. KarachiDisasterTornado 38. VictimTornadoKarachi
		19. QuettaDisasterTornado 39. VictimTornadoQuetta
		20. PeshawarDisasterTornado 40. VictimTornadoPeshawar
		

		

		

		

		

		

		
		Abstract:----------------------------------------------------------------------------------------------------------------
		The Disaster Management System that we developed is the first on-console OOP/DSA project in C++ which introduced some new Algorithms of C++ on-console coding. It effectively manages the data of disasters and affected people in them of different cities. User can input, store, search, delete and read records of different types of disasters of different cities and victims in them. 
		The system also tells user about the initial locations of the affected people and tells about the nearest shelter homes and hospitals near that areas in which we used Vectors(Data Structure of DSA).
		By utilizing many algorithms, the system provides the structured and modular approach to handle disasters such as earthquakes, storms, or the volcanic eruptions etc….. 
		During the development of the disaster management system, comprehensive testing and validation procedures were conducted to ensure the reliability and accuracy of the application. Test cases were designed to cover various scenarios and user interactions, evaluating the system's performance, responsiveness, and robustness.
		

		The results indicate that the disaster management system provides an effective solution for organizing and coordinating emergency response efforts. However, certain limitations and areas for improvement were identified, such as the integration of real-time data feeds or the inclusion of advanced visualization capabilities.
		

		In conclusion, the console-based disaster management system demonstrates the potential to streamline and enhance disaster response operations. It offers a user-friendly interface and a range of features to facilitate data management, resource allocation, and emergency planning. Further enhancements and integration with other systems can provide additional benefits in managing and mitigating the impact of disasters.
		

		

		Introduction:----------------------------------------------------------------------
		The Disaster Management System provides functionalities that enable users to input, store, read, search and delete information records about different types of disasters. This information includes details about affected areas, casualties, available resources, and emergency contact information. The system also tells user about the initial locations of the affected people and tells about the nearest shelter homes and hospitals near that areas. 
		By using this data, the system facilitates quick access to critical information during emergency situations. 
		

		Objective and Goals:-----------------------------------------------------------------
		The objective of the Disaster Management system are as follows:
		• To manage records of Different Disasters 
		• To manage records affected people in disaster in different cities. 
		• Manage Emergency service records 
		• Know about the initial locations of affected people andtell the user about the nearest hospitals and shelter homes where affected people can be shifted. 
		• Making user IDs to allow different users to access records.
		• Allowing to enter and store information about Disasters and Affected people in different cities separately.
		

		

		

		Design:-------------------------------------------------------------------------
		

		The overall design of the on-console Disaster Management System is focusing all the OOP concepts like Encapsulation, Instantiation, Inheritance, Polymorphism. Every class has some kind of relationship with other classes in this project. Some classes has a type of relationship with other classes (Composition/Aggregation) like classes of Date and Time has a type of relationship with Disaster class. And some classes is a type of relationship with other classes (Inheritance). For example:- if we take classes of Earthquake and Flood. Earthquake is a Disaster. Flood is a Disaster.
		Now in its update for DSA, it is also using the advance Data Structure Vectors and also some important Algorithms.
		

		

		Now we shall discuss some important classes that we used in our on-console project:
		1- Disaster class:
		This is the main class which has actual working in this project. As this is Disaster Management System so you will have understood that this class is working like the backbone of this project. This class has member functions that holds and manages all types of data about disaster like severity, date, time, location, life losses in disaster, property losses in disaster, disaster type. From it, we inherited some classes like Earthquake class, Flood class, Volcano class and Tornado class. These classes are the classes of disaster types but these vary due to their some unique data member like Magnitude and Depth of Earthquake, Water level of Flood, Temperature during Volcanic Erruption, Air speed of Tornado.
		

		2- User class:
		This is also the very important class of this project which allows the user to create account and log in into the system to use it. This class is responsible for the authentication of the user and authorize the user to use the system.
		

		3- EmergencyService class:
		This class allows the user to maintain data about the service provided to the victims in disaster like number of shelter homes, number of camps, food items etc.
		

		4- Victim class:
		This class is inherited from EmergencyService class. It allows the user to manages the data about the affected people in disaster like Emergency Services provided to them, their initial location, nearest hospitals where they can be shifted etc… After setting the initial location of the victims, a member function of this class victimfinallocation is accessed which shows the nearest hospitals to that location and allows to select it and add in the victims record.
		

		

		

		For developing the Disaster Management System, we first created the classes of Date and Time and through composition, we used them in the Disaster because every Disaster has a specific date and time. From the Disaster class, we inherited four classes of four types of disasters like Earthquake, Flood, Volcanic eruptions, Tornado. After that, we created the class of in which we created the register and log in system. It is responsible for the user authentication and authorization. Then for the records of affected people we created a parent class of EmergencyService and its child class of Victims. The EmergencyService class manages the types of services provided to the affected people in disaster. The services includes shelter homes, camps, food items. The Victim class manages the data of the victims like their initial location, injury, final location etc.
		After selecting the initial location, the member function of the class shows the nearest hospitals and ask the user to select.
		Finally, we created the user-defined functions in the project which used file handling to add record of Disasters in specific city, number of victims in it, life losses, property loss during disaster, services provided to them and in the main function, 
		

		

		

		Conclusion:
		• The complete disaster management cycle includes the shaping of public policies and plans that either modify the causes of disasters or mitigate their effects on people, property, and infrastructure. 
		• Capacity to obtain, analyze, and communicate information on risks, relief needs and lessons learned from earlier disasters in order to formulate strategies for mitigation in future scenarios with the ability to clearly present and discuss their conclusions and the knowledge and arguments behind them. 


