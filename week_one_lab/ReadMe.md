Part 1:
    Make Note:
        cmake in anubis is running version 3.18.4 as of 1/25/23

Part 2:
    Make Note:
        make help
        The following are some of the valid targets for this Makefile:
        ... all (the default if no target is provided)
        ... clean
        ... depend
        ... edit_cache
        ... rebuild_cache
        ... hello_world - compiled and linked executable
        ... hello.o - compiled c/c++ object file
        ... hello.i - visual studio intermediary file
        ... hello.s - source code (assembly) file
Part 3:
    Answer the Following:
        1.The paths used by target_sources and target_include_directories are relative, not absolute. What file or folder are they relative to?
            Answer: Relative to the location of CMakeLists.txt file
        2.What some differences between cmake and ninja?
            Answer: ninja is a build system, cmake is a mata-build system producing other build systems
        3.Why is it important to run cmake in its own directory?
            Answer: It creates a bunch of "random crap." (as quoted from the Lab manual)