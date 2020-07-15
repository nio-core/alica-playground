-- premake5.lua

workspace "microservices"
   configurations { "Debug", "Release" }
   postbuildmessage "Copying dependencies..."   

project "MicroserviceAgent"
   kind "ConsoleApp"
   language "C++"
   cppdialect "C++14"
   targetdir "bin/%{cfg.buildcfg}"

   buildcommands {
      --"make %{cfg.buildcfg}"
      "make"
   }

   libdirs { 
      --os.findlib("uuid")
      --"../essentials/id_manager/**" ,
      --"../alica/alica_engine/**",
   }

 --  links{ 
 --     "uuid" 
 --  }

   linkoptions {
      "-pthread"
   }

   linkoptions { 
      "../alica/alica_engine/bin/Debug/libalica_engine.a", 
      "../dynamic-role-assignment/bin/Debug/libdynamic_role_assignment.a", 
      "../essentials/id_manager/bin/Debug/libid_manager.a",
      "../essentials/system_config/bin/Debug/libsystem_config.a",
      "../essentials/fsystem/bin/Debug/libfsystem.a",
      "../alica-supplementary/alica_capnzero_proxy/bin/Debug/libalica_capnzero_proxy.a",
      "../capnzero/capnzero/bin/Debug/libcapnzero.a",
      "../capnzero/id_capnzero/bin/Debug/libid_capnzero.a",
      
      "../libzmq/cmake-build/lib/libzmq.a",
      "../capnproto/c++/.libs/libcapnp.a",
      "../capnproto/c++/.libs/libkj.a",
      "../yaml-cpp/build/libyaml-cpp.a",

      --"../alica/alica_solver_interface/bin/Debug/libalica_solver_interface.a",
      --"../alica/alica_common_config/bin/Debug/libalica_common_config.a", 
      --"../essentials/event_handling/bin/Debug/libevent_handling.a",
      --"uuid" 
   }

   includedirs { 
      "include",
      "include/microservice",
      "alica_plans/microservices/src/include",

      "../alica/alica_engine/include",
      "../alica/alica_solver_interface/include" ,
      --"../alica/alica_simple_solver/include" ,
      "../alica/alica_common_config/include" ,
      -- "../alica/alica_dummy_proxy/include" ,
      "../alica-supplementary/alica_capnzero_proxy/include" ,
      "../essentials/id_manager/include" , 
      "../essentials/system_config/include" , 
      "../essentials/fsystem/include" ,
      "../essentials/event_handling/include" ,
      "../capnzero/capnzero/include",
      
      "../capnproto/c++/src",
      "../libzmq/include",
      --"../yaml-cpp/include" ,
      
      --"../googletest/googletest/include",
      --"alica_tests/include" ,
      --"alica_tests/autogenerated/include" ,
   }
   
   files {
      "**.c++",
      "include/**.h",
      "src/microservice/**.cpp", 
      -- "../essentials/id_manager/**" ,
      -- "../alica/**",
      "alica_plans/microservices/src/include/**.h", 
      "alica_plans/microservices/src/src/**.cpp",
   }

   --defines { 
   --   "_KJ_NAMESPACE=kj" 
   --}

   excludes {
      "alica/alica_tests/**",
      "alica_tests/**",
      --"../essentials/id_manager/src/test/**"
   }

   -- defines { 
   --    "ALICA_DEBUG_ENABLED"
   -- }

   defines { "ALICA_DEBUG_ENABLED" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"

   if _ACTION == "clean" then
      os.rmdir("bin")
      os.rmdir("build")
   end


