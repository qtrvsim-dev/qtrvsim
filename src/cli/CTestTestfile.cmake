# CMake generated Testfile for 
# Source directory: /home/jingqing3948/Develop/github-qtrvsim/qtrvsim/src/cli
# Build directory: /home/jingqing3948/Develop/github-qtrvsim/qtrvsim/src/cli
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cli_stalls "/usr/bin/cmake" "--build" "." "--target" "cli_test_stalls")
set_tests_properties(cli_stalls PROPERTIES  WORKING_DIRECTORY "/home/jingqing3948/Develop/github-qtrvsim/qtrvsim" _BACKTRACE_TRIPLES "/home/jingqing3948/Develop/github-qtrvsim/qtrvsim/cmake/TestingTools.cmake;40;add_test;/home/jingqing3948/Develop/github-qtrvsim/qtrvsim/src/cli/CMakeLists.txt;52;add_cli_test;/home/jingqing3948/Develop/github-qtrvsim/qtrvsim/src/cli/CMakeLists.txt;0;")
add_test(cli_asm_error "/usr/bin/cmake" "--build" "." "--target" "cli_test_asm_error")
set_tests_properties(cli_asm_error PROPERTIES  WILL_FAIL "TRUE" WORKING_DIRECTORY "/home/jingqing3948/Develop/github-qtrvsim/qtrvsim" _BACKTRACE_TRIPLES "/home/jingqing3948/Develop/github-qtrvsim/qtrvsim/cmake/TestingTools.cmake;40;add_test;/home/jingqing3948/Develop/github-qtrvsim/qtrvsim/src/cli/CMakeLists.txt;60;add_cli_test;/home/jingqing3948/Develop/github-qtrvsim/qtrvsim/src/cli/CMakeLists.txt;0;")
