# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/mina/clion-2016.3.5/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/mina/clion-2016.3.5/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mina/AdaptiveBinaryImageCompression

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mina/AdaptiveBinaryImageCompression/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/abic.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/abic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/abic.dir/flags.make

CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o: CMakeFiles/abic.dir/flags.make
CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o: ../src/code/Algorithms/BTC.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mina/AdaptiveBinaryImageCompression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o -c /home/mina/AdaptiveBinaryImageCompression/src/code/Algorithms/BTC.cpp

CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mina/AdaptiveBinaryImageCompression/src/code/Algorithms/BTC.cpp > CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.i

CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mina/AdaptiveBinaryImageCompression/src/code/Algorithms/BTC.cpp -o CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.s

CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o.requires:

.PHONY : CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o.requires

CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o.provides: CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o.requires
	$(MAKE) -f CMakeFiles/abic.dir/build.make CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o.provides.build
.PHONY : CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o.provides

CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o.provides.build: CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o


CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o: CMakeFiles/abic.dir/flags.make
CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o: ../src/code/Algorithms/BWTRLEdecoder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mina/AdaptiveBinaryImageCompression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o -c /home/mina/AdaptiveBinaryImageCompression/src/code/Algorithms/BWTRLEdecoder.cpp

CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mina/AdaptiveBinaryImageCompression/src/code/Algorithms/BWTRLEdecoder.cpp > CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.i

CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mina/AdaptiveBinaryImageCompression/src/code/Algorithms/BWTRLEdecoder.cpp -o CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.s

CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o.requires:

.PHONY : CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o.requires

CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o.provides: CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o.requires
	$(MAKE) -f CMakeFiles/abic.dir/build.make CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o.provides.build
.PHONY : CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o.provides

CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o.provides.build: CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o


CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o: CMakeFiles/abic.dir/flags.make
CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o: ../src/code/Algorithms/BWTRLEencoder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mina/AdaptiveBinaryImageCompression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o -c /home/mina/AdaptiveBinaryImageCompression/src/code/Algorithms/BWTRLEencoder.cpp

CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mina/AdaptiveBinaryImageCompression/src/code/Algorithms/BWTRLEencoder.cpp > CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.i

CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mina/AdaptiveBinaryImageCompression/src/code/Algorithms/BWTRLEencoder.cpp -o CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.s

CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o.requires:

.PHONY : CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o.requires

CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o.provides: CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o.requires
	$(MAKE) -f CMakeFiles/abic.dir/build.make CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o.provides.build
.PHONY : CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o.provides

CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o.provides.build: CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o


CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o: CMakeFiles/abic.dir/flags.make
CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o: ../src/code/Utils/Display.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mina/AdaptiveBinaryImageCompression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o -c /home/mina/AdaptiveBinaryImageCompression/src/code/Utils/Display.cpp

CMakeFiles/abic.dir/src/code/Utils/Display.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abic.dir/src/code/Utils/Display.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mina/AdaptiveBinaryImageCompression/src/code/Utils/Display.cpp > CMakeFiles/abic.dir/src/code/Utils/Display.cpp.i

CMakeFiles/abic.dir/src/code/Utils/Display.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abic.dir/src/code/Utils/Display.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mina/AdaptiveBinaryImageCompression/src/code/Utils/Display.cpp -o CMakeFiles/abic.dir/src/code/Utils/Display.cpp.s

CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o.requires:

.PHONY : CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o.requires

CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o.provides: CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o.requires
	$(MAKE) -f CMakeFiles/abic.dir/build.make CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o.provides.build
.PHONY : CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o.provides

CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o.provides.build: CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o


CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o: CMakeFiles/abic.dir/flags.make
CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o: ../src/code/Utils/FileHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mina/AdaptiveBinaryImageCompression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o -c /home/mina/AdaptiveBinaryImageCompression/src/code/Utils/FileHandler.cpp

CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mina/AdaptiveBinaryImageCompression/src/code/Utils/FileHandler.cpp > CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.i

CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mina/AdaptiveBinaryImageCompression/src/code/Utils/FileHandler.cpp -o CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.s

CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o.requires:

.PHONY : CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o.requires

CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o.provides: CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o.requires
	$(MAKE) -f CMakeFiles/abic.dir/build.make CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o.provides.build
.PHONY : CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o.provides

CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o.provides.build: CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o


CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o: CMakeFiles/abic.dir/flags.make
CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o: ../src/code/Utils/Statistics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mina/AdaptiveBinaryImageCompression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o -c /home/mina/AdaptiveBinaryImageCompression/src/code/Utils/Statistics.cpp

CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mina/AdaptiveBinaryImageCompression/src/code/Utils/Statistics.cpp > CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.i

CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mina/AdaptiveBinaryImageCompression/src/code/Utils/Statistics.cpp -o CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.s

CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o.requires:

.PHONY : CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o.requires

CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o.provides: CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o.requires
	$(MAKE) -f CMakeFiles/abic.dir/build.make CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o.provides.build
.PHONY : CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o.provides

CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o.provides.build: CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o


CMakeFiles/abic.dir/src/code/main.cpp.o: CMakeFiles/abic.dir/flags.make
CMakeFiles/abic.dir/src/code/main.cpp.o: ../src/code/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mina/AdaptiveBinaryImageCompression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/abic.dir/src/code/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/abic.dir/src/code/main.cpp.o -c /home/mina/AdaptiveBinaryImageCompression/src/code/main.cpp

CMakeFiles/abic.dir/src/code/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abic.dir/src/code/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mina/AdaptiveBinaryImageCompression/src/code/main.cpp > CMakeFiles/abic.dir/src/code/main.cpp.i

CMakeFiles/abic.dir/src/code/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abic.dir/src/code/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mina/AdaptiveBinaryImageCompression/src/code/main.cpp -o CMakeFiles/abic.dir/src/code/main.cpp.s

CMakeFiles/abic.dir/src/code/main.cpp.o.requires:

.PHONY : CMakeFiles/abic.dir/src/code/main.cpp.o.requires

CMakeFiles/abic.dir/src/code/main.cpp.o.provides: CMakeFiles/abic.dir/src/code/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/abic.dir/build.make CMakeFiles/abic.dir/src/code/main.cpp.o.provides.build
.PHONY : CMakeFiles/abic.dir/src/code/main.cpp.o.provides

CMakeFiles/abic.dir/src/code/main.cpp.o.provides.build: CMakeFiles/abic.dir/src/code/main.cpp.o


# Object files for target abic
abic_OBJECTS = \
"CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o" \
"CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o" \
"CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o" \
"CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o" \
"CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o" \
"CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o" \
"CMakeFiles/abic.dir/src/code/main.cpp.o"

# External object files for target abic
abic_EXTERNAL_OBJECTS =

abic: CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o
abic: CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o
abic: CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o
abic: CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o
abic: CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o
abic: CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o
abic: CMakeFiles/abic.dir/src/code/main.cpp.o
abic: CMakeFiles/abic.dir/build.make
abic: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.9
abic: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.9
abic: CMakeFiles/abic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mina/AdaptiveBinaryImageCompression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable abic"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/abic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/abic.dir/build: abic

.PHONY : CMakeFiles/abic.dir/build

CMakeFiles/abic.dir/requires: CMakeFiles/abic.dir/src/code/Algorithms/BTC.cpp.o.requires
CMakeFiles/abic.dir/requires: CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEdecoder.cpp.o.requires
CMakeFiles/abic.dir/requires: CMakeFiles/abic.dir/src/code/Algorithms/BWTRLEencoder.cpp.o.requires
CMakeFiles/abic.dir/requires: CMakeFiles/abic.dir/src/code/Utils/Display.cpp.o.requires
CMakeFiles/abic.dir/requires: CMakeFiles/abic.dir/src/code/Utils/FileHandler.cpp.o.requires
CMakeFiles/abic.dir/requires: CMakeFiles/abic.dir/src/code/Utils/Statistics.cpp.o.requires
CMakeFiles/abic.dir/requires: CMakeFiles/abic.dir/src/code/main.cpp.o.requires

.PHONY : CMakeFiles/abic.dir/requires

CMakeFiles/abic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/abic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/abic.dir/clean

CMakeFiles/abic.dir/depend:
	cd /home/mina/AdaptiveBinaryImageCompression/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mina/AdaptiveBinaryImageCompression /home/mina/AdaptiveBinaryImageCompression /home/mina/AdaptiveBinaryImageCompression/cmake-build-debug /home/mina/AdaptiveBinaryImageCompression/cmake-build-debug /home/mina/AdaptiveBinaryImageCompression/cmake-build-debug/CMakeFiles/abic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/abic.dir/depend

