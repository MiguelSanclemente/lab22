# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\crist\OneDrive\Escritorio\lab2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LAB2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LAB2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LAB2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LAB2.dir/flags.make

CMakeFiles/LAB2.dir/main.cpp.obj: CMakeFiles/LAB2.dir/flags.make
CMakeFiles/LAB2.dir/main.cpp.obj: C:/Users/crist/OneDrive/Escritorio/lab2/main.cpp
CMakeFiles/LAB2.dir/main.cpp.obj: CMakeFiles/LAB2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LAB2.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LAB2.dir/main.cpp.obj -MF CMakeFiles\LAB2.dir\main.cpp.obj.d -o CMakeFiles\LAB2.dir\main.cpp.obj -c C:\Users\crist\OneDrive\Escritorio\lab2\main.cpp

CMakeFiles/LAB2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LAB2.dir/main.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\crist\OneDrive\Escritorio\lab2\main.cpp > CMakeFiles\LAB2.dir\main.cpp.i

CMakeFiles/LAB2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LAB2.dir/main.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\crist\OneDrive\Escritorio\lab2\main.cpp -o CMakeFiles\LAB2.dir\main.cpp.s

CMakeFiles/LAB2.dir/Persona.cpp.obj: CMakeFiles/LAB2.dir/flags.make
CMakeFiles/LAB2.dir/Persona.cpp.obj: C:/Users/crist/OneDrive/Escritorio/lab2/Persona.cpp
CMakeFiles/LAB2.dir/Persona.cpp.obj: CMakeFiles/LAB2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LAB2.dir/Persona.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LAB2.dir/Persona.cpp.obj -MF CMakeFiles\LAB2.dir\Persona.cpp.obj.d -o CMakeFiles\LAB2.dir\Persona.cpp.obj -c C:\Users\crist\OneDrive\Escritorio\lab2\Persona.cpp

CMakeFiles/LAB2.dir/Persona.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LAB2.dir/Persona.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\crist\OneDrive\Escritorio\lab2\Persona.cpp > CMakeFiles\LAB2.dir\Persona.cpp.i

CMakeFiles/LAB2.dir/Persona.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LAB2.dir/Persona.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\crist\OneDrive\Escritorio\lab2\Persona.cpp -o CMakeFiles\LAB2.dir\Persona.cpp.s

CMakeFiles/LAB2.dir/Cliente.cpp.obj: CMakeFiles/LAB2.dir/flags.make
CMakeFiles/LAB2.dir/Cliente.cpp.obj: C:/Users/crist/OneDrive/Escritorio/lab2/Cliente.cpp
CMakeFiles/LAB2.dir/Cliente.cpp.obj: CMakeFiles/LAB2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LAB2.dir/Cliente.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LAB2.dir/Cliente.cpp.obj -MF CMakeFiles\LAB2.dir\Cliente.cpp.obj.d -o CMakeFiles\LAB2.dir\Cliente.cpp.obj -c C:\Users\crist\OneDrive\Escritorio\lab2\Cliente.cpp

CMakeFiles/LAB2.dir/Cliente.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LAB2.dir/Cliente.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\crist\OneDrive\Escritorio\lab2\Cliente.cpp > CMakeFiles\LAB2.dir\Cliente.cpp.i

CMakeFiles/LAB2.dir/Cliente.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LAB2.dir/Cliente.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\crist\OneDrive\Escritorio\lab2\Cliente.cpp -o CMakeFiles\LAB2.dir\Cliente.cpp.s

CMakeFiles/LAB2.dir/Vector_Cliente.cpp.obj: CMakeFiles/LAB2.dir/flags.make
CMakeFiles/LAB2.dir/Vector_Cliente.cpp.obj: C:/Users/crist/OneDrive/Escritorio/lab2/Vector_Cliente.cpp
CMakeFiles/LAB2.dir/Vector_Cliente.cpp.obj: CMakeFiles/LAB2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/LAB2.dir/Vector_Cliente.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LAB2.dir/Vector_Cliente.cpp.obj -MF CMakeFiles\LAB2.dir\Vector_Cliente.cpp.obj.d -o CMakeFiles\LAB2.dir\Vector_Cliente.cpp.obj -c C:\Users\crist\OneDrive\Escritorio\lab2\Vector_Cliente.cpp

CMakeFiles/LAB2.dir/Vector_Cliente.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LAB2.dir/Vector_Cliente.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\crist\OneDrive\Escritorio\lab2\Vector_Cliente.cpp > CMakeFiles\LAB2.dir\Vector_Cliente.cpp.i

CMakeFiles/LAB2.dir/Vector_Cliente.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LAB2.dir/Vector_Cliente.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\crist\OneDrive\Escritorio\lab2\Vector_Cliente.cpp -o CMakeFiles\LAB2.dir\Vector_Cliente.cpp.s

CMakeFiles/LAB2.dir/Empleado.cpp.obj: CMakeFiles/LAB2.dir/flags.make
CMakeFiles/LAB2.dir/Empleado.cpp.obj: C:/Users/crist/OneDrive/Escritorio/lab2/Empleado.cpp
CMakeFiles/LAB2.dir/Empleado.cpp.obj: CMakeFiles/LAB2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/LAB2.dir/Empleado.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LAB2.dir/Empleado.cpp.obj -MF CMakeFiles\LAB2.dir\Empleado.cpp.obj.d -o CMakeFiles\LAB2.dir\Empleado.cpp.obj -c C:\Users\crist\OneDrive\Escritorio\lab2\Empleado.cpp

CMakeFiles/LAB2.dir/Empleado.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LAB2.dir/Empleado.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\crist\OneDrive\Escritorio\lab2\Empleado.cpp > CMakeFiles\LAB2.dir\Empleado.cpp.i

CMakeFiles/LAB2.dir/Empleado.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LAB2.dir/Empleado.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\crist\OneDrive\Escritorio\lab2\Empleado.cpp -o CMakeFiles\LAB2.dir\Empleado.cpp.s

CMakeFiles/LAB2.dir/Vector_Empleado.cpp.obj: CMakeFiles/LAB2.dir/flags.make
CMakeFiles/LAB2.dir/Vector_Empleado.cpp.obj: C:/Users/crist/OneDrive/Escritorio/lab2/Vector_Empleado.cpp
CMakeFiles/LAB2.dir/Vector_Empleado.cpp.obj: CMakeFiles/LAB2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/LAB2.dir/Vector_Empleado.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LAB2.dir/Vector_Empleado.cpp.obj -MF CMakeFiles\LAB2.dir\Vector_Empleado.cpp.obj.d -o CMakeFiles\LAB2.dir\Vector_Empleado.cpp.obj -c C:\Users\crist\OneDrive\Escritorio\lab2\Vector_Empleado.cpp

CMakeFiles/LAB2.dir/Vector_Empleado.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LAB2.dir/Vector_Empleado.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\crist\OneDrive\Escritorio\lab2\Vector_Empleado.cpp > CMakeFiles\LAB2.dir\Vector_Empleado.cpp.i

CMakeFiles/LAB2.dir/Vector_Empleado.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LAB2.dir/Vector_Empleado.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\crist\OneDrive\Escritorio\lab2\Vector_Empleado.cpp -o CMakeFiles\LAB2.dir\Vector_Empleado.cpp.s

CMakeFiles/LAB2.dir/Producto.cpp.obj: CMakeFiles/LAB2.dir/flags.make
CMakeFiles/LAB2.dir/Producto.cpp.obj: C:/Users/crist/OneDrive/Escritorio/lab2/Producto.cpp
CMakeFiles/LAB2.dir/Producto.cpp.obj: CMakeFiles/LAB2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/LAB2.dir/Producto.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LAB2.dir/Producto.cpp.obj -MF CMakeFiles\LAB2.dir\Producto.cpp.obj.d -o CMakeFiles\LAB2.dir\Producto.cpp.obj -c C:\Users\crist\OneDrive\Escritorio\lab2\Producto.cpp

CMakeFiles/LAB2.dir/Producto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LAB2.dir/Producto.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\crist\OneDrive\Escritorio\lab2\Producto.cpp > CMakeFiles\LAB2.dir\Producto.cpp.i

CMakeFiles/LAB2.dir/Producto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LAB2.dir/Producto.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\crist\OneDrive\Escritorio\lab2\Producto.cpp -o CMakeFiles\LAB2.dir\Producto.cpp.s

CMakeFiles/LAB2.dir/Vector_Producto.cpp.obj: CMakeFiles/LAB2.dir/flags.make
CMakeFiles/LAB2.dir/Vector_Producto.cpp.obj: C:/Users/crist/OneDrive/Escritorio/lab2/Vector_Producto.cpp
CMakeFiles/LAB2.dir/Vector_Producto.cpp.obj: CMakeFiles/LAB2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/LAB2.dir/Vector_Producto.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LAB2.dir/Vector_Producto.cpp.obj -MF CMakeFiles\LAB2.dir\Vector_Producto.cpp.obj.d -o CMakeFiles\LAB2.dir\Vector_Producto.cpp.obj -c C:\Users\crist\OneDrive\Escritorio\lab2\Vector_Producto.cpp

CMakeFiles/LAB2.dir/Vector_Producto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LAB2.dir/Vector_Producto.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\crist\OneDrive\Escritorio\lab2\Vector_Producto.cpp > CMakeFiles\LAB2.dir\Vector_Producto.cpp.i

CMakeFiles/LAB2.dir/Vector_Producto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LAB2.dir/Vector_Producto.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\crist\OneDrive\Escritorio\lab2\Vector_Producto.cpp -o CMakeFiles\LAB2.dir\Vector_Producto.cpp.s

CMakeFiles/LAB2.dir/Factura.cpp.obj: CMakeFiles/LAB2.dir/flags.make
CMakeFiles/LAB2.dir/Factura.cpp.obj: C:/Users/crist/OneDrive/Escritorio/lab2/Factura.cpp
CMakeFiles/LAB2.dir/Factura.cpp.obj: CMakeFiles/LAB2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/LAB2.dir/Factura.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LAB2.dir/Factura.cpp.obj -MF CMakeFiles\LAB2.dir\Factura.cpp.obj.d -o CMakeFiles\LAB2.dir\Factura.cpp.obj -c C:\Users\crist\OneDrive\Escritorio\lab2\Factura.cpp

CMakeFiles/LAB2.dir/Factura.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LAB2.dir/Factura.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\crist\OneDrive\Escritorio\lab2\Factura.cpp > CMakeFiles\LAB2.dir\Factura.cpp.i

CMakeFiles/LAB2.dir/Factura.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LAB2.dir/Factura.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\crist\OneDrive\Escritorio\lab2\Factura.cpp -o CMakeFiles\LAB2.dir\Factura.cpp.s

CMakeFiles/LAB2.dir/Menu.cpp.obj: CMakeFiles/LAB2.dir/flags.make
CMakeFiles/LAB2.dir/Menu.cpp.obj: C:/Users/crist/OneDrive/Escritorio/lab2/Menu.cpp
CMakeFiles/LAB2.dir/Menu.cpp.obj: CMakeFiles/LAB2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/LAB2.dir/Menu.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LAB2.dir/Menu.cpp.obj -MF CMakeFiles\LAB2.dir\Menu.cpp.obj.d -o CMakeFiles\LAB2.dir\Menu.cpp.obj -c C:\Users\crist\OneDrive\Escritorio\lab2\Menu.cpp

CMakeFiles/LAB2.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LAB2.dir/Menu.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\crist\OneDrive\Escritorio\lab2\Menu.cpp > CMakeFiles\LAB2.dir\Menu.cpp.i

CMakeFiles/LAB2.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LAB2.dir/Menu.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\crist\OneDrive\Escritorio\lab2\Menu.cpp -o CMakeFiles\LAB2.dir\Menu.cpp.s

# Object files for target LAB2
LAB2_OBJECTS = \
"CMakeFiles/LAB2.dir/main.cpp.obj" \
"CMakeFiles/LAB2.dir/Persona.cpp.obj" \
"CMakeFiles/LAB2.dir/Cliente.cpp.obj" \
"CMakeFiles/LAB2.dir/Vector_Cliente.cpp.obj" \
"CMakeFiles/LAB2.dir/Empleado.cpp.obj" \
"CMakeFiles/LAB2.dir/Vector_Empleado.cpp.obj" \
"CMakeFiles/LAB2.dir/Producto.cpp.obj" \
"CMakeFiles/LAB2.dir/Vector_Producto.cpp.obj" \
"CMakeFiles/LAB2.dir/Factura.cpp.obj" \
"CMakeFiles/LAB2.dir/Menu.cpp.obj"

# External object files for target LAB2
LAB2_EXTERNAL_OBJECTS =

LAB2.exe: CMakeFiles/LAB2.dir/main.cpp.obj
LAB2.exe: CMakeFiles/LAB2.dir/Persona.cpp.obj
LAB2.exe: CMakeFiles/LAB2.dir/Cliente.cpp.obj
LAB2.exe: CMakeFiles/LAB2.dir/Vector_Cliente.cpp.obj
LAB2.exe: CMakeFiles/LAB2.dir/Empleado.cpp.obj
LAB2.exe: CMakeFiles/LAB2.dir/Vector_Empleado.cpp.obj
LAB2.exe: CMakeFiles/LAB2.dir/Producto.cpp.obj
LAB2.exe: CMakeFiles/LAB2.dir/Vector_Producto.cpp.obj
LAB2.exe: CMakeFiles/LAB2.dir/Factura.cpp.obj
LAB2.exe: CMakeFiles/LAB2.dir/Menu.cpp.obj
LAB2.exe: CMakeFiles/LAB2.dir/build.make
LAB2.exe: CMakeFiles/LAB2.dir/linkLibs.rsp
LAB2.exe: CMakeFiles/LAB2.dir/objects1.rsp
LAB2.exe: CMakeFiles/LAB2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable LAB2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LAB2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LAB2.dir/build: LAB2.exe
.PHONY : CMakeFiles/LAB2.dir/build

CMakeFiles/LAB2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LAB2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LAB2.dir/clean

CMakeFiles/LAB2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\crist\OneDrive\Escritorio\lab2 C:\Users\crist\OneDrive\Escritorio\lab2 C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug C:\Users\crist\OneDrive\Escritorio\lab2\cmake-build-debug\CMakeFiles\LAB2.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/LAB2.dir/depend

