lab18test: sl_list.h lab_18_unit_test.o sl_node.h
	g++ -Wall -g -o lab18 sl_list.cpp lab_18_unit_test.o sl_node.cpp

lab18: sl_list.cpp sl_node.cpp
	g++ -Wall -g -c sl_list.cpp sl_node.cpp

lab18_unit: lab_18_unit_test.cpp
	g++ -Wall -g -c lab_18_unit_test.cpp

lab17test: sl_node.h lab_17_unit_test.o
	g++ -Wall -g -o lab17 sl_node.cpp lab_17_unit_test.o

lab17: sl_node.cpp
	g++ -Wall -g -c sl_node.cpp

lab17_unit: lab_17_unit_test.cpp
	g++ -Wall -g -c lab_17_unit_test.cpp

lab12test: lab_12.o lab_12_unit_test.o
	g++ -Wall -g -o lab12 lab_12.o lab_12_unit_test.o

lab12: lab_12.cpp
	g++ -Wall -g -c lab_12.cpp

lab12_unit: lab_12_unit_test.cpp
	g++ -Wall -g -c lab_12_unit_test.cpp