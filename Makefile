all:
	g++ main.cpp pic.cpp -o main -lopencv_core -lopencv_highgui -lopencv_nonfree -lopencv_features2d -lopencv_imgproc -lavcodec  -L/usr/local/lib/