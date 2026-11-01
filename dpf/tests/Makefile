#!/usr/bin/make -f
# Makefile for DGL #
# ---------------- #
# Created by falkTX
#

export DEBUG = true

include ../Makefile.base.mk

# ---------------------------------------------------------------------------------------------------------------------

BUILD_C_FLAGS   += $(DGL_FLAGS) -I..
BUILD_CXX_FLAGS += $(DGL_FLAGS) -I.. -I../dgl/src/pugl-upstream/include -DDONT_SET_USING_DGL_NAMESPACE
LINK_FLAGS      += -lpthread

# TODO fix within pugl
# BUILD_CXX_FLAGS += -Wno-extra -Wno-missing-field-initializers

ifeq ($(MACOS),true)
BUILD_CXX_FLAGS += -ObjC++ -DGL_SILENCE_DEPRECATION -Wno-deprecated-declarations
endif

# ---------------------------------------------------------------------------------------------------------------------

MANUAL_TESTS  =
UNIT_TESTS    = Base64 Color Point

ifeq ($(HAVE_CAIRO),true)
MANUAL_TESTS += Demo.cairo
endif

ifeq ($(HAVE_OPENGL),true)
MANUAL_TESTS += Demo.opengl2
MANUAL_TESTS += Demo.opengl3
MANUAL_TESTS += FileBrowserDialog
MANUAL_TESTS += NanoImage
MANUAL_TESTS += NanoSubWidgets
endif

ifneq ($(WASM),true)
UNIT_TESTS   += Application
UNIT_TESTS   += Window.stub
ifeq ($(HAVE_CAIRO),true)
UNIT_TESTS   += Window.cairo
endif
ifeq ($(HAVE_OPENGL),true)
UNIT_TESTS   += Window.opengl2
UNIT_TESTS   += Window.opengl3
endif
ifeq ($(HAVE_VULKAN),true)
UNIT_TESTS   += Window.vulkan
endif
endif

MANUAL_TARGETS = $(MANUAL_TESTS:%=../build/tests/%$(APP_EXT))
UNIT_TARGET    = $(UNIT_TESTS:%=../build/tests/%$(APP_EXT))

ALL_OBJS  = $(MANUAL_TESTS:%=../build/tests/%.cpp.o)
ALL_OBJS += $(UNIT_TESTS:%=../build/tests/%.cpp.o)

# ---------------------------------------------------------------------------------------------------------------------

all: $(MANUAL_TARGETS) $(UNIT_TARGET)

# ---------------------------------------------------------------------------------------------------------------------

Demo.opengl: ../build/tests/Demo.opengl$(APP_EXT)
FileBrowserDialog: ../build/tests/FileBrowserDialog$(APP_EXT)
NanoImage: ../build/tests/NanoImage$(APP_EXT)
NanoSubWidgets: ../build/tests/NanoSubWidgets$(APP_EXT)

# ---------------------------------------------------------------------------------------------------------------------

define RUN_TEST

	${1}
endef

# 	valgrind --leak-check=full $@

run: $(UNIT_TARGET)
	$(foreach TEST,$^,$(call RUN_TEST,$(TEST)))

# ---------------------------------------------------------------------------------------------------------------------

clean:
	rm -rf ../build/tests

# ---------------------------------------------------------------------------------------------------------------------
# building steps

../build/tests/%.c.o: %.c
	-@mkdir -p ../build/tests
	@echo "Compiling $<"
	$(SILENT)$(CC) $< $(BUILD_C_FLAGS) -c -o $@

../build/tests/%.cpp.o: %.cpp
	-@mkdir -p ../build/tests
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@

../build/tests/%.cpp.cairo.o: %.cpp
	-@mkdir -p ../build/tests
	@echo "Compiling $< (Cairo)"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) $(CAIRO_FLAGS) -DDGL_CAIRO -c -o $@

../build/tests/%.cpp.opengl2.o: %.cpp
	-@mkdir -p ../build/tests
	@echo "Compiling $< (OpenGL2)"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) $(OPENGL_FLAGS) -DDGL_OPENGL -c -o $@

../build/tests/%.cpp.opengl3.o: %.cpp
	-@mkdir -p ../build/tests
	@echo "Compiling $< (OpenGL3)"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) $(OPENGL_FLAGS) -DDGL_OPENGL -DDGL_USE_OPENGL3 -c -o $@

../build/tests/%.cpp.stub.o: %.cpp
	-@mkdir -p ../build/tests
	@echo "Compiling $< (Stub)"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@

../build/tests/%.cpp.vulkan.o: %.cpp
	-@mkdir -p ../build/tests
	@echo "Compiling $< (Vulkan)"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) $(OPENGL_FLAGS) -DDGL_VULKAN -c -o $@

# ---------------------------------------------------------------------------------------------------------------------
# linking steps

../build/tests/%$(APP_EXT): ../build/tests/%.cpp.o
	@echo "Linking $*"
	$(SILENT)$(CXX) $< $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) -o $@

../build/tests/%.cairo$(APP_EXT): ../build/tests/%.cpp.cairo.o
	@echo "Linking $*"
	$(SILENT)$(CXX) $< $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) $(CAIRO_LIBS) -o $@

../build/tests/%.opengl2$(APP_EXT): ../build/tests/%.cpp.opengl2.o
	@echo "Linking $*"
	$(SILENT)$(CXX) $< $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) $(OPENGL_LIBS) -o $@

../build/tests/%.opengl3$(APP_EXT): ../build/tests/%.cpp.opengl3.o
	@echo "Linking $*"
	$(SILENT)$(CXX) $< $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) $(OPENGL_LIBS) -o $@

../build/tests/%.stub$(APP_EXT): ../build/tests/%.cpp.stub.o
	@echo "Linking $*"
	$(SILENT)$(CXX) $< $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) -o $@

../build/tests/%.vulkan$(APP_EXT): ../build/tests/%.cpp.vulkan.o
	@echo "Linking $*"
	$(SILENT)$(CXX) $< $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) $(VULKAN_LIBS) -o $@

# ---------------------------------------------------------------------------------------------------------------------
# linking steps (special, links against DGL static lib)

../build/tests/Demo.cairo$(APP_EXT): ../build/tests/Demo.cpp.cairo.o
	@echo "Linking Demo (Cairo)"
	$(SILENT)$(CXX) $^ $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) $(CAIRO_LIBS) -o $@

../build/tests/Demo.opengl2$(APP_EXT): ../build/tests/Demo.cpp.opengl2.o
	@echo "Linking Demo (OpenGL)"
	$(SILENT)$(CXX) $^ $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) $(OPENGL_LIBS) -o $@

../build/tests/Demo.opengl3$(APP_EXT): ../build/tests/Demo.cpp.opengl3.o
	@echo "Linking Demo (OpenGL)"
	$(SILENT)$(CXX) $^ $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) $(OPENGL_LIBS) -o $@

../build/tests/Demo.vulkan$(APP_EXT): ../build/tests/Demo.cpp.vulkan.o
	@echo "Linking Demo (Vulkan)"
	$(SILENT)$(CXX) $^ $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) $(VULKAN_LIBS) -o $@

../build/tests/FileBrowserDialog$(APP_EXT): ../build/tests/FileBrowserDialog.cpp.o
	@echo "Linking FileBrowserDialog (OpenGL2)"
	$(SILENT)$(CXX) $^ $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) $(OPENGL_LIBS) -o $@

../build/tests/NanoImage$(APP_EXT): ../build/tests/NanoImage.cpp.o
	@echo "Linking NanoImage (OpenGL2)"
	$(SILENT)$(CXX) $^ $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) $(OPENGL_LIBS) -o $@

../build/tests/NanoSubWidgets$(APP_EXT): ../build/tests/NanoSubWidgets.cpp.o
	@echo "Linking NanoSubWidgets (OpenGL2)"
	$(SILENT)$(CXX) $^ $(LINK_FLAGS) $(DGL_SYSTEM_LIBS) $(OPENGL_LIBS) -o $@

# ---------------------------------------------------------------------------------------------------------------------

-include $(ALL_OBJS:%.o=%.d)
-include ../build/tests/Demo.cpp.cairo.d
-include ../build/tests/Demo.cpp.opengl2.d
-include ../build/tests/Demo.cpp.opengl3.d
-include ../build/tests/Demo.cpp.vulkan.d

# ---------------------------------------------------------------------------------------------------------------------
