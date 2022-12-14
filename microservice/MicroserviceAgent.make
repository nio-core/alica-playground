# Alternative GNU Make project makefile autogenerated by Premake

ifndef config
  config=debug
endif

ifndef verbose
  SILENT = @
endif

.PHONY: clean prebuild

SHELLTYPE := posix
ifeq (.exe,$(findstring .exe,$(ComSpec)))
	SHELLTYPE := msdos
endif

# Configurations
# #############################################

ifeq ($(origin CC), default)
  CC = clang
endif
ifeq ($(origin CXX), default)
  CXX = clang++
endif
ifeq ($(origin AR), default)
  AR = ar
endif
INCLUDES += -Iinclude -Iinclude/microservice -I../alica_plans/microservices/src/include -I../../alica/alica_engine/include -I../../alica/alica_solver_interface/include -I../../alica/alica_common_config/include -I../../alica-supplementary/alica_capnzero_proxy/include -I../../essentials/id_manager/include -I../../essentials/system_config/include -I../../essentials/fsystem/include -I../../essentials/event_handling/include -I../../capnzero/capnzero/include -I../../capnproto/c++/src -I../../libzmq/include
FORCE_INCLUDE +=
ALL_CPPFLAGS += $(CPPFLAGS) -MMD -MP $(DEFINES) $(INCLUDES)
ALL_RESFLAGS += $(RESFLAGS) $(DEFINES) $(INCLUDES)
LIBS +=
LDDEPS +=
ALL_LDFLAGS += $(LDFLAGS) -pthread ../../alica/alica_engine/bin/Debug/libalica_engine.a ../../dynamic-role-assignment/bin/Debug/libdynamic_role_assignment.a ../../essentials/id_manager/bin/Debug/libid_manager.a ../../essentials/system_config/bin/Debug/libsystem_config.a ../../essentials/fsystem/bin/Debug/libfsystem.a ../../alica-supplementary/alica_capnzero_proxy/bin/Debug/libalica_capnzero_proxy.a ../../capnzero/capnzero/bin/Debug/libcapnzero.a ../../capnzero/id_capnzero/bin/Debug/libid_capnzero.a ../../libzmq/cmake-build/lib/libzmq.a ../../capnproto/c++/.libs/libcapnp.a ../../capnproto/c++/.libs/libkj.a ../../yaml-cpp/build/libyaml-cpp.a
LINKCMD = $(CXX) -o "$@" $(OBJECTS) $(RESOURCES) $(ALL_LDFLAGS) $(LIBS)
define PREBUILDCMDS
endef
define PRELINKCMDS
endef
define POSTBUILDCMDS
endef

ifeq ($(config),debug)
TARGETDIR = bin/Debug
TARGET = $(TARGETDIR)/MicroserviceAgent
OBJDIR = obj/Debug
DEFINES += -DALICA_DEBUG_ENABLED -DDEBUG
ALL_CFLAGS += $(CFLAGS) $(ALL_CPPFLAGS) -g
ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CPPFLAGS) -g -std=c++14

else ifeq ($(config),release)
TARGETDIR = bin/Release
TARGET = $(TARGETDIR)/MicroserviceAgent
OBJDIR = obj/Release
DEFINES += -DALICA_DEBUG_ENABLED -DNDEBUG
ALL_CFLAGS += $(CFLAGS) $(ALL_CPPFLAGS) -O2
ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CPPFLAGS) -O2 -std=c++14

else
  $(error "invalid configuration $(config)")
endif

# Per File Configurations
# #############################################


# File sets
# #############################################

OBJECTS :=

OBJECTS += $(OBJDIR)/BehaviourCreator.o
OBJECTS += $(OBJDIR)/ConditionCreator.o
OBJECTS += $(OBJDIR)/ConstraintCreator.o
OBJECTS += $(OBJDIR)/DatabasePlan1560261035058Constraints.o
OBJECTS += $(OBJDIR)/DomainBehaviour.o
OBJECTS += $(OBJDIR)/DomainBehaviourImpl.o
OBJECTS += $(OBJDIR)/DomainCondition.o
OBJECTS += $(OBJDIR)/DomainConditionImpl.o
OBJECTS += $(OBJDIR)/InitPlan1560257414138Constraints.o
OBJECTS += $(OBJDIR)/Initialization.o
OBJECTS += $(OBJDIR)/Initialization1560257552366.o
OBJECTS += $(OBJDIR)/Initialization1560257552366Constraints.o
OBJECTS += $(OBJDIR)/InitializationImpl.o
OBJECTS += $(OBJDIR)/MicroserviceAgent.o
OBJECTS += $(OBJDIR)/PreCondition1558109687647.o
OBJECTS += $(OBJDIR)/PreCondition1558109687647Impl.o
OBJECTS += $(OBJDIR)/PreCondition1560257552366.o
OBJECTS += $(OBJDIR)/PreCondition1560257552368Impl.o
OBJECTS += $(OBJDIR)/PreCondition1560262281954.o
OBJECTS += $(OBJDIR)/PreCondition1560262281956Impl.o
OBJECTS += $(OBJDIR)/PreCondition1560262295454.o
OBJECTS += $(OBJDIR)/PreCondition1560262295455Impl.o
OBJECTS += $(OBJDIR)/PreCondition1560626197460.o
OBJECTS += $(OBJDIR)/PreCondition1560626197462Impl.o
OBJECTS += $(OBJDIR)/Proxy.o
OBJECTS += $(OBJDIR)/Proxy1560626197460.o
OBJECTS += $(OBJDIR)/Proxy1560626197460Constraints.o
OBJECTS += $(OBJDIR)/ProxyImpl.o
OBJECTS += $(OBJDIR)/ProxyPlan1560261023006Constraints.o
OBJECTS += $(OBJDIR)/Registry.o
OBJECTS += $(OBJDIR)/Registry1560262295454.o
OBJECTS += $(OBJDIR)/Registry1560262295454Constraints.o
OBJECTS += $(OBJDIR)/RegistryImpl.o
OBJECTS += $(OBJDIR)/RegistryPlan1560260998173Constraints.o
OBJECTS += $(OBJDIR)/RuntimePlan1560262020541Constraints.o
OBJECTS += $(OBJDIR)/Service.o
OBJECTS += $(OBJDIR)/Service1560262281954.o
OBJECTS += $(OBJDIR)/Service1560262281954Constraints.o
OBJECTS += $(OBJDIR)/ServiceImpl.o
OBJECTS += $(OBJDIR)/ServicePlan1560261009408Constraints.o
OBJECTS += $(OBJDIR)/UtilityFunction1560257414138.o
OBJECTS += $(OBJDIR)/UtilityFunction1560257414138Impl.o
OBJECTS += $(OBJDIR)/UtilityFunction1560260998173.o
OBJECTS += $(OBJDIR)/UtilityFunction1560260998173Impl.o
OBJECTS += $(OBJDIR)/UtilityFunction1560261009408.o
OBJECTS += $(OBJDIR)/UtilityFunction1560261009408Impl.o
OBJECTS += $(OBJDIR)/UtilityFunction1560261023006.o
OBJECTS += $(OBJDIR)/UtilityFunction1560261023006Impl.o
OBJECTS += $(OBJDIR)/UtilityFunction1560261035058.o
OBJECTS += $(OBJDIR)/UtilityFunction1560261035058Impl.o
OBJECTS += $(OBJDIR)/UtilityFunction1560262020541.o
OBJECTS += $(OBJDIR)/UtilityFunction1560262020541Impl.o
OBJECTS += $(OBJDIR)/UtilityFunctionCreator.o

# Rules
# #############################################

all: $(TARGET)
	@:

$(TARGET): $(OBJECTS) $(LDDEPS) | $(TARGETDIR)
	$(PRELINKCMDS)
	@echo Linking MicroserviceAgent
	$(SILENT) $(LINKCMD)
	$(POSTBUILDCMDS)

$(TARGETDIR):
	@echo Creating $(TARGETDIR)
ifeq (posix,$(SHELLTYPE))
	$(SILENT) mkdir -p $(TARGETDIR)
else
	$(SILENT) mkdir $(subst /,\\,$(TARGETDIR))
endif

$(OBJDIR):
	@echo Creating $(OBJDIR)
ifeq (posix,$(SHELLTYPE))
	$(SILENT) mkdir -p $(OBJDIR)
else
	$(SILENT) mkdir $(subst /,\\,$(OBJDIR))
endif

clean:
	@echo Cleaning MicroserviceAgent
ifeq (posix,$(SHELLTYPE))
	$(SILENT) rm -f  $(TARGET)
	$(SILENT) rm -rf $(OBJDIR)
else
	$(SILENT) if exist $(subst /,\\,$(TARGET)) del $(subst /,\\,$(TARGET))
	$(SILENT) if exist $(subst /,\\,$(OBJDIR)) rmdir /s /q $(subst /,\\,$(OBJDIR))
endif

prebuild: | $(OBJDIR)
	$(PREBUILDCMDS)

ifneq (,$(PCH))
$(OBJECTS): $(GCH) | $(PCH_PLACEHOLDER)
$(GCH): $(PCH) | prebuild
	@echo $(notdir $<)
	$(SILENT) $(CXX) -x c++-header $(ALL_CXXFLAGS) -o "$@" -MF "$(@:%.gch=%.d)" -c "$<"
$(PCH_PLACEHOLDER): $(GCH) | $(OBJDIR)
ifeq (posix,$(SHELLTYPE))
	$(SILENT) touch "$@"
else
	$(SILENT) echo $null >> "$@"
endif
else
$(OBJECTS): | prebuild
endif


# File Rules
# #############################################

$(OBJDIR)/Initialization.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/behaviours/Initialization.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/Initialization1560257552366.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/behaviours/Initialization1560257552366.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/Proxy.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/behaviours/Proxy.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/Proxy1560626197460.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/behaviours/Proxy1560626197460.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/Registry.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/behaviours/Registry.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/Registry1560262295454.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/behaviours/Registry1560262295454.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/Service.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/behaviours/Service.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/Service1560262281954.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/behaviours/Service1560262281954.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/Initialization1560257552366Constraints.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/constraints/Initialization1560257552366Constraints.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/Proxy1560626197460Constraints.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/constraints/Proxy1560626197460Constraints.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/Registry1560262295454Constraints.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/constraints/Registry1560262295454Constraints.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/Service1560262281954Constraints.o: ../alica_plans/microservices/gen-src/src/gen/behaviours/constraints/Service1560262281954Constraints.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/PreCondition1558109687647.o: ../alica_plans/microservices/gen-src/src/gen/conditions/PreCondition1558109687647.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/PreCondition1560257552366.o: ../alica_plans/microservices/gen-src/src/gen/conditions/PreCondition1560257552366.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/PreCondition1560262281954.o: ../alica_plans/microservices/gen-src/src/gen/conditions/PreCondition1560262281954.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/PreCondition1560262295454.o: ../alica_plans/microservices/gen-src/src/gen/conditions/PreCondition1560262295454.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/PreCondition1560626197460.o: ../alica_plans/microservices/gen-src/src/gen/conditions/PreCondition1560626197460.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/DatabasePlan1560261035058Constraints.o: ../alica_plans/microservices/gen-src/src/gen/constraints/DatabasePlan1560261035058Constraints.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/InitPlan1560257414138Constraints.o: ../alica_plans/microservices/gen-src/src/gen/constraints/InitPlan1560257414138Constraints.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/ProxyPlan1560261023006Constraints.o: ../alica_plans/microservices/gen-src/src/gen/constraints/ProxyPlan1560261023006Constraints.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/RegistryPlan1560260998173Constraints.o: ../alica_plans/microservices/gen-src/src/gen/constraints/RegistryPlan1560260998173Constraints.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/RuntimePlan1560262020541Constraints.o: ../alica_plans/microservices/gen-src/src/gen/constraints/RuntimePlan1560262020541Constraints.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/ServicePlan1560261009408Constraints.o: ../alica_plans/microservices/gen-src/src/gen/constraints/ServicePlan1560261009408Constraints.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/BehaviourCreator.o: ../alica_plans/microservices/gen-src/src/gen/creators/BehaviourCreator.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/ConditionCreator.o: ../alica_plans/microservices/gen-src/src/gen/creators/ConditionCreator.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/ConstraintCreator.o: ../alica_plans/microservices/gen-src/src/gen/creators/ConstraintCreator.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunctionCreator.o: ../alica_plans/microservices/gen-src/src/gen/creators/UtilityFunctionCreator.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/DomainBehaviour.o: ../alica_plans/microservices/gen-src/src/gen/domain/DomainBehaviour.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/DomainCondition.o: ../alica_plans/microservices/gen-src/src/gen/domain/DomainCondition.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560257414138.o: ../alica_plans/microservices/gen-src/src/gen/utilityfunctions/UtilityFunction1560257414138.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560260998173.o: ../alica_plans/microservices/gen-src/src/gen/utilityfunctions/UtilityFunction1560260998173.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560261009408.o: ../alica_plans/microservices/gen-src/src/gen/utilityfunctions/UtilityFunction1560261009408.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560261023006.o: ../alica_plans/microservices/gen-src/src/gen/utilityfunctions/UtilityFunction1560261023006.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560261035058.o: ../alica_plans/microservices/gen-src/src/gen/utilityfunctions/UtilityFunction1560261035058.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560262020541.o: ../alica_plans/microservices/gen-src/src/gen/utilityfunctions/UtilityFunction1560262020541.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/InitializationImpl.o: ../alica_plans/microservices/gen-src/src/impl/behaviours/InitializationImpl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/ProxyImpl.o: ../alica_plans/microservices/gen-src/src/impl/behaviours/ProxyImpl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/RegistryImpl.o: ../alica_plans/microservices/gen-src/src/impl/behaviours/RegistryImpl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/ServiceImpl.o: ../alica_plans/microservices/gen-src/src/impl/behaviours/ServiceImpl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/PreCondition1558109687647Impl.o: ../alica_plans/microservices/gen-src/src/impl/conditions/PreCondition1558109687647Impl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/PreCondition1560257552368Impl.o: ../alica_plans/microservices/gen-src/src/impl/conditions/PreCondition1560257552368Impl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/PreCondition1560262281956Impl.o: ../alica_plans/microservices/gen-src/src/impl/conditions/PreCondition1560262281956Impl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/PreCondition1560262295455Impl.o: ../alica_plans/microservices/gen-src/src/impl/conditions/PreCondition1560262295455Impl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/PreCondition1560626197462Impl.o: ../alica_plans/microservices/gen-src/src/impl/conditions/PreCondition1560626197462Impl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/DomainBehaviourImpl.o: ../alica_plans/microservices/gen-src/src/impl/domain/DomainBehaviourImpl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/DomainConditionImpl.o: ../alica_plans/microservices/gen-src/src/impl/domain/DomainConditionImpl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560257414138Impl.o: ../alica_plans/microservices/gen-src/src/impl/utilityfunctions/UtilityFunction1560257414138Impl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560260998173Impl.o: ../alica_plans/microservices/gen-src/src/impl/utilityfunctions/UtilityFunction1560260998173Impl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560261009408Impl.o: ../alica_plans/microservices/gen-src/src/impl/utilityfunctions/UtilityFunction1560261009408Impl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560261023006Impl.o: ../alica_plans/microservices/gen-src/src/impl/utilityfunctions/UtilityFunction1560261023006Impl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560261035058Impl.o: ../alica_plans/microservices/gen-src/src/impl/utilityfunctions/UtilityFunction1560261035058Impl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/UtilityFunction1560262020541Impl.o: ../alica_plans/microservices/gen-src/src/impl/utilityfunctions/UtilityFunction1560262020541Impl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/MicroserviceAgent.o: src/microservice/MicroserviceAgent.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"

-include $(OBJECTS:%.o=%.d)
ifneq (,$(PCH))
  -include $(PCH_PLACEHOLDER).d
endif