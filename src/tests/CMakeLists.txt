if(BUILD_TESTING)
    add_executable(tests
        test_test.cpp
    )
    target_link_libraries(tests PRIVATE
        vACDM 
        GTest::gtest_main
        GTest::gtest
    )

    target_include_directories(tests PRIVATE
        ${CMAKE_SOURCE_DIR}/src 
        ${CMAKE_BINARY_DIR}      
        ${CMAKE_SOURCE_DIR}/external/include  
    )
    
    include(GoogleTest)
    gtest_discover_tests(tests)
endif()